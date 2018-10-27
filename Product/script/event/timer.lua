GLOBAL_WEEK_DAY = 1	--本周第几天
GLOBAL_MONTH_DAY = 1	--本月第几天
GLOBAL_WEEK_DAY_MAP = {}
GLOBAL_WEEK_DAY_MAP["Sunday"] = 0
GLOBAL_WEEK_DAY_MAP["Monday"] = 1
GLOBAL_WEEK_DAY_MAP["Tuesday"] = 2
GLOBAL_WEEK_DAY_MAP["Wednesday"] = 3
GLOBAL_WEEK_DAY_MAP["Thursday"] = 4
GLOBAL_WEEK_DAY_MAP["Friday"] = 5
GLOBAL_WEEK_DAY_MAP["Saturday"] = 6

function InitTimer()
    unitimer.init(100) --初始化定时器（取出数据库缓存时 会调用到时间相关）-- 由于 需要处理公告过期 所以如果存在公告的话 chessgm中也尝试初始化了

	local CYCLE_MIN = 60
	local CYCLE_HOUR = 3600
	local CYCLE_DAY = CYCLE_HOUR * 24
	local CYCLE_WEEKLY = CYCLE_DAY * 7

	if unilight.getdebuglevel() > 0 then --测试服加速10分钟一次
		unilight.addclocker("GlobalDayZeroClock", 0, 600) 	-- 0点时钟
	else
		unilight.addclocker("GlobalDayZeroClock", 0, CYCLE_DAY) 	-- 0点时钟
	end
end

--保存当前是每周几天和每月第几天
function GlobalDayZeroClock()
	 --每周清理
	 if GLOBAL_WEEK_DAY_MAP[go.time.Now().Weekday().String()] == 1 then
		 unilight.debug("准备每周0点闹钟")
	 end

	 --每月清理
	 if go.time.Now().Day() == 1 then
		 unilight.debug("准备每月0点闹钟")
	 end
end
