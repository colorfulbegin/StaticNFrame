#pragma once
#include <list>
#include <vector>
#include "NFComm/NFCore/NFSingleton.hpp"
#include "NFComm/NFCore/NFPlatform.h"
#include "NFTimerObj.h"


//ʱ������Ƶ�� ms
#define TIMER_AXIS_CHECK_FREQUENCE 32	
//ʱ����̶�
#define TIME_GRID 64
//ʱ���᳤��
#define TIME_AXIS_LENGTH			120000		// ����Ϊ��λ�� 
#define TIME_AXIS_SECLENGTH			108000		// ��Ϊ��λ��֧�ֵ�30��Сʱ
#define INVALID_TIMER				0xffffffff  // ��Ч��ʱ��
#define INFINITY_CALL				0xffffffff	// �������޴�




class NFFixTimerAxis
{
public:
	NFFixTimerAxis();
	~NFFixTimerAxis();

	//���ù̶�ʱ��Ķ�ʱ��
	bool SetFixTimer(uint32_t nTimerID, uint64_t nStartTime, uint32_t nInterDays, NFTimerObj *handler, uint32_t nCallCount = INFINITY_CALL);
	//�رչ̶�ʱ�䶨ʱ��
	bool KillFixTimer(uint32_t nTimerID,NFTimerObj *handler);
	//�ر����й̶�ʱ�䶨ʱ��
	bool KillAllFixTimer(NFTimerObj *handler);
	//���¹̶�ʱ��Ķ�ʱ��
	void UpdateFix();
private:
	uint64_t GetMorningTime(uint64_t nTimeSec);

protected:
	struct FixTimer 
	{
		uint32_t nTimerID;		//��ʱ��ID
		uint32_t nInterDays;	//�������
		uint64_t nStartTime;	//��ʼʱ��
		uint32_t nCallCount;	//���ô���
		uint64_t nLastSec;		//���һ�ε���ʱ��
		NFTimerObj *pHandler;//�ص�ָ��
		uint32_t nGridIndex;	//���ڵ�ʱ��̶�
		std::list<FixTimer*>::iterator pos; //��ʱ�����е�λ�ã����ڿ��ٶ�λ
		FixTimer()
		{
			nTimerID = 0;
			nInterDays = 0;
			nStartTime = 0;
			nCallCount = 0;
			nLastSec = 0;
			pHandler = nullptr;
			nGridIndex = 0;
		}
	};

	//���ö�ʱ����ʱ�����ϵ�λ��
	bool ResetFixTimerPos(FixTimer *pTimer);

	typedef std::list<FixTimer*> FIXTIMER_LIST;
	typedef std::vector<FIXTIMER_LIST*> FIXTIMER_AXIS;

	FIXTIMER_AXIS m_FixTimerAxis;	//ʱ����
	uint64_t m_nInitSec;			//��ʼʱ��
	uint64_t m_nLastSec;			//�������ʱ��
};


//ʱ����
class NFTimerAxis
{
public:
	NFTimerAxis();
	virtual ~NFTimerAxis();	

	bool Init();
	bool UnInit();

	//���ö�ʱ��
	bool SetTimer(uint32_t nTimerID, uint64_t nInterVal, NFTimerObj *handler, uint32_t nCallCount = INFINITY_CALL);
	//�رն�ʱ��
	bool KillTimer(uint32_t nTimerID, NFTimerObj *handler);
	//�ر����ж�ʱ��
	bool KillAllTimer(NFTimerObj *handler);
	//���¶�ʱ��
	void Update();

	//���ù̶�ʱ��Ķ�ʱ��
	bool SetFixTimer(uint32_t nTimerID, uint64_t nStartTime, uint32_t nInterDays, NFTimerObj *handler, uint32_t nCallCount = INFINITY_CALL);
	//�رչ̶�ʱ�䶨ʱ��
	bool KillFixTimer(uint32_t nTimerID, NFTimerObj *handler);
	//�ر����й̶�ʱ�䶨ʱ��
	bool KillAllFixTimer(NFTimerObj *handler);
	//���¹̶�ʱ�䶨ʱ��
	void UpdateFix();

private:
	//�����붨ʱ��
	bool SetTimerSec(uint32_t nTimerID, uint64_t nInterVal, NFTimerObj *handler, uint32_t nCallCount = INFINITY_CALL);
	//���tick
	void CheckTick();
	//�����붨ʱ��
	void UpdateSec();

protected:
	uint64_t GetTick() { return NFGetTime(); }

	struct Timer 
	{
		uint32_t nTimerID;		//��ʱ��ID
		uint64_t nInterVal;		//���
		uint32_t nCallCount;	//���ô���
		uint64_t nLastTick;		//���һ��tick
		NFTimerObj *pHandler;//�ص�ָ��
		uint8_t  byType;		//���� 0 - ���붨ʱ���� 1 - �붨ʱ��
		uint32_t nGridIndex;	//���ڵ�ʱ��̶�
		std::list<Timer*>::iterator pos; //��ʱ�����е�λ�ã����ڿ��ٶ�λ
		Timer()
		{
			nTimerID = 0;
			nInterVal = 0;
			nCallCount = 0;
			nLastTick = 0;
			pHandler = nullptr;
			byType = 0;
			nGridIndex = 0;
		}
	};

	//���ö�ʱ����ʱ�����ϵ�λ��
	bool ResetTimerPos(Timer *pTimer);

	typedef std::list<Timer*>			TIMER_LIST;		//ĳ���̶��ж�ʱ���б�
	typedef std::vector<TIMER_LIST*>	TIMER_AXIS;		//�����¼���Ķ�ʱ��


	TIMER_AXIS  m_TimerAxis;		//�����¼���
	uint64_t    m_nInitTick;		//����ʱ�����ʼTick
	uint64_t    m_nLastTick;		//����ʱ�������һ�μ���tick

	TIMER_AXIS  m_TimerAxisSec;		//��ʱ����
	uint64_t    m_nInitSec;			//��ʱ�����ʼʱ��
	uint64_t    m_nLastSec;			//��ʱ�������һ�μ���ʱ��

	NFFixTimerAxis m_FixTimerAxis;
};