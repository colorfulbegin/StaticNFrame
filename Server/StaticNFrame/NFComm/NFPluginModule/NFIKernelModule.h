// -------------------------------------------------------------------------
//    @FileName         :    NFIKernelModule.h
//    @Author           :    LvSheng.Huang
//    @Date             :    2012-12-15
//    @Module           :    NFIKernelModule
//
// -------------------------------------------------------------------------

#ifndef NFI_KERNEL_MODULE_H
#define NFI_KERNEL_MODULE_H

#include <iostream>
#include <string>
#include <functional>
#include "NFIModule.h"

class NFIObject;

class NFIKernelModule
	: public NFIModule
{
public:
	virtual uint64_t CreateObjectId() = 0;
	virtual NFIObject* CreateObject(uint64_t objectId = 0) = 0;
};

#endif

