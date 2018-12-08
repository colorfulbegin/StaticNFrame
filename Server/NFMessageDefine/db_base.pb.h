// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: db_base.proto

#ifndef PROTOBUF_INCLUDED_db_5fbase_2eproto
#define PROTOBUF_INCLUDED_db_5fbase_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_db_5fbase_2eproto 

namespace protobuf_db_5fbase_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[3];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_db_5fbase_2eproto
namespace NFMsg {
class mongo_primary_key;
class mongo_primary_keyDefaultTypeInternal;
extern mongo_primary_keyDefaultTypeInternal _mongo_primary_key_default_instance_;
class test_gaoyi_table;
class test_gaoyi_tableDefaultTypeInternal;
extern test_gaoyi_tableDefaultTypeInternal _test_gaoyi_table_default_instance_;
class test_gaoyi_table_data;
class test_gaoyi_table_dataDefaultTypeInternal;
extern test_gaoyi_table_dataDefaultTypeInternal _test_gaoyi_table_data_default_instance_;
}  // namespace NFMsg
namespace google {
namespace protobuf {
template<> ::NFMsg::mongo_primary_key* Arena::CreateMaybeMessage<::NFMsg::mongo_primary_key>(Arena*);
template<> ::NFMsg::test_gaoyi_table* Arena::CreateMaybeMessage<::NFMsg::test_gaoyi_table>(Arena*);
template<> ::NFMsg::test_gaoyi_table_data* Arena::CreateMaybeMessage<::NFMsg::test_gaoyi_table_data>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace NFMsg {

// ===================================================================

class mongo_primary_key : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:NFMsg.mongo_primary_key) */ {
 public:
  mongo_primary_key();
  virtual ~mongo_primary_key();

  mongo_primary_key(const mongo_primary_key& from);

