/***notepad++ 查找命令***/
1> 正则表达式“或”搜索 ： 关键词_1|关键词_2, 注“|” 前后没有空行，这样就能按“或”搜索关键词了
	grep -rn -P "关键词_1|关键词_2"
2> 正则表达式“长字符串”搜索： 关键词_1.*?关键词_2
	grep -rn -P "关键词_1.*?关键词_2"
3> eg：adb logcat -c && adb logcat -v time| grep -Pi "KPI|fingerprintd|screen_on|set_light_backlight,\ brightness="