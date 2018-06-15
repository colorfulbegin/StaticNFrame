// -------------------------------------------------------------------------
//    @FileName         :    NFCDataTableManager.cpp
//    @Author           :    GaoYi
//    @Date             :    2018/06/15
//    @Email			:    445267987@qq.com
//    @Module           :    NFPluginModule
//
// -------------------------------------------------------------------------
#include "NFCDataTableManager.h"
#include "NFDataTable.h"
#include <NFComm/NFMath/NFMath.h>

NFCDataTableManager::NFCDataTableManager(const uint64_t objectId)
    : mObjectId(objectId)
{

}

NFCDataTableManager::~NFCDataTableManager()
{
    ReleaseAll();
}

uint64_t NFCDataTableManager::GetObjectId()
{
	return mObjectId;
}

void NFCDataTableManager::ReleaseAll()
{
    for(size_t i = 0; i < mTables.size(); ++i)
    {
        NFSafeDelete(mTables[i]);
    }

	mTables.clear();
    mTableCallbacks.clear();
}

bool NFCDataTableManager::Exist(const std::string& name) const
{
	size_t index;
	if (!FindIndex(name, index))
	{
		return false;
	}

	if (index < mTables.size())
	{
		if (mTables[index] != nullptr)
		{
			return true;
		}
	}

	return false;
}

bool NFCDataTableManager::Exist(const std::string& name, size_t& index) const
{
	return FindIndex(name, index);
}

bool NFCDataTableManager::AddTable(uint64_t objectId, const std::string table_name, const NFCData& col_type_list, const int8_t feature)
{
    NF_ASSERT_MSG(table_name.size() > 0, "Table name is invalid");
    NF_ASSERT_MSG(col_type_list.GetType() == DT_ARRAY, "Table name is invalid");

    NFDataTable* pTable = NF_NEW NFDataTable();
    pTable->SetName(table_name);
    pTable->SetColCount(col_type_list.GetArray().size());
    for(size_t i = 0; i < col_type_list.GetArray().size(); ++i)
    {
        pTable->SetColType(i, col_type_list.GetArray()[i].GetType());
    }

    pTable->SetFeature(feature);

    return AddTableInternal(pTable);
}

bool NFCDataTableManager::GetTableData(const std::string& name, const int row, const int col, NFCData& value) const
{
    NFDataTable* pTable = GetTable(name);
    if(pTable == nullptr)
    {
        return false;
    }

    return pTable->GetValue(row, col, value);
}

void NFCDataTableManager::OnEventHandler(const uint64_t entity_id, const DATA_TABLE_EVENT_DATA& xEventData, const NFCData& oldData, const NFCData& newData)
{
    for(auto& iter : mTableCallbacks)
    {
        //TODO:check name from xEventData
        //xEventData.name
        (*iter)(entity_id, xEventData, oldData, newData);
    }
}

bool NFCDataTableManager::FindIndex(const std::string& name, size_t& index) const
{
	auto it = mIndices.find(name);
	if (it != mIndices.end())
	{
		index = it->second;
		return true;
	}

	return false;
}

bool NFCDataTableManager::AddTableInternal(NFDataTable* pTable)
{
    assert(pTable != nullptr);
	if (Exist(pTable->GetName()))
	{
		return false;
	}

	mIndices.emplace(pTable->GetName(), mTables.size());
	mTables.push_back(pTable);

	return true;
}

bool NFCDataTableManager::AddTableCallback(const std::string& table_name, const DATA_TABLE_EVENT_FUNCTOR_PTR& cb)
{
    //table_name
    mTableCallbacks.push_back(cb);
    return true;
}

void NFCDataTableManager::Clear()
{
    ReleaseAll();
}

NFDataTable* NFCDataTableManager::GetTable(const std::string& name) const
{
	size_t index;
	if (!FindIndex(name, index))
	{
		return nullptr;
	}

	NF_ASSERT(index < mTables.size());
	return mTables[index];
}

size_t NFCDataTableManager::GetCount() const
{
    return mTables.size();
}

NFDataTable* NFCDataTableManager::GetTableByIndex(size_t index) const
{
    NF_ASSERT_RET_VAL(index < GetCount(), nullptr);
    return mTables[index];
}

