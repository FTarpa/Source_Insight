
//目录[Num][Ca]:
// 项目选择 编译
Save:node\C\project\Macro_Note_8910.h \[1.1\] 当前项目
Save:node\C\project\Macro_Note_8910.h \[1.2\] 6531E编译指令[ Cc]:
Save:node\C\project\Macro_Note_8910.h \[1.3\] Make 常用设置[ Cf]:
Save:node\C\project\Macro_Note_8910.h \[1.4\] 屏:
Save:node\C\project\Macro_Note_8910.h \[1.5\] 摄像头:
// 菜单 资源
Save:node\C\project\Macro_Note_8910.h \[2.1\] 菜单[ m]:
Save:node\C\project\Macro_Note_8910.h \[2.2\] 图片[ r]
Save:node\C\project\Macro_Note_8910.h \[2.3\] 铃声:
Save:node\C\project\Macro_Note_8910.h \[2.4\] 字符串:
Save:node\C\project\Macro_Note_8910.h \[2.5\] 字库文件:
Save:node\C\project\Macro_Note_8910.h \[2.6\] 颜色:
// 设置
Save:node\C\project\Macro_Note_8910.h \[3.1\] 设置[ s]:
Save:node\C\project\Macro_Note_8910.h \[3.2\] 语言, 默认语言:
Save:node\C\project\Macro_Note_8910.h \[3.3\] 指令:
Save:node\C\project\Macro_Note_8910.h \[3.4\] 情景模式 音频参数:
Save:node\C\project\Macro_Note_8910.h \[3.5\] GUI[g]: 状态条 电量百分比
Save:node\C\project\Macro_Note_8910.h \[3.6\] other:
// 联系人
Save:node\C\project\Macro_Note_8910.h \[4.1\] Idle[ I]: Lock Dial Theme
Save:node\C\project\Macro_Note_8910.h \[4.2\] 联系人[ p]: 短信
Save:node\C\project\Macro_Note_8910.h \[4.3\] 多媒体[ u]:
Save:node\C\project\Macro_Note_8910.h \[4.4\] 浏览器[ w]: 网络参数
Save:node\C\project\Macro_Note_8910.h \[4.5\] 文件管理
Save:node\C\project\Macro_Note_8910.h \[4.6\] 工具[ t]:单位转换 游戏 闹钟 日历 魔音
// Build问题
Save:node\C\project\Macro_Note_8910.h \[5.1\] trace:
Save:node\C\project\Macro_Note_8910.h \[5.2\] Build问题[ Cb][ b]:
	
//模拟器调试:
Save:node\C\study\Macro_modis_6531E.h

//参考标号:
Save:SI\node\Test\Macro_Tmp_Node_Num.h

/***********************************************************************/


[1.1] 当前项目
// 查看--选择历史项目列表: 
Save:set\Macro_Set_Note.h	6531E-note-set

// 默认项目(便于上传svn) [Cs]:
set SE039_YST_E18_E250_F2

	
// 当前项目:
set UIS8910_ROM_16MB_DS_USER
set ums9117_240X320BAR_48MB_X206T_H1616_user

setEnd:从setEnd行开始替换名称(上一次选中->当前选中)

/***********************************************************************/
/*************************** 编译与下载 ********************************/
/***********************************************************************/

[1.2] 6531E编译指令[Cc]:
cmd: cmd


编译:
open: project\UIS8910_ROM_16MB_DS_USER\New_common.bat


编译模块
make p=UIS8910_ROM_16MB_DS_USER
make p=UIS8910_ROM_16MB_DS_USER m=custom_drv
make p=UIS8910_ROM_16MB_DS_USER image


或 (1行命令)
make p=UIS8910_ROM_16MB_DS_USER m=custom_drv update image
make p=UIS8910_ROM_16MB_DS_USER m=custom_drv update image job=4

编译资源 (VS接着编译即可)
make p=UIS8910_ROM_16MB_DS_USER m=resource job=4


其他编模块
make p=UIS8910_ROM_16MB_DS_USER m=app_main update image
make p=UIS8910_ROM_16MB_DS_USER m=app_main


