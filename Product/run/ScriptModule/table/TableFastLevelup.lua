-- FILE: levelup.xlsx SHEET: 钻石购买直升 KEY: Id
TableFastLevelup = {
[3]={["Id"]=3,["RebuildTimes"]=1,["CostDiamond"]="1_20"},
[4]={["Id"]=4,["RebuildTimes"]=1,["CostDiamond"]="1_30"},
[5]={["Id"]=5,["RebuildTimes"]=1,["CostDiamond"]="1_40"},
[6]={["Id"]=6,["RebuildTimes"]=1,["CostDiamond"]="1_50"},
[7]={["Id"]=7,["RebuildTimes"]=1,["CostDiamond"]="1_60"},
[8]={["Id"]=8,["RebuildTimes"]=1,["CostDiamond"]="1_70"},
[9]={["Id"]=9,["RebuildTimes"]=1,["CostDiamond"]="1_80"},
[10]={["Id"]=10,["RebuildTimes"]=1,["CostDiamond"]="1_90"},
[11]={["Id"]=11,["RebuildTimes"]=1,["CostDiamond"]="1_100"},
[12]={["Id"]=12,["RebuildTimes"]=1,["CostDiamond"]="1_110"},
[13]={["Id"]=13,["RebuildTimes"]=1,["CostDiamond"]="1_120"},
[14]={["Id"]=14,["RebuildTimes"]=1,["CostDiamond"]="1_130"},
[15]={["Id"]=15,["RebuildTimes"]=1,["CostDiamond"]="1_140"},
[16]={["Id"]=16,["RebuildTimes"]=1,["CostDiamond"]="1_150"},
[17]={["Id"]=17,["RebuildTimes"]=1,["CostDiamond"]="1_160"},
[18]={["Id"]=18,["RebuildTimes"]=1,["CostDiamond"]="1_170"},
[19]={["Id"]=19,["RebuildTimes"]=1,["CostDiamond"]="1_180"},
[20]={["Id"]=20,["RebuildTimes"]=1,["CostDiamond"]="1_190"},
[21]={["Id"]=21,["RebuildTimes"]=1,["CostDiamond"]="1_200"},
[22]={["Id"]=22,["RebuildTimes"]=1,["CostDiamond"]="1_210"},
[23]={["Id"]=23,["RebuildTimes"]=1,["CostDiamond"]="1_220"},
[24]={["Id"]=24,["RebuildTimes"]=1,["CostDiamond"]="1_230"},
[25]={["Id"]=25,["RebuildTimes"]=1,["CostDiamond"]="1_240"},
[26]={["Id"]=26,["RebuildTimes"]=1,["CostDiamond"]="1_250"},
[27]={["Id"]=27,["RebuildTimes"]=1,["CostDiamond"]="1_260"},
[28]={["Id"]=28,["RebuildTimes"]=1,["CostDiamond"]="1_270"},
[29]={["Id"]=29,["RebuildTimes"]=1,["CostDiamond"]="1_280"},
[30]={["Id"]=30,["RebuildTimes"]=1,["CostDiamond"]="1_290"},
[31]={["Id"]=31,["RebuildTimes"]=1,["CostDiamond"]="1_300"},
[32]={["Id"]=32,["RebuildTimes"]=1,["CostDiamond"]="1_310"},
}
setmetatable(TableFastLevelup, {__index = function(__t, __k) if __k == "query" then return function(Id) return __t[Id] end end end})