bool NFCDataTableManager::SetTableBool(const std::string& name, const int row, const int col, const bool value)
{
    NFDataTable* pTable = GetTable(name);
	if (pTable == nullptr) return false;

	NFCData* pData = pTable->MutableData(row, col);
	if (pData == nullptr) return false;

    //callback
    do
    {
        if(pData->GetBool() == value)
        {
            return true;
        }

		NFCData oldData = *pData;
		pData->SetBool(value);

        if(!mTableCallbacks.empty())
        {
            DATA_TABLE_EVENT_DATA xTableEventData;
            xTableEventData.nOpType = NFDataTable::TABLE_UPDATE;
            xTableEventData.nRow = row;
            xTableEventData.nCol = col;
            xTableEventData.strName = name;

            OnEventHandler(mObjectId, xTableEventData, oldData, *pData);
        }
    }
    while(0);

    return true;
}

bool NFCDataTableManager::SetTableInt(const std::string& name, const int row, const int col, const int32_t value)
{
	NFDataTable* pTable = GetTable(name);
	if (pTable == nullptr) return false;

	NFCData* pData = pTable->MutableData(row, col);
	if (pData == nullptr) return false;

	//callback
	do
	{
		if (pData->GetInt() == value)
		{
			return true;
		}

		NFCData oldData = *pData;
		pData->SetInt(value);

		if (!mTableCallbacks.empty())
		{
			DATA_TABLE_EVENT_DATA xTableEventData;
			xTableEventData.nOpType = NFDataTable::TABLE_UPDATE;
			xTableEventData.nRow = row;
			xTableEventData.nCol = col;
			xTableEventData.strName = name;

			OnEventHandler(mObjectId, xTableEventData, oldData, *pData);
		}
	} while (0);

	return true;
}

bool NFCDataTableManager::SetTableInt64(const std::string& name, const int row, const int col, const int64_t value)
{
	NFDataTable* pTable = GetTable(name);
	if (pTable == nullptr) return false;

	NFCData* pData = pTable->MutableData(row, col);
	if (pData == nullptr) return false;

	//callback
	do
	{
		if (pData->GetInt64() == value)
		{
			return true;
		}

		NFCData oldData = *pData;
		pData->SetInt64(value);

		if (!mTableCallbacks.empty())
		{
			DATA_TABLE_EVENT_DATA xTableEventData;
			xTableEventData.nOpType = NFDataTable::TABLE_UPDATE;
			xTableEventData.nRow = row;
			xTableEventData.nCol = col;
			xTableEventData.strName = name;

			OnEventHandler(mObjectId, xTableEventData, oldData, *pData);
		}
	} while (0);

	return true;
}

bool NFCDataTableManager::SetTableFloat(const std::string& name, const int row, const int col, const float value)
{
	NFDataTable* pTable = GetTable(name);
	if (pTable == nullptr) return false;

	NFCData* pData = pTable->MutableData(row, col);
	if (pData == nullptr) return false;

	//callback
	do
	{
		if (almostEqual(pData->GetFloat(), value))
		{
			return true;
		}

		NFCData oldData = *pData;
		pData->SetFloat(value);

		if (!mTableCallbacks.empty())
		{
			DATA_TABLE_EVENT_DATA xTableEventData;
			xTableEventData.nOpType = NFDataTable::TABLE_UPDATE;
			xTableEventData.nRow = row;
			xTableEventData.nCol = col;
			xTableEventData.strName = name;

			OnEventHandler(mObjectId, xTableEventData, oldData, *pData);
		}
	} while (0);

	return true;
}

bool NFCDataTableManager::SetTableDouble(const std::string& name, const int row, const int col, const double value)
{
	NFDataTable* pTable = GetTable(name);
	if (pTable == nullptr) return false;

	NFCData* pData = pTable->MutableData(row, col);
	if (pData == nullptr) return false;

	//callback
	do
	{
		if (almostEqual(pData->GetDouble(),value))
		{
			return true;
		}

		NFCData oldData = *pData;
		pData->SetDouble(value);

		if (!mTableCallbacks.empty())
		{
			DATA_TABLE_EVENT_DATA xTableEventData;
			xTableEventData.nOpType = NFDataTable::TABLE_UPDATE;
			xTableEventData.nRow = row;
			xTableEventData.nCol = col;
			xTableEventData.strName = name;

			OnEventHandler(mObjectId, xTableEventData, oldData, *pData);
		}
	} while (0);

	return true;
}