模拟器：
make p=UIS8910_ROM_16MB_DS_USER m=simulator_idh
vc: build\UIS8910_ROM_16MB_DS_USER_builddir\win\simulator.dsw
build\UIS8910_ROM_16MB_DS_USER_builddir\win\
//	改NV删除
cmd del^build\UIS8910_ROM_16MB_DS_USER_builddir\win\bin\flash_sim.dat
build\UIS8910_ROM_16MB_DS_USER_builddir\win\bin\flash_sim.dat


// spr--下载工具
open tools\DEBUG_TOOL\ResearchDownload\Bin\ResearchDownload.exe
build\UIS8910_ROM_16MB_DS_USER_builddir\img

F:\6531G_16A_MP_W17.43.4\build\UIS8910_ROM_16MB_DS_USER_builddir\img







/***********************************************************************/
/************************ Make常用设置 *******************************/
/***********************************************************************/

[1.3] Make 常用设置[Cf]:
project_UIS8910_ROM_16MB_DS_USER.mk LCD_CHIP     屏

//	版本号：
version\SC6530_sc6500_32X32_128X160BAR_X89E_WWK_VIB_version.c


[1.4] 屏:
MS_Customize\source\product\config\SE818_MB\lcm_cfg_info.c
	修改按键黑点：
MS_Ref\source\lcd\src\lcd.c GC9306_Ex
MS_Customize\source\product\driver\lcd\tft_GC9300.c GC9300_Ex(void)
	屏亮度:
chip_drv\chip_module\analog\sr1161\analog_phy_sr1161.c SBD_LCM_BL_25MA_SUPPORT


[1.5] 摄像头:
project_UIS8910_ROM_16MB_DS_USER.mk SENSOR_CHIP

	


/***********************************************************************/
/**************************** 修改记录 *********************************/
/***********************************************************************/

[2.1] 菜单[m]:
ms_mmi_main\source\mmi_app\common\c\mmi_menutable_128x160.c WORLD_CLOCK_SUPPORT
ms_mmi_main\source\mmi_app\common\c\mmi_menutable_128x160.c
ms_mmi_main\source\mmi_app\common\c\mmi_menutable_128x160.c 
	
ms_mmi_main\source\mmi_app\common\c\mmi_menutable_128x160.c GUIMENU_ITEM_T^menu_mainmenu_icon
ms_mmi_main\source\mmi_app\common\c\mmi_menutable_128x160.c GUIMENU_ITEM_T^menu_icon_tools




[2.2] 图片[r]
build\UIS8910_ROM_16MB_DS_USER_builddir\tmp\mmi_res_128x160_imag.txt



[2.3] 铃声:
build\UIS8910_ROM_16MB_DS_USER_builddir\tmp\mmi_res_128x160_ring.txt


[2.4] 字符串:
build\UIS8910_ROM_16MB_DS_USER_builddir\tmp\mmi_res_128x160_text.txt

	
[2.5] 字库文件:
open tools\DEBUG_TOOL\FONTTOOL\Bin\FontTool.exe 
MS_MMI\source\resource\Common\FONT\LANG_FONT_LATIN_12_14_29.lib
MS_MMI\source\resource\Common\FONT\


[2.6] 颜色
// 新加 COLOR_RES_CUSTOM_BG
ms_mmi_main/source/mmi_app/common/h/common_mdu_def.h       COLOR_RES_PUBWIN_BG
MS_MMI\source\mmi_app\app\theme\c\mmi_theme.c     COLOR_RES_PUBWIN_BG
MS_MMI_Main\source\mmi_app\app\theme\c\mmi_theme.c MMI_THEME_PUBWIN_BG




----------------------------------------------------------------------------
[3.1] 设置[s]:		（笔记是旧的）
	双摄像头(默认单)：
project_UIS8910_ROM_16MB_DS_USER.mk SBD_DUAL_CAMERA_SUPPORT

	四频 / 2频设置;开就是2频：
project_UIS8910_ROM_16MB_DS_USER.mk __SBD_RF_TWO_BAND_SUPPORT__
project_UIS8910_ROM_16MB_DS_USER.mk SBD_RF_TWO_BAND_SUPPORT

	不带马达：
project_UIS8910_ROM_16MB_DS_USER.mk __HHT_REMOVE_VIBRA__ =TRUE

	双卡：
