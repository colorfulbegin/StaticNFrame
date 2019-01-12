

CreateClass("UserFriend")   --单个玩家所有好友数据结构体
CreateClass("UserFriendSimpleData")

MsgTypeEnum = 
{
	FriendApply = 1,							--好友请求
	FriendRobbed = 2,							--好友被抢
	TripGroupFriendFinishEmploy = 3,			--你的旅行团的好友完成雇佣
	FriendRobbedWithFailure = 4,				--好友被抢，但失败了
	TripGroupMeFinishEmploy = 5,				--好友的旅行团的你完成雇佣
	FriendVisitInspireFriend = 6,				--好友捣蛋
	FriendVisitMischiefFriend = 7,				--好友鼓舞
}

function UserFriendSimpleData:Init()
    self.name = ""  --玩家名字 nickname
    self.signature = "" --玩家签名
    self.area = "" --玩家所在地区
    self.horoscope = "" --未设计
    self.head = ""  --玩家在游戏中的头像
    self.star = 1  --玩家星际
    self.sex = 1 --玩家性别
    self.money = 0 --玩家财富，金币，排行榜需要
    self.product = 0 --玩家产出，排行榜需要
    self.click = 0 --玩家点击， 排行榜需要
end

function UserFriendSimpleData:SetDBTable(tmp)
    if tmp == nil then return end
    self.name = tmp.name or ""
    self.signature = tmp.signature or ""
    self.area = tmp.area or ""
    self.horoscope = tmp.horoscope or ""
    self.head = tmp.head or ""
    self.star = tmp.star or 1
    self.sex = tmp.sex or 1
    self.money = tmp.money or 0
    self.product = tmp.product or 0
    self.click = tmp.click or 0
end


--玩家好友信息初始化
function UserFriend:Init(uid)
    -- 创建好友结构体
    self.uid = uid
    --玩家在线当前所在游戏id
    self.gameid = 0
    --玩家在线当前所在分区id
    self.zoneid = 0

    --玩家上一次在线当前所在游戏id
    self.last_gameid = 0
    --玩家上一次在线当前所在分区id
    self.last_zoneid = 0

    self.app_id = ""
    self.online = true --当前玩家是否在线
    self.simpleData = UserFriendSimpleData:New()     --玩家简单数据，用于显示
    self.simpleData:Init()

    -- 旅行团数据
    self.userTravel = UserTravel:New()
    self.userTravel:Init(uid)

    -- 好友互访数据
    self.friendVisit = FriendVisit:New()
    self.friendVisit:Init(uid)
end

function UserFriend:SetBaseInfo(uid, head, name, app_id, sex)
    if self.simpleData.name == "" or self.simpleData.head == "" then
        if sex ~= nil then
            if sex == 1 then
                self.userTravel:SetTravelHead(1)
            else
                self.userTravel:SetTravelHead(2)
            end
        end
    end
    self.uid = uid or ""
    self.app_id = app_id or ""
    self.simpleData.name = name or ""
    self.simpleData.head = head or ""
    self.simpleData.sex = sex or 1
end

--将从db里取出来的一个table数据放到userfriend里
function UserFriend:SetDBTable(data)
    self.uid = data.uid or 0
    self.app_id = data.app_id or ""
    self.online = data.online or false
    self.simpleData:SetDBTable(data.simpleData)

    self.userTravel:SetDBTable(data.userTravel)
    self.friendVisit:SetDBTable(data.friendVisit)
end

function UserFriend:GetUid()
    return self.uid
end

function UserFriend:GetHead()
    return self.simpleData.head
end

function UserFriend:SetHead(head)
    self.simpleData.head = head
end

function UserFriend:SetName(name)
    self.simpleData.name = name
end

function UserFriend:GetName()
    return self.simpleData.name
end

function UserFriend:GetAppId()
    return self.app_id
end

function UserFriend:GetOnline()
    return self.online
end

function UserFriend:SetOnline()
    self.online = true
end

function UserFriend:SetOffline()
    self.online = false
end

function UserFriend:GetProduct()
    return self.simpleData.product
end

function UserFriend:SetProduct(p)
    self.simpleData.product = p
end

function UserFriend:SetClick(c)
    self.simpleData.click = c
end

function UserFriend:GetClick()
    return self.simpleData.click
end

--获得star,数字
function UserFriend:GetStar()
    return self.simpleData.star
end

function UserFriend:SetStar(star)
    self.simpleData.star = star
end

--获得sex,数字，1标识男性
function UserFriend:GetSex()
    return self.simpleData.sex
end

function UserFriend:SetSex(sex)
    self.simpleData.sex = sex
end

--获得财富，排行榜需要
function UserFriend:GetMoney()
    return self.simpleData.money
end

function UserFriend:SetMoney(money)
    self.simpleData.money = money
end

--获得言论
function UserFriend:GetSignature()
    return self.simpleData.signature
end

--获得地区，字符串
function UserFriend:GetArea()
    return self.simpleData.area
end

--获得星座，数字，配置表数据
function UserFriend:GetHoroscope()
    return self.simpleData.horoscope
end

function UserFriend:GetUserTravel()
    return self.userTravel
end

--获得好友互访数据
function UserFriend:GetFriendVisit()
    return self.friendVisit
end

--head name 数据暂时不对
function UserFriend:SetUserSimpleData(star, sex, signature, area, horoscope)
    self.simpleData.star = star or 0
    self.simpleData.sex = sex or 1
    self.simpleData.signature = signature or ""
    self.simpleData.area = area or ""
    self.simpleData.horoscope = horoscope or ""
end

function UserFriend:Give(friendinfo, msgType, args)
    local res = {}
    res["do"] = "Cmd.GiveMessageFromCenter_CS"
    res["data"] = {
        cmd_uid = self.uid,
		uid = friendinfo:GetUid(),
		male = friendinfo:GetSex(),
		nickName = friendinfo:GetName(),
        star = friendinfo:GetStar(),
        args = args,
        msgType = msgType,
	}

    FriendManager.SendCmdByFriend(res["do"], res["data"], self)
end