bool NFCDataTableManager::SetTableString(const std::string& name, const int row, const int col, const std::string& value)
{
	NFDataTable* pTable = GetTable(name);
	if (pTable == nullptr) return false;

	NFCData* pData = pTable->MutableData(row, col);
	if (pData == nullptr) return false;

	//callback
	do
	{
		if (pData->GetString() == value)
		{
			return true;
		}

		NFCData oldData = *pData;
		pData->SetString(value);

		if (!mTableCallbacks.empty())
		{
			DATA_TABLE_EVENT_DATA xTableEventData;
			xTableEventData.nOpType = NFDataTable::TABLE_UPDATE;
			xTableEventData.nRow = row;
			xTableEventData.nCol = col;
			xTableEventData.strName = name;

			OnEventHandler(mObjectId, xTableEventData, oldData, *pData);
		}
	} while (0);

	return true;
}

bool NFCDataTableManager::GetTableBool(const std::string& name, const int row, const int col) const
{
    NFDataTable* pTable = GetTable(name);
    if(pTable == nullptr)
    {
        return NFCDataStatics::empty_boolean;
    }

    return pTable->GetBool(row, col);
}

int32_t NFCDataTableManager::GetTableInt(const std::string& name, const int row, const int col) const
{
	NFDataTable* pTable = GetTable(name);
	if (pTable == nullptr)
	{
		return static_cast<int32_t>(NFCDataStatics::empty_int);
	}

	return pTable->GetInt(row, col);
}

int64_t NFCDataTableManager::GetTableInt64(const std::string& name, const int row, const int col) const
{
	NFDataTable* pTable = GetTable(name);
	if (pTable == nullptr)
	{
		return NFCDataStatics::empty_int;
	}

	return pTable->GetInt64(row, col);
}

float NFCDataTableManager::GetTableFloat(const std::string& name, const int row, const int col) const
{
	NFDataTable* pTable = GetTable(name);
	if (pTable == nullptr)
	{
		return static_cast<float>(NFCDataStatics::empty_double);
	}

	return pTable->GetDouble(row, col);
}

double NFCDataTableManager::GetTableDouble(const std::string& name, const int row, const int col) const
{
	NFDataTable* pTable = GetTable(name);
	if (pTable == nullptr)
	{
		return NFCDataStatics::empty_double;
	}

	return pTable->GetDouble(row, col);
}

const std::string& NFCDataTableManager::GetTableString(const std::string& name, const int row, const int col) const
{
	NFDataTable* pTable = GetTable(name);
	if (pTable == nullptr)
	{
		return NFCDataStatics::empty_string;
	}

	return pTable->GetString(row, col);
}

const NFCData::Array& NFCDataTableManager::GetArray(const std::string& name, size_t row, size_t col) const
{
	NFDataTable* pTable = GetTable(name);
	if (pTable == nullptr)
	{
		return NFCDataStatics::empty_array;
	}

	return pTable->GetArray(row, col);
}

const NFCData::List& NFCDataTableManager::GetList(const std::string& name, size_t row, size_t col) const
{
	NFDataTable* pTable = GetTable(name);
	if (pTable == nullptr)
	{
		return NFCDataStatics::empty_list;
	}

	return pTable->GetList(row, col);
}

const NFCData::MapStringData& NFCDataTableManager::GetMapStringObject(const std::string& name, size_t row, size_t col) const
{
	NFDataTable* pTable = GetTable(name);
	if (pTable == nullptr)
	{
		return NFCDataStatics::empty_map_string;
	}

	return pTable->GetMapStringObject(row, col);
}

const NFCData::MapIntData& NFCDataTableManager::GetMapIntObject(const std::string& name, size_t row, size_t col) const
{
	NFDataTable* pTable = GetTable(name);
	if (pTable == nullptr)
	{
		return NFCDataStatics::empty_map_int;
	}

	return pTable->GetMapIntObject(row, col);
}

NFCData::Array* NFCDataTableManager::MutableArray(const std::string& name, size_t row, size_t col)
{
	NFDataTable* pTable = GetTable(name);
	if (pTable == nullptr)
	{
		return nullptr;
	}

	return pTable->MutableArray(row, col);
}