project_UIS8910_ROM_16MB_DS_USER.mk MMI_MULTI_SIM_SYS = DUAL
project_UIS8910_ROM_16MB_DS_USER.mk MULTI_SIM_SYS = DUAL
nv_type_4band.nvm	0x10203, 0x1000203,    卡反
	单卡翻译：
TXT_SIM_SEL_SIM1--pb	--	 SIM1
SIM1 network account

	
	23键：
project_UIS8910_ROM_16MB_DS_USER.mk _23KEY
project_UIS8910_ROM_16MB_DS_USER.mk MMI_MULTI_GREEN_KEY =DUAL 绿键
	
	FM：
project_UIS8910_ROM_16MB_DS_USER.mk MMI_FM_OPEN_SPEAK_OPEN_SUPPORT=TRUE
project_UIS8910_ROM_16MB_DS_USER.mk SBD_FM_OPEN_SPEAK_OPEN_SUPPORT=TRUE
project_UIS8910_ROM_16MB_DS_USER.mk HHT_MMI_FMTEST_OPEN_SPEAK = TRUE
project_UIS8910_ROM_16MB_DS_USER.mk SBD_FM_THRESHOLD_TYPE1=TRUE 	   #带上搜的台多一点
project_UIS8910_ROM_16MB_DS_USER.mk HHT_FM_USE_GSM_ANT_SIGNAL_STRONG=TRUE	 #外放时打开


[3.2] 语言, 默认语言:
//
MS_MMI\source\mmi_app\custom\h\mmi_custom_define.h


[3.3] 指令:
	

[3.4] 情景模式 音频参数:
	外置K类功放：
project_UIS8910_ROM_16MB_DS_USER.mk __HHT_EXT_AMPLIFIER_CLASS_K__ = TRUE

	软件2合1：FALSE是喇叭听筒独立(硬件二合一)，分开是软件2合1
project_UIS8910_ROM_16MB_DS_USER.mk __HHT_EARPIECE_SPEAK_USE_ONE__ = FALSE
project_UIS8910_ROM_16MB_DS_USER.mk SBD_EARPIECE_SPEAK_USE_ONE
project_UIS8910_ROM_16MB_DS_USER.mk CUSTOMER = S039_JX_2IN1	                 # 二合一的音频（带K类的音频不同）
\audio\audio_dsp_codec_6531.nvm    0x6C0/硬件2合1;    0x638/软件2合1

	三合一：
project_UIS8910_ROM_16MB_DS_USER.mk CUS_ADD_SHAKE= TRUE  三合一喇叭宏        
project_UIS8910_ROM_16MB_DS_USER.mk VIRTUAL_VIBRATE_FUNC
project_UIS8910_ROM_16MB_DS_USER.mk __SPEAKER_VIB_INTENSITY_WEAK__
project_UIS8910_ROM_16MB_DS_USER.mk __HHT_EARPIECE_SPEAK_USE_ONE__ = TRUE 三合一同时开

----------------------------------------------------------------------------

[3.5] GUI[g]: 状态条 电量百分比

	手电筒
project_UIS8910_ROM_16MB_DS_USER.mk HHT_ADD_TORCHLIGHT= TRUE
project_UIS8910_ROM_16MB_DS_USER.mk SBD_ADD_TORCHLIGHT			 #6531E
	
	闪光灯
project_UIS8910_ROM_16MB_DS_USER.mk DC_FLASH_SUPPORT= TRUE
	
	U盘
project_UIS8910_ROM_16MB_DS_USER.mk UMEM_PRTITION _MICRO

	字库：
MS_MMI\source\resource\mmi_res_prj_def.h
MS_MMI\source\resource\Common\FONT
open tools\DEBUG_TOOL\FONTTOOL\Bin\FontTool.exe


	型号--MSD, 翻译：
project_UIS8910_ROM_16MB_DS_USER.mk MMI_MSD_SUPPORT
//TXT_MSD_NOTIFY_INFO

[3.6] other:
// Reset
MMIENVSET_ResetEnvSetSetting();//
MS_MMI_Main\source\mmi_app\app\setting\c\mmiset_func.c
//
//MMISET_CleanUserData();


----------------------------------------------------------------------------
[4.1] Idle[I]: Lock Dial Theme

//	modis: 界面入口/位置
Save:node\C\study\Macro_modis_6531E.h	 \[2.4\] 界面入口/位置

	拨号光标
