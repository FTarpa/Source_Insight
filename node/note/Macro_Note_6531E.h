快捷键[Ca]：
F11：打开/关闭笔记
F2： 打开选择的路径/文件; 文件名+扩展名
F5： 打开sln文件/cmd命令+右键粘贴; 当前行以set、cmd、make、open、vc、vs08开头; 默认打开文件+关键字(行)

--------------------------------------------------

默认(便于上传svn)[Cs]:
set SE039_YST_E18_E250_F2

当前project:
set SE818_BY_S015_QMOBILE_F2
set SE818_SXJY_X28_QMobile_XL3000_F4
set SE0397_JM_C21_Mozomaxx_F8
set SE0397BZ_LDZN_2403_EK_R240_WDML_F4
	




setEnd:从setEnd行开始替换名称(上一次选中->当前选中)

--------------------------------------------------

6531E编译指令[Cc]:
cmd:F:\6531E_16A\cmd

编译:
open: project\SE0397_JM_C21_Mozomaxx_F8\New_common.bat




编译模块
make p=SE0397_JM_C21_Mozomaxx_F8 m=custom_drv
make p=SE0397_JM_C21_Mozomaxx_F8 image

或 (1行命令)
make p=SE0397_JM_C21_Mozomaxx_F8 m=custom_drv update image
make p=SE0397_JM_C21_Mozomaxx_F8 m=custom_drv update image job=4
make p=SE0397_JM_C21_Mozomaxx_F8 m=resource job=4


其他编模块
make p=SE0397_JM_C21_Mozomaxx_F8 m=app update image



模拟器：
make p=SE0397_JM_C21_Mozomaxx_F8 m=simulator
vc:build\SE0397_JM_C21_Mozomaxx_F8_builddir\win\simulator.dsw



下载工具[Ct]
open tools\DEBUG_TOOL\ResearchDownload\Bin\ResearchDownload.exe

D:\6531G_SVN\build\SE0397_JM_C21_Mozomaxx_F8_builddir\img



--------------------------------------------------




--------------------------------------------------
Make 常用设置[Cf]:
	屏:
project\SE0397_JM_C21_Mozomaxx_F8\project_SE0397_JM_C21_Mozomaxx_F8.mk LCD_CHIP
	摄像头:
project\SE0397_JM_C21_Mozomaxx_F8\project_SE0397_JM_C21_Mozomaxx_F8.mk SENSOR_CHIP
	屏亮度:
chip_drv\chip_module\analog\sr1161\analog_phy_sr1161.c SBD_LCM_BL_25MA_SUPPORT

	修改按键黑点：
MS_Ref\source\lcd\src\lcd.c GC9306_Ex
MS_Customize\source\product\driver\lcd\tft_GC9300.c GC9300_Ex(void)


	
	版本号：
project\SE0397_JM_C21_Mozomaxx_F8\resource\version_software_mocor.h


----------------------------------------------------------------------------
//*
菜单[m]

----------------------------------------------------------------------------

资源

----------------------------------------------------------------------------

项目文件:
	
----------------------------------------------------------------------------

设置[s]:		（笔记是旧的）
	双摄像头(默认单)：
project\SE0397_JM_C21_Mozomaxx_F8\project_SE0397_JM_C21_Mozomaxx_F8.mk SBD_DUAL_CAMERA_SUPPORT

	四频 / 2频设置;开就是2频：
project\SE0397_JM_C21_Mozomaxx_F8\project_SE0397_JM_C21_Mozomaxx_F8.mk __SBD_RF_TWO_BAND_SUPPORT__
project\SE0397_JM_C21_Mozomaxx_F8\project_SE0397_JM_C21_Mozomaxx_F8.mk SBD_RF_TWO_BAND_SUPPORT

	不带马达：
project\SE0397_JM_C21_Mozomaxx_F8\project_SE0397_JM_C21_Mozomaxx_F8.mk __HHT_REMOVE_VIBRA__ =TRUE

	双卡：