NFCData::List* NFCDataTableManager::MutableList(const std::string& name, size_t row, size_t col)
{
	NFDataTable* pTable = GetTable(name);
	if (pTable == nullptr)
	{
		return nullptr;
	}

	return pTable->MutableList(row, col);
}

NFCData::MapStringData* NFCDataTableManager::MutableMapStringData(const std::string& name, size_t row, size_t col)
{
	NFDataTable* pTable = GetTable(name);
	if (pTable == nullptr)
	{
		return nullptr;
	}

	return pTable->MutableMapStringData(row, col);
}

NFCData::MapIntData* NFCDataTableManager::MutableMapIntData(const std::string& name, size_t row, size_t col)
{
	NFDataTable* pTable = GetTable(name);
	if (pTable == nullptr)
	{
		return nullptr;
	}

	return pTable->MutableMapIntData(row, col);
}

bool NFCDataTableManager::AddArrayItem(const std::string& name, size_t row, size_t col, const NFCData& data)
{
	NFDataTable* pTable = GetTable(name);
	if (pTable == nullptr)
	{
		return false;
	}

	return pTable->AddArrayItem(row, col, data);
}

bool NFCDataTableManager::AddListItem(const std::string& name, size_t row, size_t col, const NFCData& data)
{
	NFDataTable* pTable = GetTable(name);
	if (pTable == nullptr)
	{
		return false;
	}

	return pTable->AddListItem(row, col, data);
}

bool NFCDataTableManager::AddMapStringItem(const std::string& name, size_t row, size_t col, const std::string& key, const NFCData& value)
{
	NFDataTable* pTable = GetTable(name);
	if (pTable == nullptr)
	{
		return false;
	}

	return pTable->AddMapStringItem(row, col, key, value);
}

bool NFCDataTableManager::AddMapIntItem(const std::string& name, size_t row, size_t col, uint64_t key, const NFCData& value)
{
	NFDataTable* pTable = GetTable(name);
	if (pTable == nullptr)
	{
		return false;
	}

	return pTable->AddMapIntItem(row, col, key, value);
}

bool NFCDataTableManager::SetTableBool(uint32_t index, const int row, const int col, const bool value)
{
	NFDataTable* pTable = GetTableByIndex(index);
	if (pTable == nullptr) return false;

	NFCData* pData = pTable->MutableData(row, col);
	if (pData == nullptr) return false;

	//callback
	do
	{
		if (pData->GetBool() == value)
		{
			return true;
		}

		NFCData oldData = *pData;
		pData->SetBool(value);

		if (!mTableCallbacks.empty())
		{
			DATA_TABLE_EVENT_DATA xTableEventData;
			xTableEventData.nOpType = NFDataTable::TABLE_UPDATE;
			xTableEventData.nRow = row;
			xTableEventData.nCol = col;
			xTableEventData.strName = pTable->GetName();

			OnEventHandler(mObjectId, xTableEventData, oldData, *pData);
		}
	} while (0);

	return true;
}

bool NFCDataTableManager::SetTableInt(uint32_t index, const int row, const int col, const int32_t value)
{
	NFDataTable* pTable = GetTableByIndex(index);
	if (pTable == nullptr) return false;

	NFCData* pData = pTable->MutableData(row, col);
	if (pData == nullptr) return false;

	//callback
	do
	{
		if (pData->GetInt() == value)
		{
			return true;
		}

		NFCData oldData = *pData;
		pData->SetInt(value);

		if (!mTableCallbacks.empty())
		{
			DATA_TABLE_EVENT_DATA xTableEventData;
			xTableEventData.nOpType = NFDataTable::TABLE_UPDATE;
			xTableEventData.nRow = row;
			xTableEventData.nCol = col;
			xTableEventData.strName = pTable->GetName();

			OnEventHandler(mObjectId, xTableEventData, oldData, *pData);
		}
	} while (0);

	return true;
}

bool NFCDataTableManager::SetTableInt64(uint32_t index, const int row, const int col, const int64_t value)
{
	NFDataTable* pTable = GetTableByIndex(index);
	if (pTable == nullptr) return false;

	NFCData* pData = pTable->MutableData(row, col);
	if (pData == nullptr) return false;

	//callback
	do
	{
		if (pData->GetInt64() == value)
		{
			return true;
		}

		NFCData oldData = *pData;
		pData->SetInt64(value);

		if (!mTableCallbacks.empty())
		{
			DATA_TABLE_EVENT_DATA xTableEventData;
			xTableEventData.nOpType = NFDataTable::TABLE_UPDATE;
			xTableEventData.nRow = row;
			xTableEventData.nCol = col;
			xTableEventData.strName = pTable->GetName();

			OnEventHandler(mObjectId, xTableEventData, oldData, *pData);
		}
	} while (0);

	return true;
}