project_UIS8910_ROM_16MB_DS_USER.mk SENSOR_CHIP
MS_MMI\source\mmi_gui\include\guiedit.h GUIEDIT_DIAL_IMAGE_SPACE_X
MS_MMI\source\mmi_gui\source\editbox\c\guiedit_text.c GUIEDIT_DIAL_IMAGE_SPACE_X
MS_MMI\source\mmi_gui\source\editbox\c\guiedit_text.c GUIEDIT_GetCursorPosForPN
//	modis: Idle
Save:node\C\study\Macro_modis_6531E.h	 \[2.2\] Idle

//	modis: Lock
Save:node\C\study\Macro_modis_6531E.h	 \[2.10\] Lock
//	modis: 测试模式
Save:node\C\study\Macro_modis_6531E.h	 \[2.8\] 测试模式
//	modis: 拨号
Save:node\C\study\Macro_modis_6531E.h   \[2.6\] dialer
//	modis: 主题

----------------------------------------------------------------------------
[4.2] 联系人[p]: 短信


----------------------------------------------------------------------------
[4.3] 多媒体[u]:
//	modis: 多媒体
Save:node\C\study\Macro_modis_6531E.h	 \[2.13\] 多媒体

Camera分辨率:
Camera闪光灯:
Image:



FM:
MS_MMI/source/mmi_app/app/fm/c/mmifm_wintab.c











----------------------------------------------------------------------------
[4.4] 浏览器[w]: 网络参数
//	modis: Browser
Save:node\C\study\Macro_modis_6531E.h	 \[2.7\] Browser

[4.5] 文件管理
	
----------------------------------------------------------------------------
[4.6] 工具[t]:单位转换 游戏 闹钟 日历 魔音
//	modis: 工具
Save:node\C\study\Macro_modis_6531E.h	 \[2.15\] 工具


//	tool:单位转换:


//	tool:游戏:

//	tool:计算器: 

//	tool:蓝牙:
//	tool:闹钟: 

//	tool:日历  , 伊斯兰日历: 

//	tool:
project_UIS8910_ROM_16MB_DS_USER.mk WORLD_CLOCK_SUPPORT = TRUE




----------------------------------------------------------------------------

[5.1] trace[t]:
project_UIS8910_ROM_16MB_DS_USER.mk RELEASE_INFO = FALSE
project_UIS8910_ROM_16MB_DS_USER.mk MEMORY_DEBUG_SUPPORT = TRUE
project_UIS8910_ROM_16MB_DS_USER.mk TRACE_INFO_SUPPORT = TRUE
project_UIS8910_ROM_16MB_DS_USER.mk PRODUCT_BASELIB_DIR = sc6531_32X32_320X240BAR_QW_ATV_formal_trace

抓trace:
open: tools\DEBUG_TOOL\CHANNELSERVER\Bin\ChannelServer.exe
//	1) 连接USB线, 选择 USB LOG的选项
//	2) Channel Server Configure:
//		MS: Type:	UART
//		   Port:  SPRD U2S Diag(COM12)	---------------- 要改 
//		                       (COM12是连接USB的端口)
//		   BaudRate:115200	---------------------------- 要改 
//		   Endian: self adaptive
//		
//		WinSocket Server:
//		   Port: 36666 
//		   Timeout: 3 (s)
//	3) Connect MSSim;channel的图标将有谈绿色的更成翠绿色
// 其他:
// 1. 驱动不同, 可能显示 SPRD Diag(COM12)
// 2. 一直不出log, 还原svn后可能正常


open: tools\DEBUG_TOOL\LOGEL\Bin\ArmLogel.exe
//	1) 插入USB线，选择USB LOG的选项
//	2) 运行 ArmLogel.exe
//	3) 菜单选项LOG下面一行的最左边的DLL图标；
//	4) DLL图标变化后，点击第二个图标Connect;
//	5) 点击第五个图标Logging
//	6) 点击点击第五个图标Stop
//	7) 点击log保存图标


// NV修改:
open: tools\DEBUG_TOOL\NVEDITOR\Bin\NVEditor.exe
// 选择:
build\UIS8910_ROM_16MB_DS_USER_builddir\img\nvitem\nvitem.prj
F:\6531G_16A_MP_W17.43.4\build\UIS8910_ROM_16MB_DS_USER_builddir\img\nvitem
// 设置 Armlog抓取:
//	dsp_log_switch = 0x0 //
//	enable_arm_log = 0x1
//	com_debug =  0; 		 //0xFF
//	arm_log_uart_id = 0x1 //
//	dsp_log_uart_id = 0x0 //