project\SE0397_JM_C21_Mozomaxx_F8\project_SE0397_JM_C21_Mozomaxx_F8.mk MMI_MULTI_SIM_SYS = DUAL
project\SE0397_JM_C21_Mozomaxx_F8\project_SE0397_JM_C21_Mozomaxx_F8.mk MULTI_SIM_SYS = DUAL
nv_type_4band.nvm	0x10203, 0x1000203,    卡反
	单卡翻译：
TXT_SIM_SEL_SIM1--pb	--	 SIM1
SIM1 network account

	
	23键：
project\SE0397_JM_C21_Mozomaxx_F8\project_SE0397_JM_C21_Mozomaxx_F8.mk _23KEY
project\SE0397_JM_C21_Mozomaxx_F8\project_SE0397_JM_C21_Mozomaxx_F8.mk MMI_MULTI_GREEN_KEY =DUAL 绿键
	
	FM：
project\SE0397_JM_C21_Mozomaxx_F8\project_SE0397_JM_C21_Mozomaxx_F8.mk MMI_FM_OPEN_SPEAK_OPEN_SUPPORT=TRUE
project\SE0397_JM_C21_Mozomaxx_F8\project_SE0397_JM_C21_Mozomaxx_F8.mk SBD_FM_OPEN_SPEAK_OPEN_SUPPORT=TRUE
project\SE0397_JM_C21_Mozomaxx_F8\project_SE0397_JM_C21_Mozomaxx_F8.mk HHT_MMI_FMTEST_OPEN_SPEAK = TRUE
project\SE0397_JM_C21_Mozomaxx_F8\project_SE0397_JM_C21_Mozomaxx_F8.mk SBD_FM_THRESHOLD_TYPE1=TRUE 	   #带上搜的台多一点
project\SE0397_JM_C21_Mozomaxx_F8\project_SE0397_JM_C21_Mozomaxx_F8.mk HHT_FM_USE_GSM_ANT_SIGNAL_STRONG=TRUE	 #外放时打开


	外置K类功放：
project\SE0397_JM_C21_Mozomaxx_F8\project_SE0397_JM_C21_Mozomaxx_F8.mk __HHT_EXT_AMPLIFIER_CLASS_K__ = TRUE

	软件2合1：FALSE是喇叭听筒独立(硬件二合一)，分开是软件2合1
project\SE0397_JM_C21_Mozomaxx_F8\project_SE0397_JM_C21_Mozomaxx_F8.mk __HHT_EARPIECE_SPEAK_USE_ONE__ = FALSE
project\SE0397_JM_C21_Mozomaxx_F8\project_SE0397_JM_C21_Mozomaxx_F8.mk SBD_EARPIECE_SPEAK_USE_ONE
project\SE0397_JM_C21_Mozomaxx_F8\project_SE0397_JM_C21_Mozomaxx_F8.mk CUSTOMER = S039_JX_2IN1	                 # 二合一的音频（带K类的音频不同）
\audio\audio_dsp_codec_6531.nvm    0x6C0/硬件2合1;    0x638/软件2合1

	三合一：
project\SE0397_JM_C21_Mozomaxx_F8\project_SE0397_JM_C21_Mozomaxx_F8.mk CUS_ADD_SHAKE= TRUE  三合一喇叭宏        
project\SE0397_JM_C21_Mozomaxx_F8\project_SE0397_JM_C21_Mozomaxx_F8.mk VIRTUAL_VIBRATE_FUNC
project\SE0397_JM_C21_Mozomaxx_F8\project_SE0397_JM_C21_Mozomaxx_F8.mk __SPEAKER_VIB_INTENSITY_WEAK__
project\SE0397_JM_C21_Mozomaxx_F8\project_SE0397_JM_C21_Mozomaxx_F8.mk __HHT_EARPIECE_SPEAK_USE_ONE__ = TRUE 三合一同时开


	手电筒