  inline mongo_primary_key& operator=(const mongo_primary_key& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  mongo_primary_key(mongo_primary_key&& from) noexcept
    : mongo_primary_key() {
    *this = ::std::move(from);
  }

  inline mongo_primary_key& operator=(mongo_primary_key&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const mongo_primary_key& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const mongo_primary_key* internal_default_instance() {
    return reinterpret_cast<const mongo_primary_key*>(
               &_mongo_primary_key_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(mongo_primary_key* other);
  friend void swap(mongo_primary_key& a, mongo_primary_key& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline mongo_primary_key* New() const final {
    return CreateMaybeMessage<mongo_primary_key>(NULL);
  }

  mongo_primary_key* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<mongo_primary_key>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const mongo_primary_key& from);
  void MergeFrom(const mongo_primary_key& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(mongo_primary_key* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string _id = 1;
  void clear__id();
  static const int kIdFieldNumber = 1;
  const ::std::string& _id() const;
  void set__id(const ::std::string& value);
  #if LANG_CXX11
  void set__id(::std::string&& value);
  #endif
  void set__id(const char* value);
  void set__id(const char* value, size_t size);
  ::std::string* mutable__id();
  ::std::string* release__id();
  void set_allocated__id(::std::string* _id);

  // string primary = 2;
  void clear_primary();
  static const int kPrimaryFieldNumber = 2;
  const ::std::string& primary() const;
  void set_primary(const ::std::string& value);
  #if LANG_CXX11
  void set_primary(::std::string&& value);
  #endif
  void set_primary(const char* value);
  void set_primary(const char* value, size_t size);
  ::std::string* mutable_primary();
  ::std::string* release_primary();
  void set_allocated_primary(::std::string* primary);

  // @@protoc_insertion_point(class_scope:NFMsg.mongo_primary_key)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr _id_;
  ::google::protobuf::internal::ArenaStringPtr primary_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_db_5fbase_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class test_gaoyi_table_data : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:NFMsg.test_gaoyi_table.data) */ {
 public:
  test_gaoyi_table_data();
  virtual ~test_gaoyi_table_data();

  test_gaoyi_table_data(const test_gaoyi_table_data& from);

  inline test_gaoyi_table_data& operator=(const test_gaoyi_table_data& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  test_gaoyi_table_data(test_gaoyi_table_data&& from) noexcept
    : test_gaoyi_table_data() {
    *this = ::std::move(from);
  }

  inline test_gaoyi_table_data& operator=(test_gaoyi_table_data&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const test_gaoyi_table_data& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const test_gaoyi_table_data* internal_default_instance() {
    return reinterpret_cast<const test_gaoyi_table_data*>(
               &_test_gaoyi_table_data_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(test_gaoyi_table_data* other);
  friend void swap(test_gaoyi_table_data& a, test_gaoyi_table_data& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline test_gaoyi_table_data* New() const final {
    return CreateMaybeMessage<test_gaoyi_table_data>(NULL);
  }

  test_gaoyi_table_data* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<test_gaoyi_table_data>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const test_gaoyi_table_data& from);
  void MergeFrom(const test_gaoyi_table_data& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(test_gaoyi_table_data* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // uint32 num = 1;
  void clear_num();
  static const int kNumFieldNumber = 1;
  ::google::protobuf::uint32 num() const;
  void set_num(::google::protobuf::uint32 value);

  // uint32 sb = 2;
  void clear_sb();
  static const int kSbFieldNumber = 2;
  ::google::protobuf::uint32 sb() const;
  void set_sb(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:NFMsg.test_gaoyi_table.data)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 num_;
  ::google::protobuf::uint32 sb_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_db_5fbase_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class test_gaoyi_table : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:NFMsg.test_gaoyi_table) */ {
 public:
  test_gaoyi_table();
  virtual ~test_gaoyi_table();

  test_gaoyi_table(const test_gaoyi_table& from);

  inline test_gaoyi_table& operator=(const test_gaoyi_table& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  test_gaoyi_table(test_gaoyi_table&& from) noexcept
    : test_gaoyi_table() {
    *this = ::std::move(from);
  }

  inline test_gaoyi_table& operator=(test_gaoyi_table&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const test_gaoyi_table& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const test_gaoyi_table* internal_default_instance() {
    return reinterpret_cast<const test_gaoyi_table*>(
               &_test_gaoyi_table_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(test_gaoyi_table* other);
  friend void swap(test_gaoyi_table& a, test_gaoyi_table& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline test_gaoyi_table* New() const final {
    return CreateMaybeMessage<test_gaoyi_table>(NULL);
  }

  test_gaoyi_table* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<test_gaoyi_table>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const test_gaoyi_table& from);
  void MergeFrom(const test_gaoyi_table& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(test_gaoyi_table* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef test_gaoyi_table_data data;

  // accessors -------------------------------------------------------

  // string name = 2;
  void clear_name();
  static const int kNameFieldNumber = 2;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // string sex = 3;
  void clear_sex();
  static const int kSexFieldNumber = 3;
  const ::std::string& sex() const;
  void set_sex(const ::std::string& value);
  #if LANG_CXX11
  void set_sex(::std::string&& value);
  #endif
  void set_sex(const char* value);
  void set_sex(const char* value, size_t size);
  ::std::string* mutable_sex();
  ::std::string* release_sex();
  void set_allocated_sex(::std::string* sex);

  // .NFMsg.test_gaoyi_table.data dd = 5;
  bool has_dd() const;
  void clear_dd();
  static const int kDdFieldNumber = 5;
  private:
  const ::NFMsg::test_gaoyi_table_data& _internal_dd() const;
  public:
  const ::NFMsg::test_gaoyi_table_data& dd() const;
  ::NFMsg::test_gaoyi_table_data* release_dd();
  ::NFMsg::test_gaoyi_table_data* mutable_dd();
  void set_allocated_dd(::NFMsg::test_gaoyi_table_data* dd);

  // uint64 uid = 1;
  void clear_uid();
  static const int kUidFieldNumber = 1;
  ::google::protobuf::uint64 uid() const;
  void set_uid(::google::protobuf::uint64 value);

  // uint32 age = 4;
  void clear_age();
  static const int kAgeFieldNumber = 4;
  ::google::protobuf::uint32 age() const;
  void set_age(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:NFMsg.test_gaoyi_table)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr sex_;
  ::NFMsg::test_gaoyi_table_data* dd_;
  ::google::protobuf::uint64 uid_;
  ::google::protobuf::uint32 age_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_db_5fbase_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// mongo_primary_key

// string _id = 1;
inline void mongo_primary_key::clear__id() {
  _id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& mongo_primary_key::_id() const {
  // @@protoc_insertion_point(field_get:NFMsg.mongo_primary_key._id)
  return _id_.GetNoArena();
}
inline void mongo_primary_key::set__id(const ::std::string& value) {
  
  _id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:NFMsg.mongo_primary_key._id)
}
#if LANG_CXX11
inline void mongo_primary_key::set__id(::std::string&& value) {
  
  _id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:NFMsg.mongo_primary_key._id)
}
#endif
inline void mongo_primary_key::set__id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  _id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:NFMsg.mongo_primary_key._id)
}
inline void mongo_primary_key::set__id(const char* value, size_t size) {
  
  _id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:NFMsg.mongo_primary_key._id)
}
inline ::std::string* mongo_primary_key::mutable__id() {
  
  // @@protoc_insertion_point(field_mutable:NFMsg.mongo_primary_key._id)
  return _id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* mongo_primary_key::release__id() {
  // @@protoc_insertion_point(field_release:NFMsg.mongo_primary_key._id)
  
  return _id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void mongo_primary_key::set_allocated__id(::std::string* _id) {
  if (_id != NULL) {
    
  } else {
    
  }
  _id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), _id);
  // @@protoc_insertion_point(field_set_allocated:NFMsg.mongo_primary_key._id)
}

// string primary = 2;
inline void mongo_primary_key::clear_primary() {
  primary_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& mongo_primary_key::primary() const {
  // @@protoc_insertion_point(field_get:NFMsg.mongo_primary_key.primary)
  return primary_.GetNoArena();
}
inline void mongo_primary_key::set_primary(const ::std::string& value) {
  
  primary_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:NFMsg.mongo_primary_key.primary)
}
#if LANG_CXX11
inline void mongo_primary_key::set_primary(::std::string&& value) {
  
  primary_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:NFMsg.mongo_primary_key.primary)
}
#endif
inline void mongo_primary_key::set_primary(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  primary_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:NFMsg.mongo_primary_key.primary)
}
inline void mongo_primary_key::set_primary(const char* value, size_t size) {
  
  primary_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:NFMsg.mongo_primary_key.primary)
}
inline ::std::string* mongo_primary_key::mutable_primary() {
  
  // @@protoc_insertion_point(field_mutable:NFMsg.mongo_primary_key.primary)
  return primary_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* mongo_primary_key::release_primary() {
  // @@protoc_insertion_point(field_release:NFMsg.mongo_primary_key.primary)
  
  return primary_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void mongo_primary_key::set_allocated_primary(::std::string* primary) {
  if (primary != NULL) {
    
  } else {
    
  }
  primary_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), primary);
  // @@protoc_insertion_point(field_set_allocated:NFMsg.mongo_primary_key.primary)
}

// -------------------------------------------------------------------

// test_gaoyi_table_data

// uint32 num = 1;
inline void test_gaoyi_table_data::clear_num() {
  num_ = 0u;
}
inline ::google::protobuf::uint32 test_gaoyi_table_data::num() const {
  // @@protoc_insertion_point(field_get:NFMsg.test_gaoyi_table.data.num)
  return num_;
}
inline void test_gaoyi_table_data::set_num(::google::protobuf::uint32 value) {
  
  num_ = value;
  // @@protoc_insertion_point(field_set:NFMsg.test_gaoyi_table.data.num)
}

// uint32 sb = 2;
inline void test_gaoyi_table_data::clear_sb() {
  sb_ = 0u;
}
inline ::google::protobuf::uint32 test_gaoyi_table_data::sb() const {
  // @@protoc_insertion_point(field_get:NFMsg.test_gaoyi_table.data.sb)
  return sb_;
}
inline void test_gaoyi_table_data::set_sb(::google::protobuf::uint32 value) {
  
  sb_ = value;
  // @@protoc_insertion_point(field_set:NFMsg.test_gaoyi_table.data.sb)
}

// -------------------------------------------------------------------

// test_gaoyi_table

// uint64 uid = 1;
inline void test_gaoyi_table::clear_uid() {
  uid_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 test_gaoyi_table::uid() const {
  // @@protoc_insertion_point(field_get:NFMsg.test_gaoyi_table.uid)
  return uid_;
}
inline void test_gaoyi_table::set_uid(::google::protobuf::uint64 value) {
  
  uid_ = value;
  // @@protoc_insertion_point(field_set:NFMsg.test_gaoyi_table.uid)
}

// string name = 2;
inline void test_gaoyi_table::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& test_gaoyi_table::name() const {
  // @@protoc_insertion_point(field_get:NFMsg.test_gaoyi_table.name)
  return name_.GetNoArena();
}
inline void test_gaoyi_table::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:NFMsg.test_gaoyi_table.name)
}
#if LANG_CXX11
inline void test_gaoyi_table::set_name(::std::string&& value) {
  
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:NFMsg.test_gaoyi_table.name)
}
#endif
inline void test_gaoyi_table::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:NFMsg.test_gaoyi_table.name)
}
inline void test_gaoyi_table::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:NFMsg.test_gaoyi_table.name)
}
inline ::std::string* test_gaoyi_table::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:NFMsg.test_gaoyi_table.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* test_gaoyi_table::release_name() {
  // @@protoc_insertion_point(field_release:NFMsg.test_gaoyi_table.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void test_gaoyi_table::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:NFMsg.test_gaoyi_table.name)
}

// string sex = 3;
inline void test_gaoyi_table::clear_sex() {
  sex_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& test_gaoyi_table::sex() const {
  // @@protoc_insertion_point(field_get:NFMsg.test_gaoyi_table.sex)
  return sex_.GetNoArena();
}
inline void test_gaoyi_table::set_sex(const ::std::string& value) {
  
  sex_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:NFMsg.test_gaoyi_table.sex)
}
#if LANG_CXX11
inline void test_gaoyi_table::set_sex(::std::string&& value) {
  
  sex_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:NFMsg.test_gaoyi_table.sex)
}
#endif
inline void test_gaoyi_table::set_sex(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  sex_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:NFMsg.test_gaoyi_table.sex)
}
inline void test_gaoyi_table::set_sex(const char* value, size_t size) {
  
  sex_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:NFMsg.test_gaoyi_table.sex)
}
inline ::std::string* test_gaoyi_table::mutable_sex() {
  
  // @@protoc_insertion_point(field_mutable:NFMsg.test_gaoyi_table.sex)
  return sex_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* test_gaoyi_table::release_sex() {
  // @@protoc_insertion_point(field_release:NFMsg.test_gaoyi_table.sex)
  
  return sex_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void test_gaoyi_table::set_allocated_sex(::std::string* sex) {
  if (sex != NULL) {
    
  } else {
    
  }
  sex_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), sex);
  // @@protoc_insertion_point(field_set_allocated:NFMsg.test_gaoyi_table.sex)
}

// uint32 age = 4;
inline void test_gaoyi_table::clear_age() {
  age_ = 0u;
}
inline ::google::protobuf::uint32 test_gaoyi_table::age() const {
  // @@protoc_insertion_point(field_get:NFMsg.test_gaoyi_table.age)
  return age_;
}
inline void test_gaoyi_table::set_age(::google::protobuf::uint32 value) {
  
  age_ = value;
  // @@protoc_insertion_point(field_set:NFMsg.test_gaoyi_table.age)
}

// .NFMsg.test_gaoyi_table.data dd = 5;
inline bool test_gaoyi_table::has_dd() const {
  return this != internal_default_instance() && dd_ != NULL;
}
inline void test_gaoyi_table::clear_dd() {
  if (GetArenaNoVirtual() == NULL && dd_ != NULL) {
    delete dd_;
  }
  dd_ = NULL;
}
inline const ::NFMsg::test_gaoyi_table_data& test_gaoyi_table::_internal_dd() const {
  return *dd_;
}
inline const ::NFMsg::test_gaoyi_table_data& test_gaoyi_table::dd() const {
  const ::NFMsg::test_gaoyi_table_data* p = dd_;
  // @@protoc_insertion_point(field_get:NFMsg.test_gaoyi_table.dd)
  return p != NULL ? *p : *reinterpret_cast<const ::NFMsg::test_gaoyi_table_data*>(
      &::NFMsg::_test_gaoyi_table_data_default_instance_);
}
inline ::NFMsg::test_gaoyi_table_data* test_gaoyi_table::release_dd() {
  // @@protoc_insertion_point(field_release:NFMsg.test_gaoyi_table.dd)
  
  ::NFMsg::test_gaoyi_table_data* temp = dd_;
  dd_ = NULL;
  return temp;
}
inline ::NFMsg::test_gaoyi_table_data* test_gaoyi_table::mutable_dd() {
  
  if (dd_ == NULL) {
    auto* p = CreateMaybeMessage<::NFMsg::test_gaoyi_table_data>(GetArenaNoVirtual());
    dd_ = p;
  }
  // @@protoc_insertion_point(field_mutable:NFMsg.test_gaoyi_table.dd)
  return dd_;
}
inline void test_gaoyi_table::set_allocated_dd(::NFMsg::test_gaoyi_table_data* dd) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete dd_;
  }
  if (dd) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      dd = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, dd, submessage_arena);
    }
    
  } else {
    
  }
  dd_ = dd;
  // @@protoc_insertion_point(field_set_allocated:NFMsg.test_gaoyi_table.dd)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace NFMsg

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_db_5fbase_2eproto