// 设置 Dsplog抓取:
//	dsp_log_switch = 0x1 //
//	enable_arm_log = 0x1
//	com_debug = 0;  		//0xFF
//	arm_log_uart_id = 0x0 //
//	dsp_log_uart_id = 0x1 //


// 不用改:
//	com_data = 0xFF               (USB:0xFF, 相同)
//	com_debug_baud_rate = 0x70800 (USB:0x1C200,展迅没说这个要改)


// NV下载(用这个旧版的):
open: tools\DEBUG_TOOL\ResearchDownload\Bin\ResearchDownload.exe
// 只选中: FDL1, FDL1, NV
// replace NV bin:
build\PS102_DJTX_G182_W25G2_F1_builddir\img\nvitem\nvitem.bin
// 或者 CUSTOMER = PS102_KLS_2IN1
common\nv_parameters\PS102_MB\PS102_KLS_2IN1\nv_type\nv_type_4band.nvm =^com_debug			 //ITEM_NAME 0x1
common\nv_parameters\PS102_MB\PS102_KLS_2IN1\nv_type\nv_type_4band.nvm =^com_debug_baud_rate //ITEM_NAME 0x70800
common\nv_parameters\PS102_MB\PS102_KLS_2IN1\nv_type\....		   nvm =^DSP_log_switch 	 //ITEM_NAME 0x0
//File—>Save Image，File—>Save Project


USB抓trace:
//工程模式设置:
//8 para set->arm log:open
//8 para set->dsp log:open
//8 para set->usb log:open
//8 para set->debug->debug alert:open  (不确定开不开)

uart抓trace:
//工程模式设置:
//8 para set->arm log:open
//8 para set->dsp log:open
//8 para set->usb log:close (不确定)
//8 para set->debug->assert:open  (不确定开不开)


抓trace--压缩空间:
project_UIS8910_ROM_16MB_DS_USER.mk FM_SUPPORT = NONE 
project_UIS8910_ROM_16MB_DS_USER.mk VIDEO_PLAYER_SUPPORT = FALSE
project_UIS8910_ROM_16MB_DS_USER.mk PIC_VIEWER_SUPPORT = FALSE


--------------------------------------------------
CE 蓝牙定频版本:
project_UIS8910_ROM_16MB_DS_USER.mk PRODUCT_BASELIB_DIR = sc6531efm_32X32_320X240BAR_AB_CE
project_UIS8910_ROM_16MB_DS_USER.mk BT_NONSIG_SUPPORT = TRUE
	

----------------------------------------------------------------------------
[5.1] 扩展项目:



错误查找命令:
set path=%path%;C:\CSDTK\cygwin\bin;
find ./ -name "*.log"| xargs grep "ERROR"
没装cygwin:
findstr /s /i "ERROR" *.log>aaaa.txt

// open aaaa:
cmd: F:&&cd build\M115_JGW_D2_X191_F2\log&&findstr /s /i "ERROR" *.log>aaaa.txt&&start aaaa.txt
// open aaaa:
build\M115_JGW_D2_X191_F2\log\aaaa.txt Error:
// open cmd:
cmd: cmd




----------------------------------------------------------------------------

[5.2] Build问题[Cb][b]:

build\UIS8910_ROM_16MB_DS_USER_builddir\log\midisoundbank.log 文件无法删除 
build\UIS8910_ROM_16MB_DS_USER_builddir\log\app.log ERROR
build\UIS8910_ROM_16MB_DS_USER_builddir\log\resource.log ERROR
build\UIS8910_ROM_16MB_DS_USER_builddir\log\caf_templete.log ERROR
build\UIS8910_ROM_16MB_DS_USER_builddir\tmp/SC6531EFM.def 宏
build\UIS8910_ROM_16MB_DS_USER_builddir\tmp\app.macro 查看宏是否存在
	

findstr /s /i "ERROR" *.log>aaaa.txt



1 超空间:
~ 2个游戏		  12K
~ 一条APN记录占用0.163kb。3000~

2 编译时间
gettime.pl

[Cg]