project\SE0397_JM_C21_Mozomaxx_F8\project_SE0397_JM_C21_Mozomaxx_F8.mk HHT_ADD_TORCHLIGHT= TRUE
project\SE0397_JM_C21_Mozomaxx_F8\project_SE0397_JM_C21_Mozomaxx_F8.mk SBD_ADD_TORCHLIGHT			 #6531E
	
	闪光灯
project\SE0397_JM_C21_Mozomaxx_F8\project_SE0397_JM_C21_Mozomaxx_F8.mk DC_FLASH_SUPPORT= TRUE
	
	U盘
project\SE0397_JM_C21_Mozomaxx_F8\project_SE0397_JM_C21_Mozomaxx_F8.mk UMEM_PRTITION _MICRO

	字库：
MS_MMI\source\resource\mmi_res_prj_def.h
MS_MMI\source\resource\Common\FONT
open tools\DEBUG_TOOL\FONTTOOL\Bin\FontTool.exe

project\SE0397_JM_C21_Mozomaxx_F8\project_SE0397_JM_C21_Mozomaxx_F8.mk UMEM_PRTITION _MICRO

	型号--MSD, 翻译：
project\SE0397_JM_C21_Mozomaxx_F8\project_SE0397_JM_C21_Mozomaxx_F8.mk MMI_MSD_SUPPORT
//TXT_MSD_NOTIFY_INFO

----------------------------------------------------------------------------

Idle[i]: 拨号

	拨号光标
project\SE0397_JM_C21_Mozomaxx_F8\project_SE0397_JM_C21_Mozomaxx_F8.mk SENSOR_CHIP
MS_MMI\source\mmi_gui\include\guiedit.h GUIEDIT_DIAL_IMAGE_SPACE_X
MS_MMI\source\mmi_gui\source\editbox\c\guiedit_text.c GUIEDIT_DIAL_IMAGE_SPACE_X
MS_MMI\source\mmi_gui\source\editbox\c\guiedit_text.c GUIEDIT_GetCursorPosForPN

----------------------------------------------------------------------------
	
菜单

----------------------------------------------------------------------------

工具[t]：

----------------------------------------------------------------------------

trace:
project\SE0397_JM_C21_Mozomaxx_F8\project_SE0397_JM_C21_Mozomaxx_F8.mk RELEASE_INFO = FALSE
project\SE0397_JM_C21_Mozomaxx_F8\project_SE0397_JM_C21_Mozomaxx_F8.mk MEMORY_DEBUG_SUPPORT = TRUE
project\SE0397_JM_C21_Mozomaxx_F8\project_SE0397_JM_C21_Mozomaxx_F8.mk TRACE_INFO_SUPPORT = TRUE
project\SE0397_JM_C21_Mozomaxx_F8\project_SE0397_JM_C21_Mozomaxx_F8.mk PRODUCT_BASELIB_DIR = sc6531_32X32_320X240BAR_QW_ATV_formal_trace
	
--------------------------------------------------
CE 蓝牙定频版本:
project\SE0397_JM_C21_Mozomaxx_F8\project_SE0397_JM_C21_Mozomaxx_F8.mk PRODUCT_BASELIB_DIR = sc6531efm_32X32_320X240BAR_AB_CE
project\SE0397_JM_C21_Mozomaxx_F8\project_SE0397_JM_C21_Mozomaxx_F8.mk BT_NONSIG_SUPPORT = TRUE
	

----------------------------------------------------------------------------


扩展项目：





----------------------------------------------------------------------------

Build问题[b]:

build\SE818_YST_S15_Kingstar_F2_builddir\log\midisoundbank.log 文件无法删除 
build\SE818_YST_S15_Kingstar_F2_builddir\tmp/SC6531EFM.def 宏
build\SE818_YST_S15_Kingstar_F2_builddir\tmp\app.macro 查看宏是否存在

1 超空间:
~ 2个游戏		  12K
~ 一条APN记录占用0.163kb。3000~

2 编译时间
gettime.pl

[Cg]


