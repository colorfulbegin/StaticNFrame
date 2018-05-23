#include "NFTimerObj.h"
#include "NFTimerMgr.h"

NFTimerObj::NFTimerObj() :m_pTimerInfoPtr(nullptr), m_pFixTimerInfoPtr(nullptr) {}
NFTimerObj::~NFTimerObj()
{
	NFTimerMgr::Instance()->KillAllTimer(this);
	NFTimerMgr::Instance()->KillAllFixTimer(this);
	m_pTimerInfoPtr = nullptr;
	m_pFixTimerInfoPtr = nullptr;
}

//设置定时器
bool NFTimerObj::SetTimer(uint32_t nTimerID, uint64_t nInterVal, uint32_t nCallCount)
{
	return NFTimerMgr::Instance()->SetTimer(nTimerID, nInterVal, this, nCallCount);
}

//关闭定时器
bool NFTimerObj::KillTimer(uint32_t nTimerID)
{
	return NFTimerMgr::Instance()->KillTimer(nTimerID, this);
}

//关闭所有定时器
bool NFTimerObj::KillAllTimer()
{
	return NFTimerMgr::Instance()->KillAllTimer(this);
}

//设置固定时间的定时器
bool NFTimerObj::SetFixTimer(uint32_t nTimerID, uint64_t nStartTime, uint32_t nInterDays, uint32_t nCallCount)
{
	return NFTimerMgr::Instance()->SetFixTimer(nTimerID, nStartTime, nInterDays, this, nCallCount);
}

//关闭固定时间定时器
bool NFTimerObj::KillFixTimer(uint32_t nTimerID)
{
	return NFTimerMgr::Instance()->KillFixTimer(nTimerID, this);
}

//关闭所有固定时间定时器
bool NFTimerObj::KillAllFixTimer()
{
	return NFTimerMgr::Instance()->KillAllFixTimer(this);
}