bool NFCDataTableManager::SetTableFloat(uint32_t index, const int row, const int col, const float value)
{
	NFDataTable* pTable = GetTableByIndex(index);
	if (pTable == nullptr) return false;

	NFCData* pData = pTable->MutableData(row, col);
	if (pData == nullptr) return false;

	//callback
	do
	{
		if (almostEqual(pData->GetFloat(), value))
		{
			return true;
		}

		NFCData oldData = *pData;
		pData->SetFloat(value);

		if (!mTableCallbacks.empty())
		{
			DATA_TABLE_EVENT_DATA xTableEventData;
			xTableEventData.nOpType = NFDataTable::TABLE_UPDATE;
			xTableEventData.nRow = row;
			xTableEventData.nCol = col;
			xTableEventData.strName = pTable->GetName();

			OnEventHandler(mObjectId, xTableEventData, oldData, *pData);
		}
	} while (0);

	return true;
}

bool NFCDataTableManager::SetTableDouble(uint32_t index, const int row, const int col, const double value)
{
	NFDataTable* pTable = GetTableByIndex(index);
	if (pTable == nullptr) return false;

	NFCData* pData = pTable->MutableData(row, col);
	if (pData == nullptr) return false;

	//callback
	do
	{
		if (almostEqual(pData->GetDouble(), value))
		{
			return true;
		}

		NFCData oldData = *pData;
		pData->SetDouble(value);

		if (!mTableCallbacks.empty())
		{
			DATA_TABLE_EVENT_DATA xTableEventData;
			xTableEventData.nOpType = NFDataTable::TABLE_UPDATE;
			xTableEventData.nRow = row;
			xTableEventData.nCol = col;
			xTableEventData.strName = pTable->GetName();

			OnEventHandler(mObjectId, xTableEventData, oldData, *pData);
		}
	} while (0);

	return true;
}

bool NFCDataTableManager::SetTableString(uint32_t index, const int row, const int col, const std::string& value)
{
	NFDataTable* pTable = GetTableByIndex(index);
	if (pTable == nullptr) return false;

	NFCData* pData = pTable->MutableData(row, col);
	if (pData == nullptr) return false;

	//callback
	do
	{
		if (pData->GetString() == value)
		{
			return true;
		}

		NFCData oldData = *pData;
		pData->SetString(value);

		if (!mTableCallbacks.empty())
		{
			DATA_TABLE_EVENT_DATA xTableEventData;
			xTableEventData.nOpType = NFDataTable::TABLE_UPDATE;
			xTableEventData.nRow = row;
			xTableEventData.nCol = col;
			xTableEventData.strName = pTable->GetName();

			OnEventHandler(mObjectId, xTableEventData, oldData, *pData);
		}
	} while (0);

	return true;
}

bool NFCDataTableManager::GetTableBool(uint32_t index, const int row, const int col) const
{
	NFDataTable* pTable = GetTableByIndex(index);
	if (pTable == nullptr)
	{
		return NFCDataStatics::empty_boolean;
	}

	return pTable->GetBool(row, col);
}

int32_t NFCDataTableManager::GetTableInt(uint32_t index, const int row, const int col) const
{
	NFDataTable* pTable = GetTableByIndex(index);
	if (pTable == nullptr)
	{
		return NFCDataStatics::empty_int;
	}

	return pTable->GetInt(row, col);
}

int64_t NFCDataTableManager::GetTableInt64(uint32_t index, const int row, const int col) const
{
	NFDataTable* pTable = GetTableByIndex(index);
	if (pTable == nullptr)
	{
		return NFCDataStatics::empty_int;
	}

	return pTable->GetInt64(row, col);
}

float NFCDataTableManager::GetTableFloat(uint32_t index, const int row, const int col) const
{
	NFDataTable* pTable = GetTableByIndex(index);
	if (pTable == nullptr)
	{
		return NFCDataStatics::empty_double;
	}

	return pTable->GetFloat(row, col);
}

