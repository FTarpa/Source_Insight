/***********************************************************************/
/******************************* tool **********************************/
/***********************************************************************/
//当前文件快捷捷:
//查看分组索引: ctrl+D->ctrl+D
//查看标号索引: ctrl+D->3 
[Num] -- 默认标号目录
工具 [Ca]: 安装

安装:
Save:SI\node\9820e\Macro_9820e_Install.h


[1.0] ----------------------------------

[1.0] SecureCRT:
Save:SI\node\ToolsMsg\git\Macro_SecureCRT.h
//SecureCRT.exe:
open: C:\Program^Files\VanDyke^Software\Clients\SecureCRT.exe
//	\\192.168.2.115\xiaoj


[1.1] 展讯CQ 
http://222.66.158.139:2008/cqweb/#
//资料 
https://isupport.spreadtrum.com/iSupport/apply/faq_list#tab-


[1.2] git:
Save:SI\node\ToolsMsg\git\Macro_git.h
Save:SI\node\ToolsMsg\git\Macro_vim.h
	

[1.3] Source Insight:
Save:SI\node\ToolsMsg\git\Macro_SI.h


[1.4] Android Studio:
Save:SI\node\ToolsMsg\as\Macro_android_studio.h 
//配置文件说明
Save:SI\node\ToolsMsg\as\Macro_android_studio_file_list.h
//报错列表
Save:SI\node\ToolsMsg\as\Macro_android_studio_error_list.h




/***********************************************************************/
/****************************** System *********************************/
/***********************************************************************/
编译 [Cs]: Apk drivers


[2.0] ----------------------------------

[2.1] build adb 部分整理
Save:SI\node\9820e\Macro_9820e_Sys_Build.h
//image 下载 升级: 未整理
Save:SI\node\9820e\Macro_9820e_Sys_File.h
//Save:SI\node\9820e\Macro_9820e_Sys_Image.h
//未整理 签名
Save:SI\node\9820e\Macro_9820e_Sys_Apk.h

[2.2] shell python mk 未整理
//Save:SI\node\9820e\Macro_9820e_shell.h
//Save:SI\node\9820e\Macro_9820e_python.h
Save:SI\node\9820e\Macro_9820e_mk.h

[2.3] Linux下查看系统配置
Save:SI\node\9820e\Macro_9820e_Sys_Linux.h


//drivers: 未整理
Save:SI\node\9820e\Macro_9820e_Sys_Drivers.h
	
//kernel: 未整理
Save:SI\node\9820e\Macro_9820e_Sys_Kernel.h
	
	
/***********************************************************************/
/******************************* App ***********************************/
/***********************************************************************/

应用 [Cf]:
	
[2.0] ----------------------------------


[2.1] Setting 部分整理
Save:SI\node\9820e\Macro_9820e_App_Setting.h

[2.2] Launch 网上找的一些展讯4.4笔记
Save:SI\node\9820e\Macro_9820e_App_Launch.h
Save:SI\node\9820e\Macro_9820e_App_Wallpaper.h

//SystemUI 未整理
Save:SI\node\9820e\Macro_9820e_App_SystemUI.h
//联系人 短信:
Save:SI\node\9820e\Macro_9820e_App_Contacts.h
//相册:
Save:SI\node\9820e\Macro_9820e_App_Gallery.h

[2.3] 计算器
//[1.1] 在as中添加app编译, res错误多(放弃)
Save:SI\node\9820e\Macro_9820e_App_Calculator.h

//未整理:
Save:SI\node\9820e\Macro_9820e_noFix_1.h
Save:SI\node\9820e\Macro_9820e_noFix_2.h


/***********************************************************************/
/******************************** Code *********************************/
/***********************************************************************/
代码 [Cc]: Service Intent
一些代码跟踪, 网上随便找的
[3.0] ----------------------------------

[3.1] Service: 未整理
Save:SI\node\android\Macro_9820e_getSystemService.h
//Intent: 
Save:SI\node\android\Macro_9820e_IntentService.h
//Battery
Save:SI\node\android\Macro_9820e_BatteryService.h
	
[3.2] Activity: 未整理
Save:SI\node\android\Macro_9820e_Activity.h

//Recovery: 
Save:SI\node\android\Macro_9820e_Setting_Recovery.h


/***********************************************************************/
/***************************** 参考笔记 ********************************/
/***********************************************************************/
笔记 [Ce]: 参考笔记
//参考笔记: 未整理
E:\desktop\9820E\node1\sys_cfg
E:\desktop\9820E\node1\node_pdf
//参考笔记

[4.0] ----------------------------------


[4.1] 展讯Android平台技术问答_201204
Save:SI\node\9820e\doc\Macro_SPR_Android_Platform_QA_201204.h  Num

[4.2] Spreadtrum Android 8810_6820 FAQ 1207
Save:SI\node\9820e\doc\Macro_SPR_Android_8810_6820_FAQ_1207.h  Num

//android多媒体处理流程
Save:SI\node\9820e\doc\Macro_SPR_Android_Multimedia.h
	
//doc:QQ群5
Save:SI\node\9820e\doc\Macro_QQ_Android_1_5_1.h

//doc:易连汇通软件-FAQ--MTK
Save:SI\node\9820e\doc\Macro_QQ_Android_1_7_1.h
	
[4.3] doc:MTK-展讯修改笔记--csdn
Save:SI\node\9820e\doc\Macro_QQ_Android_1_3_1.h
Save:SI\node\9820e\doc\Macro_QQ_Android_1_3_2.h
	




/***********************************************************************/
/****************************** Other **********************************/
/***********************************************************************/

其他 [Cg]: cmd命令

工程目录: 
path: F:\9820e\note
F:\9820e\note\基本操作.txt


[5.0] ----------------------------------




在笔记中搜 default_wallpaper:
//cmd: E:\save\SI\node\9820e
E:\save\SI\Cmd\cmd.exe
cd E:\save\SI\node\9820e
	

set path=%path%;C:\CSDTK\cygwin\bin;
find ./ -name "*.log"| xargs grep "ERROR"
find ./ -name "*.h"| xargs grep "default_wallpaper"
没装cygwin:
findstr /s /i "ERROR" *.log>aaaa.txt
findstr /s /i "default_wallpaper" *.h>aaaa.txt





word删行号
^13[0-9]{1,}^13


//参考sh: 
//1.svn export android 代码
//2.自动编译debug user版本
//3.自动check fota升级需要用到的剩余空间大小
Save:SI\node\9820e\sh\Macro_custom.sh
Save:SI\node\9820e\sh\Macro_svn_function.sh
//4.多个项目排序编译
Save:SI\node\9820e\sh\Macro_make.sh