double NFCDataTableManager::GetTableDouble(uint32_t index, const int row, const int col) const
{
	NFDataTable* pTable = GetTableByIndex(index);
	if (pTable == nullptr)
	{
		return NFCDataStatics::empty_double;
	}

	return pTable->GetDouble(row, col);
}

const std::string& NFCDataTableManager::GetTableString(uint32_t index, const int row, const int col) const
{
	NFDataTable* pTable = GetTableByIndex(index);
	if (pTable == nullptr)
	{
		return NFCDataStatics::empty_string;
	}

	return pTable->GetString(row, col);
}

const NFCData::Array& NFCDataTableManager::GetArray(uint32_t index, size_t row, size_t col) const
{
	NFDataTable* pTable = GetTableByIndex(index);
	if (pTable == nullptr)
	{
		return NFCDataStatics::empty_array;
	}

	return pTable->GetArray(row, col);
}

const NFCData::List& NFCDataTableManager::GetList(uint32_t index, size_t row, size_t col) const
{
	NFDataTable* pTable = GetTableByIndex(index);
	if (pTable == nullptr)
	{
		return NFCDataStatics::empty_list;
	}

	return pTable->GetList(row, col);
}

const NFCData::MapStringData& NFCDataTableManager::GetMapStringObject(uint32_t index, size_t row, size_t col) const
{
	NFDataTable* pTable = GetTableByIndex(index);
	if (pTable == nullptr)
	{
		return NFCDataStatics::empty_map_string;
	}

	return pTable->GetMapStringObject(row, col);
}

const NFCData::MapIntData& NFCDataTableManager::GetMapIntObject(uint32_t index, size_t row, size_t col) const
{
	NFDataTable* pTable = GetTableByIndex(index);
	if (pTable == nullptr)
	{
		return NFCDataStatics::empty_map_int;
	}

	return pTable->GetMapIntObject(row, col);
}

NFCData::Array* NFCDataTableManager::MutableArray(uint32_t index, size_t row, size_t col)
{
	NFDataTable* pTable = GetTableByIndex(index);
	if (pTable == nullptr)
	{
		return nullptr;
	}

	return pTable->MutableArray(row, col);
}

NFCData::List* NFCDataTableManager::MutableList(uint32_t index, size_t row, size_t col)
{
	NFDataTable* pTable = GetTableByIndex(index);
	if (pTable == nullptr)
	{
		return nullptr;
	}

	return pTable->MutableList(row, col);
}

NFCData::MapStringData* NFCDataTableManager::MutableMapStringData(uint32_t index, size_t row, size_t col)
{
	NFDataTable* pTable = GetTableByIndex(index);
	if (pTable == nullptr)
	{
		return nullptr;
	}

	return pTable->MutableMapStringData(row, col);
}

NFCData::MapIntData* NFCDataTableManager::MutableMapIntData(uint32_t index, size_t row, size_t col)
{
	NFDataTable* pTable = GetTableByIndex(index);
	if (pTable == nullptr)
	{
		return nullptr;
	}

	return pTable->MutableMapIntData(row, col);
}

bool NFCDataTableManager::AddArrayItem(uint32_t index, size_t row, size_t col, const NFCData& data)
{
	NFDataTable* pTable = GetTableByIndex(index);
	if (pTable == nullptr)
	{
		return false;
	}

	return pTable->AddArrayItem(row, col, data);
}

bool NFCDataTableManager::AddListItem(uint32_t index, size_t row, size_t col, const NFCData& data)
{
	NFDataTable* pTable = GetTableByIndex(index);
	if (pTable == nullptr)
	{
		return false;
	}

	return pTable->AddListItem(row, col, data);
}

bool NFCDataTableManager::AddMapStringItem(uint32_t index, size_t row, size_t col, const std::string& key, const NFCData& value)
{
	NFDataTable* pTable = GetTableByIndex(index);
	if (pTable == nullptr)
	{
		return false;
	}

	return pTable->AddMapStringItem(row, col, key, value);
}

bool NFCDataTableManager::AddMapIntItem(uint32_t index, size_t row, size_t col, uint64_t key, const NFCData& value)
{
	NFDataTable* pTable = GetTableByIndex(index);
	if (pTable == nullptr)
	{
		return false;
	}

	return pTable->AddMapIntItem(row, col, key, value);
}
