/***********************************************************************/
/*************************** 说明与设置 ********************************/
/***********************************************************************/

快捷键[Ca]:
F11:打开/关闭笔记
F2: 打开选择的路径/文件; 文件名+扩展名
F5: 打开sln文件/cmd命令+右键粘贴; 当前行以set、cmd、make/ctmake/xmake、open、vc、vs08开头; 默认打开文件+关键字(行)


--------------------------------------------------

默认项目(便于上传svn) [Cs]:
set M101_COOLCEL_CS181_M_BRAVIS_F3 M101_COOLCEL gsm
	
当前项目:
sethistory
set M101_C1_F184_M_ergo_F3 M101_COOLCEL gsm
	
set M105_MLT_S2401_GTOUCH_F4 M105_MLT gprs
set M105_MLT_S2401_GRAVITY_ULTRA_F1 M105_MLT gprs
set M105_JX_S1716_A_VOLKSCOMM_F4 M105_MLT gprs

set M103_KEMAN_2401_VGOTEL_F2 M103_KEMAN gprs
set M103_KM_V2408_VGOTEL_I10_F2 M103_KEMAN gprs

set M105_XYZN_S1_C3_NEDADJ_F6 M105 gprs
set M107_XYZN_S2_4A_NEDADJ_F6 M107 gprs
set M106_DC_P2401_F6 M106 gprs


更换projects目录:	
setPath old (在这一行按F5, 开始替换)
setPath new (在这一行按F5, 开始替换, 路径为 projects\...)


setEnd:从setEnd行开始替换名称(上一次选中->当前选中); 以空格分开; 不要直接替换(M105<->M105_MLT 暂时未判断)

/***********************************************************************/
/*************************** 编译与下载 ********************************/
/***********************************************************************/

MTK编译指令[Cc]:
cmd:F:\11CW1352MP\11CW1352MP\cmd
open:cd F:


编译1:
make M105_JX_S1716_A_VOLKSCOMM_F4 gprs new

编译2:
projects\M105_MLT\M105_JX_S1716_A_VOLKSCOMM_F4\New_common.bat


编译模块
make M105_JX_S1716_A_VOLKSCOMM_F4 gprs r
make M105_JX_S1716_A_VOLKSCOMM_F4 gprs remake
make M105_JX_S1716_A_VOLKSCOMM_F4 gprs remake custom
make M105_JX_S1716_A_VOLKSCOMM_F4 gprs remake plutommi

编译资源 (VS接着编译即可)
make M105_JX_S1716_A_VOLKSCOMM_F4 gprs Resgen


模拟器: (改mk需重编)
make M105_JX_S1716_A_VOLKSCOMM_F4 gprs gen_modis
vs08:MoDIS_VC9\MoDIS.sln

--------------------------------------------------


下载工具[Ct]
  FlashTool_v5.1528.00
open:D:\Desktop\工具\FlashTool_v5.1548.00\Flash_tool_Beta.exe
1 Scatter/config File, 选择
build\M105_JX_S1716_A_VOLKSCOMM_F4\M105_MLT_CS181_M_BRAVIS_F3_PCB01_gprs_MT6261_S00.M105_JX_S1716_A_VOLKSCOMM_F4_V06_20180915.bin\FARSIGHTED61M_CN_11C_BB.cfg
2  选择
    option->usb Download/Readback
    option->usb Download Without battery
    option->Format Fat(auto)->Format Fat
3 Format Fat不会擦除校准参数、IMEI号


字符串工具:
open:plutommi\Customer\STMTView.exe


/***********************************************************************/
/************************ Make常用设置 *******************************/
/***********************************************************************/

Make 常用设置[Cf]:
make\M105_JX_S1716_A_VOLKSCOMM_F4_gprs.mak CUSTOMER_NAME = M105_MLT
make\M105_JX_S1716_A_VOLKSCOMM_F4_gprs.mak MAIN_LCD_SIZE
make\M105_JX_S1716_A_VOLKSCOMM_F4_gprs.mak _COMBO_LCM = ST7735S GC9106	  屏设置
make\M105_JX_S1716_A_VOLKSCOMM_F4_gprs.mak SYNC_LCM_SUPPORT 			  屏设置 TE脚
//make\M105_JX_S1716_A_VOLKSCOMM_F4_gprs.mak 2_DATA_LANE_LCM 		  屏 三线/四线
make\M105_JX_S1716_A_VOLKSCOMM_F4_gprs.mak DUAL_CAMERA_SUPPORT 	  		  摄像头设置
make\M105_JX_S1716_A_VOLKSCOMM_F4_gprs.mak CMOS_SENSOR GC6133_SERIAL	  摄像头设置
make\M105_JX_S1716_A_VOLKSCOMM_F4_gprs.mak CMOS_SENSOR_BAK1 SP0821_SERIAL 摄像头设置
make\M105_JX_S1716_A_VOLKSCOMM_F4_gprs.mak FLASHLIGHT_TYPE				  闪光灯
make\M105_JX_S1716_A_VOLKSCOMM_F4_gprs.mak CUSTOM_OPTION 			  	  自定义宏


Make 特殊宏:
make\M105_JX_S1716_A_VOLKSCOMM_F4_gprs.mak REF_LIST_BRANCH  翻译
make\M105_JX_S1716_A_VOLKSCOMM_F4_gprs.mak CUSTOM_DEVICE
custom/system/FARSIGHTED61M_CN_11C_BB/custom_MemoryDevice_M105_JX_S1716_A_VOLKSCOMM_F4.h __MMI_SUPER_BATTERY__



features:
plutommi/mmi/Inc/MMI_features.h __MMI_UI_HINTS_IN_MENUITEM__
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h CFG_MMI_DYNAMIC_SIM_DYNAMIC_UI
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h WHITELIST
	


版本号[Cv]:
make\Verno_M105_JX_S1716_A_VOLKSCOMM_F4.bld BUILD_DATE 版本文件



/***********************************************************************/
/************************ 项目文件设置 *********************************/
/***********************************************************************/
项目路径替换[Cr]:
setPath old (在这一行按F5, 开始替换)
setPath new (在这一行按F5, 开始替换, 路径为 projects\...)
	
#### set project path auto replace start ####
/*
项目路径: (合并到以下替换内容)
//设置项 用双斜杠
CurProPath = projects\\M105_MLT\\M105_JX_S1716_A_VOLKSCOMM_F4

默认路径转换: 
//不用的设置项 可以注释掉
//正反斜杠都可以替换
//第2个路径会加上(CurProPath)
//部分行，行尾加空格，防止整个替换会带缩进
setProPath plutommi\\Customer\\Audio\\M105_MLT\\M105_JX_S1716_A_VOLKSCOMM_F4 = AUDIO\\PLUTO
setProPath plutommi\\Customer\\Images\\M105_MLT\\M105_JX_S1716_A_VOLKSCOMM_F4 = Images
#setProPath plutommi\\Customer\\CustResource\\M105_MLT_MMI\\M105_JX_S1716_A_VOLKSCOMM_F4 = Resource
setProPath plutommi\\Customer\\CustResource\\M105_MLT_MMI\\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h = Resource\\MMI_features_switchPLUTO.h
#setProPath plutommi\\Customer\\CustResource\\M105_MLT_MMI\\ref_list_M105_JX_S1716_A_VOLKSCOMM_F4.txt = Resource\\ref_list.txt
setProPath plutommi\\Customer\\CustResource\\M105_MLT_MMI\\ref_list_M105_JX_S1716_A_VOLKSCOMM_F4.txt = Resource\\ref_list.txt

setProPath plutommi\\Customer\\CustResource\\M105_MLT_MMI\\M105_JX_S1716_A_VOLKSCOMM_F4\\Themecomponents.h = Resource\\Themecomponents.h
setProPath plutommi\\Customer\\CustResource\\M105_MLT_MMI\\M105_JX_S1716_A_VOLKSCOMM_F4\\ThemeRes.c = Resource\\ThemeRes.c

setProPath make\\M105_JX_S1716_A_VOLKSCOMM_F4_gprs.mak = M105_JX_S1716_A_VOLKSCOMM_F4_gprs.mak
setProPath make\\Verno_M105_JX_S1716_A_VOLKSCOMM_F4.bld = Verno_M105_JX_S1716_A_VOLKSCOMM_F4.bld
*/
#### set project path auto replace end ####

/***********************************************************************/
/**************************** 修改记录 *********************************/
/**** 后面部分注释掉,   避免电脑卡; ***************************************/
/**** 上传时不注释,方便对比 ********************************************/
/***********************************************************************/

//*
菜单[m]:
plutommi\Framework\EventHandling\EventsInc\mmi_menu_handlers.h MENU_SETTING_DEDICATED_KEYS
MCT_TOOL\Resource\OutTreeStructure.txt MAIN_MENU


	主菜单:
plutommi\mmi\MainMenu\MainMenuSrc\MainMenu.c
plutommi/mmi/MainMenu/MainMenuRes/MainMenuRes.res __M105_MLT_2403_VGOTEL__
	主菜单 顺序:
plutommi/mmi/MainMenu/MainMenuRes/MainMenuRes.res <MENU^id="IDLE_SCREEN_MENU_ID"
plutommi/mmi/MainMenu/MainMenuRes/MainMenuRes.res __M105_MLT_V2408_VGOTEL__
	新加主菜单:
plutommi/mmi/MainMenu/MainMenuRes/MainMenuRes.res <SCREEN > ...
plutommi/mmi/MainMenu/MainMenuRes/MainMenuRes.res <MAINMENUITEM^id="MENU_ID_FMRDO_MAIN"
	 
	 菜单图标:
plutommi/mmi/MainMenu/MainMenuRes/MainMenuRes.res <MAINMENUITEM^id="MENU_ID_FMRDO_MAIN"
plutommi/mmi/MainMenu/MainMenuRes/MainMenuRes.res <IMAGE^id="MAIN_MENU_MATRIX_FMRDO_ICON"
	 二级菜单字符:
plutommi/mmi/MainMenu/MainMenuRes/MainMenuRes.res <STRING^id="MAIN_MENU_SETTINGS_TEXT"
plutommi/mmi/MainMenu/MainMenuRes/MainMenuRes.res <MENUITEM^id="MAIN_MENU _FMRDO_MENUID"
plutommi/mmi/MainMenu/MainMenuRes/MainMenuRes.res <MENU^id="MAIN_MENU_SETTINGS_MENUID" str="MAIN_MENU_SETTINGS_TEXT"
plutommi/mmi/MainMenu/MainMenuRes/MainMenuRes.res <MENU^id="MAIN_MENU_MULTIMEDIA_MENUID"
plutommi/mmi/MainMenu/MainMenuRes/MainMenuRes.res <MENU^id="MAIN_MENU_ORGANIZER_MENUID"
plutommi/mmi/MainMenu/MainMenuRes/MainMenuRes.res <MENU^id="MAIN_MENU_SETTINGS_MENUID"
	设置显示设置:
plutommi\mmi\Setting\SettingRes\PhoneSetting.res <MENU^id^=^"MENU9102_INITIAL_SETUP"
plutommi\mmi\Setting\SettingRes\PhoneSetting.res <MENU^id^=^"MENU_IDLE_SCR_DISP"
	设置蓝牙:
plutommi\MtkApp\Connectivity\ConnectivityRes\ConnectivityMainmenu.res <MENU^id^=^"MENU_ID_CONNECTIVITY"
	情景模式:
plutommi\mmi\PROFILES\Profiles_Res\Profiles.res <MENU^id^=^"MAIN_MENU_PROFILES_MENUID"

	文件管理:
plutommi\MtkApp\FileMgr\FileMgrRes\000_FileMgr.res <MENUITEM^id="MENU_ID_FMGR_DRIVE_FORMAT"
	短信:
plutommi\mmi\Messages\MessagesRes\SmsAppRes.res <MENU^id="MAIN_MENU_MESSAGES_MENUID"

	子菜单:
//<MENU ID2/>
//<MENU ID1>
//	<MENUITEM_ID ID2/>
//<MENU/>
	子菜单:
	
plutommi\Customer\CustomerInc\screen_enum.h SCR_ID_IDLE_SIM_SPACE_SETTING



----------------------------------------------------------------------------

资源[r]: 图片 铃声 字库
	资源路径:
plutommi\Customer\CustResource\M105_MLT_MMI\CustResDefM105_MLT.h #define^CUST_IMG_PATH
	资源子路径:
plutommi\Customer\CustResource\M105_MLT_MMI\CustResDefM105_MLT.h #define^IMG_MAINMENU_SUB_DIR
plutommi\Customer\CustResource\M105_MLT_MMI\2401_VGOTEL_F2\Themecomponents.h #define^img_menu_bkg_filler_defaultTheme
plutommi\Customer\CustResource\M105_MLT_MMI\2401_VGOTEL_F2\Themecomponents.h #define^img_matrix_main_menu_highlight_image_defaultTheme
plutommi\mmi\Resource\PopulateRes.c IMG_MAINMENU_SUB_DIR
plutommi\mmi\MainMenu\MainMenuRes\MainMenuRes.res IMG_MAINMENU_SUB_DIR 添加完整路径
	资源子路径 临时文件(原图不存在, 资源不生成):
plutommi\Customer\CustResource\CustImgDataHWExt.h MM_BG _PNG_
plutommi\Customer\CustResource\CustImgResExt.c mtk_nCustImageNamesEXT
plutommi\Customer\CustResource\CustImgDataRes_2.c

	主菜单图片:
plutommi\Customer\Images\M105_MLT\M105_JX_S1716_A_VOLKSCOMM_F4/ image.zip
plutommi\Customer\Images\M105_MLT\M105_JX_S1716_A_VOLKSCOMM_F4\MainLCD\MainMenu\SLIM_MATRIX

	List:
plutommi\mmi\MainMenu\MainMenuRes\MainMenuRes.res CUSTOMER_NAME_M105_JX_S1716_A_VOLKSCOMM_F4
plutommi\mmi\Setting\SettingRes\Wallpaper.res CUSTOMER_NAME_M105_JX_S1716_A_VOLKSCOMM_F4 壁纸位置不是这里
	list 标号:
plutommi\Customer\Images\M105_MLT\M101_COOLCEL_S2401_GRAVITY_ULTRA_F1\MainLCD\SubMenu\ListMenuIcon\L_NB30.bmp

	壁纸
plutommi\Customer\Images\M105_MLT\M105_JX_S1716_A_VOLKSCOMM_F4\MainLCD\IdleScreen\Wallpaper
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h CFG_MMI_RES_TYPE_WALLPAPER_SEL
plutommi\mmi\Inc\MMI_features.h __MMI_RES_TYPE_WALLPAPER_SEL__
plutommi\Customer\CustResource\PLUTO_MMI\Res_MMI\Res_PhoneSetting.c WALL01."__MMI_RES_TYPE_WALLPAPER__ "
plutommi\mmi\Setting\SettingSrc\Wallpaper.c wp_item_amount ^=
plutommi\Customer\CustomerInc\CustResDef.h IMG_WALLPAPER_SUB_DIR

	开关机Logo:(仅KM这套代码)
plutommi\mmi\Resource\PopulateRes.c LOGO_FILE_NAME
plutommi\Customer\Images\M105_MLT\M105_JX_S1716_A_VOLKSCOMM_F4\MainLCD\Active\poweronoff\logo.BMP

	开关机动画:与铃声同步问题 建议开机动画时间相比减0.5s 关机动画时间减2s
plutommi\Customer\Images\M105_MLT\M105_JX_S1716_A_VOLKSCOMM_F4\MainLCD\Active\Poweronoff
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h CFG_KM_POWERONOFF_USE_SAME_IMAGE
plutommi\Customer\CustResource\PLUTO_MMI\Res_MMI\Res_PhoneSetting.c POON.gif
~ 
~ lcd_sw_rnd DRV_MAINLCD_INIT_COLOR 设置logo背景色
	关机充电动画
plutommi\mmi\MiscFramework\MiscFrameworkRes\ChargerApp.res IMG_ID_CHARGER_CHARGING
plutommi\Customer\Images\M105_MLT\M101_COOLCEL_S2401_GRAVITY_ULTRA_F1\MainLCD\UIELEMENT\charger\
	

	开关机动画移除壁纸:
plutommi/mmi/Setting/SettingInc/PhoneSetupResList.h #define^MAX_POWER_ON_IMG 

	图片资源大小:
plutommi\Customer\Images\M105_MLT\M105_JX_S1716_A_VOLKSCOMM_F4\images_file_list.ini
plutommi\Customer\ResGenerator\debug\image_info_updated_all.txt MM_MP3 大小

----------------------------
	字符串:
plutommi\Customer\CustResource\M105_MLT_MMI\ref_list_M105_JX_S1716_A_VOLKSCOMM_F4.txt 
plutommi\Customer\ResGenerator\debug\string_resource_usage.txt
	字符串定义:
make\M105_JX_S1716_A_VOLKSCOMM_F4_gprs.mak REF_LIST_BRANCH = M105_MLT
make\Resgen.mak REFLIST_LIST += ref_list_
	字符串工具:
open:plutommi\Customer\STMTView.exe




铃声[k]:字库
	铃声文件:
plutommi\Customer\Audio\M105_MLT\M105_JX_S1716_A_VOLKSCOMM_F4 
plutommi\Customer\Audio\M105_MLT\M105_JX_S1716_A_VOLKSCOMM_F4\UserProfiles\Tone\R_POWER_1.mp3
	铃声资源大小:
plutommi\Customer\ResGenerator\debug\audio_resource_usage.txt
	开关机铃声:
plutommi\Service\ProfilesSrv\ProfilesSrvRes\ProfilesSrv.res R_POWER_1.mp3
plutommi\Service\ProfilesSrv\ProfilesSrvRes\ProfilesSrv.res CUSTOMER_NAME_M105_JX_S1716_A_VOLKSCOMM_F4 定义
projects\M105_MLT\M105_JX_S1716_A_VOLKSCOMM_F4\Resource\ProfilesSrv.res AUD_ID_PROF_TONE1
	来电铃声:
projects\M105_MLT\M105_JX_S1716_A_VOLKSCOMM_F4\Resource\ProfilesSrv.res AUD_ID_PROF_RING1
	资源路径
plutommi\Customer\CustResource\M105_MLT_MMI\CustResDefM105_MLT.h CUSTOMER_NAME_M105_JX_S1716_A_VOLKSCOMM_F4
plutommi\Customer\CustResource\M105_MLT_MMI\CustResDefM105_MLT.h #define^CUST_IMG_PATH
projects\M105_MLT\M105_JX_S1716_A_VOLKSCOMM_F4\Resource\CustResDefPLUTO.h #define^CUST_IMG_PATH
	


	字库文件:
plutommi\Customer\CustResource\FontRes.c
vendor\font\FontData\OfficialFont\Farsi\Farsi14.bdf
vendor\font\FontData\OfficialFont\RUSSIAN\Russian_16.bdf
vendor\font\FontData\OfficialFont\RUSSIAN\Russian_18.bdf
	俄文: 2.4屏用Russian_18,20号字;其他:dotum24太大;arial_ru_20缺字符;Cyrillic_20不熟悉;


	字库:
plutommi\Framework\GUI\GUI_SRC\gui_font_size.c GUI_FONT_SIZE_CALENDAR_TITLE
plutommi\Framework\Interface\FontRes.h SMALL_FONT
vendor\font\MTK\official\project\plutommi\content\inc\MainLcd240X320\L_MTK_Arabic_vk_9.h
vendor\font\MTK\official\project\plutommi\content\inc\MainLcd128X160\L_1_Pluto_Small.h
vendor\font\MTK\official\project\plutommi\content\src\MainLcd128X160\res_gen_font.cpp __MMI_LANG_PERSIAN__
vendor\font\MTK\official\project\plutommi\content\src\MainLcd240X320\res_gen_font.cpp __MMI_LANG_RUSSIAN__



----------------------------------------------------------------------------
配置[f]:
	
	手电筒 充电宝:
make\M105_JX_S1716_A_VOLKSCOMM_F4_gprs.mak __KM_ELECTRIC_TORCH__			手电筒
make\M105_JX_S1716_A_VOLKSCOMM_F4_gprs.mak __SBD_CHARGING_TREASURE_SWITCH__ 充电宝
plutommi\mmi\Idle\IdleSrc\IdleCommon.c km_mmi_electric_torch_switch 	长按打开手电筒
plutommi\mmi\Idle\IdleSrc\IdleCommon.c km_mmi_charging_switch			长按打开充电宝
hal\peripheral\src\bmt_task_main.c bmt_chr_indication
plutommi\mmi\MainMenu\MainMenuSrc\MainMenu.c mmi_popup_msg_charger_1
	添加状态图标:
plutommi\Customer\Images\M105_MLT\M105_JX_S1716_A_VOLKSCOMM_F4\MainLCD\IdleScreen\StatusIcons\SI_CHARGING.png
plutommi\Framework\GUI\GUI_Res\Status_icon_bar.res IMG_SI_CHARGING
plutommi\Framework\GUI\GUI_SRC\wgui_status_icon_bar.c IMG_SI_CHARGING	顺序一致 分组为NO_GROUP
plutommi\Framework\GUI\GUI_INC\gui_typedef.h STATUS_ICON_CHARGING		顺序一致
plutommi\mmi\PROFILES\ProfilesSrc\ProfilesApp.c wgui_status_icon_bar_show_icon
plutommi\mmi\MainMenu\MainMenuSrc\MainMenu.c STATUS_ICON_CHARGING
	添加翻译:
plutommi\mmi\MiscFramework\MiscFrameworkRes\ChargerApp.res STR_CHARGER_BANK_REMOVED
	电量电压:
4格~4.1V   3格~3.91   2格~3.83   1格~3.75   黑~3.62   红~3.52

	EZFM:
make\M105_JX_S1716_A_VOLKSCOMM_F4_gprs.mak __KM_EASY_FM__
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h CFG_MMI_FM_RADIO_BIND_EARPHONE

	按键配置:
open:custom\drv\Drv_Tool\DrvGen.exe
custom\codegen\FARSIGHTED61M_CN_11C_BB\codegen_M103_KM_2401_VGOTEL_F2.dws	 -- GPIO 口 按键配置
	按键定义:
custom\common\custom_fm.c mmi_fm_key_info_struct^g_fm_keypad_table


	网络参数:
custom\common\custom_config_account.c CUSTOMER_NAME_M105_JX_S1716_A_VOLKSCOMM_F4 定义
custom\common\config_account_M105_JX_S1716_A_VOLKSCOMM_F4.h


	音频参数:
custom\audio\FARSIGHTED61M_CN_11C_BB\nvram_default_audio.c
custom\audio\FARSIGHTED61M_CN_11C_BB\nvram_default_audio_M105_JX_S1716_A_VOLKSCOMM_F4.h
GAIN_HND_SPH_VOL0  音频参数 免提音 
GAIN_NOR_SPH_VOL0   正常音

NVRAM_PROFILES_ACTIVATED 情景模式默认NV	
	K类: K类设置不同可能开不了机
make\M105_JX_S1716_A_VOLKSCOMM_F4_gprs.mak CLASSK_CHARGEPUMP_SUPPORT
make\M105_JX_S1716_A_VOLKSCOMM_F4_gprs.mak SBD_EXTERNAL_AMPLIFIER_CLASSK
	
	省电模式:
make\M105_JX_S1716_A_VOLKSCOMM_F4_gprs.mak __KM_MMI_PROFILE_RETRENCH__



----------------------------------------------------------------------------

设置[s]:
custom\common\hal_public\lcd_sw_rnd.h DRV_MAINLCD_INIT_COLOR
	
plutommi\Framework\GUI\GUI_INC\gui_config.h
	滚动条宽度
plutommi\Framework\GUI\GUI_INC\gui_switch.h #define^CFG_UI_SOFTKEY_WIDTH
plutommi\Framework\GUI\GUI_INC\gui_switch.h #define^CFG_UI_SCROLLBAR_WIDTH
	

custom\common\PLUTO_MMI\custom_mmi_default_value.h	--audio vol
	情景默认等级:
custom\common\userprofile_nvram_def.c NVRAM_PROFILES_DEFAULT
custom\common\userprofile_nvram_def_M105_JX_S1716_A_VOLKSCOMM_F4.h
//	voice_tone[4]:这个应该是来电
	耳机+外放音量等级:
plutommi\Service\GpioSrv\gpiosrv.res NVRAM_NORMAL_MODE_VOICE_LEVEL //听筒 (不能设置7级)
plutommi\Service\GpioSrv\gpiosrv.res NVRAM_HDSET_MODE_VOICE_LEVEL  //耳机
plutommi\Service\GpioSrv\gpiosrv.res NVRAM_LDSPK_MODE_VOICE_LEVEL  //外放

	蓝牙名称:
custom\common\PLUTO_MMI\nvram_common_config.c #define^BT_NAME
	USB 链接名称:
custom\drv\misc_drv\_Default_BB\MT6261\usb_custom.c USB_PRODUCT_STRING


	语言:
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h CFG_MMI_LANG_
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h CFG_MMI_LANG_.*(__ON__)
plutommi\Service\SettingSrv\res\GeneralSettingSrv.res NVRAM_SETTING_LANG
	默认输入法:
plutommi\Framework\CommonScreens\CommonScreensRes\editor.res NVRAM_SETTING_PREFER_INPUT_METHOD
plutommi\Framework\CommonScreens\CommonScreensRes\editor.res RESTORE_PREFER_INPUT_METHOD
plutommi\Framework\InputMethod\Inc\ImeGprotEnums.h mmi_imm_input_mode_enum 参考这个枚举, 注意错位2个

	时间:
plutommi\Service\SettingSrv\res\GeneralSettingSrv.res TIME_FORMAT
plutommi\Service\SettingSrv\res\GeneralSettingSrv.res DATE_FORMAT
	亮度:
plutommi\Service\GpioSrv\gpiosrv.res NVRAM_BYTE_BL_SETTING_LEVEL
	闪光灯:
plutommi\Customer\CustResource\PLUTO_MMI\MMI_features_camera.h CAMERA_DEFAULT_SETTING_FLASH
	按键灯等级:
plutommi\Service\Inc gpiosrvgprot	
	自动更新:
plutommi\Service\NITZSrv\res\NITZSrv.res NVRAM_SETTING_AUTOUPDATE_DT_TIME_STATUS 
plutommi\mmi\Setting\SettingRes\PhoneSetting.res NVRAM_AUTOUPDATE_DT_STATUS ??不清楚用途
	默认城市/时区
plutommi\mmi\Organizer\OrganizerRes\WorldClock\WorldClock.res id="CURRENT_CITY"
plutommi\mmi\Organizer\OrganizerRes\WorldClock\WorldClock.res <STRING^id="STR_WCLOCK_CITY78"/>
plutommi\Customer\CustResource\PLUTO_MMI\resource_world_clock_city.c TimeZoneData 新加时区
//	{-5, 		STR_WCLOCK_Lima,		STR_WCLOCK_CITY_ABBRE10,63, 98, 1},

	背光时间:
plutommi\Service\GpioSrv\gpiosrv.res NVRAM_BYTE_BL_SETTING_LEVEL
plutommi\Service\GpioSrv\gpiosrv.res NVRAM_BYTE_BL_SETTING_HFTIME
	锁屏时间:
plutommi/mmi/ScrLocker/ScrLockerRes/ScrLocker.res <MENU^id="MENU_ID_SLK_TIME_SETTING_MENU"
plutommi/mmi/ScrLocker/ScrLockerSrc/ScrLockerSetting.c #define^MMI_SLK_SET_SELECTION_DEFAULT
	省电模式:
make\M105_JX_S1716_A_VOLKSCOMM_F4_gprs.mak __MMI_SUPER_BATTERY__



	手机追踪:
plutommi\mmi\SecuritySetting\SecSetRes\SecSet.res mmi_rp_app_mobile_tracker_def.h
plutommi\mmi\SecuritySetting\SecSetRes\SecSet.res MENU_ID_MOBILE_TRACKER
plutommi\mmi\Inc\ProcedureConfig.h KM_MMI_FRM_PROC_ID_MOBILE_TRACKER
	
			
	指令:
plutommi/AppCore/SSC/SSCPassEngine.c mmi_show_sar_info			SAR
plutommi/AppCore/SSC/SSCPassEngine.c km_change_imei_entry		IMEI
plutommi/AppCore/SSC/SSCPassEngine.c hw_info_show			LCD+CAM信息
plutommi/AppCore/SSC/SSCOperate.c mmi_ssc_send_imei_get_ilm
projects\M105_MLT\M105_JX_S1716_A_VOLKSCOMM_F4\Resource\CustResDefPLUTO.h SSC_ENGINEERING_MODE
custom\common\PLUTO_MMI\nvram_common_config.c NVRAM_EF_PHONE_LOCK_DEFAULT 恢复出厂设置指令


	设置日期时间:
plutommi\Framework\GUI\GUI_SRC\wgui_datetime.c void^show_datetime_input
plutommi\mmi\Setting\SettingSrc\DateAndTime.c void^mmi_phnset_entry_set_date_and_time
plutommi\CUI\InlineCui\InlineCui_Slim.c void^cui_inline_set_item_date 显示数字
plutommi\CUI\InlineCui\InlineCui_Slim.c void^cui_inline_set_item_time 显示数字
plutommi\CUI/InlineCui/InlineCui_Slim.c cui_inline_get_value 保存数字
	显示输入:
plutommi\Framework\GUI\GUI_SRC\gui_inputs.c void^gui_show_multi_line_input_box_ext_internal
	日期有效性:
plutommi\Framework/GUI/GUI_SRC/wgui_datetime.c default_inline_date_validation

	恢复出厂设置:
plutommi\mmi\Setting\SettingSrc\Restore.c mmi_restore_app_table[]
plutommi\mmi\Setting\SettingSrc\Restore.c mmi_restore_app_reboot(void)
custom\common\PLUTO_MMI\nvram_common_config.c NVRAM_ATTR_FACTORY_RESET


----------------------------------------------------------------------------

GUI[g]: 状态条 电量百分比
	title:
plutommi\Framework\GUI\GUI_SRC\wgui_categories_MM.c matrix_title_theme.active_filler
	
plutommi\Framework\GUI\GUI_SRC\gui_buttons.c gui_show_icontext_button
	
plutommi\Framework\GUI\GUI_SRC\wgui_categories_cm.c MMI_multiline_inputbox.normal_text_color

	状态条:
plutommi\Framework\GUI\GUI_SRC\wgui_status_icon_bar.c wgui_status_icon_bar_initialize( ) 
plutommi\Framework\GUI\GUI_SRC\wgui_draw_manager.c dm_setup_and_draw_status_icons( ).   开始函数
plutommi\Framework\GUI\OEM_SRC\wgui_status_icon_bar.c void^wgui_status_icon_bar_update( )
plutommi\Framework\GUI\OEM_SRC\gui_status_icon_bar_oem.c void^gui_status_icon_bar_arrange_oem( ).  坐标位置
plutommi\Framework\GUI\OEM_SRC\gui_status_icon_bar_oem.c void^gui_status_icon_bar_show_oem( ).     画图标
plutommi\Framework\GUI\OEM_SRC\gui_status_icon_bar_oem.c void^gui_status_icon_bar_hide_oem
plutommi\Framework\GUI\OEM_SRC\gui_status_icon_bar_oem.c void^gui_status_icon_bar_show_icon_oem( ).画其他图标，例如数字时钟


	电量:
plutommi/Framework/GUI/GUI_Res/Status_icon_bar.res IMG_SI_BATTERY_STRENGTH 电量
plutommi\Framework\GUI\GUI_SRC\wgui_status_icon_bar.c STATUS_ICON_BATTERY_STRENGTH
plutommi\Framework\GUI\GUI_SRC\wgui_status_icon_bar.c wgui_status_icon_bar_icon_blink_and_animate_timer_callback
plutommi\mmi\MiscFramework\MiscFrameworkSrc\PwronCharger.c g_charbat_context.chargerLevel 电量等级
	电量更新:
plutommi\mmi\MiscFramework\MiscFrameworkSrc\PwronCharger.c void^BatteryStatusIndication
	添加电量百分比:
plutommi\mmi\km\SDK\Src\KM_Util.c km_charbat_get_persent
	电池充满条件:
custom\drv\misc_drv\_Default_BB\MT6261\chr_parameter.c chr_usb_detect_volt = 1400000;	
	电池充满后继续充半个小时(多处定义):
hal\peripheral\src\bmt.c STOPTIMER_TIMEOUT_TICK	 (KAL_TICKS_1_MIN*30)
	电压数组:
custom\app\FARSIGHTED61M_CN_11C_BB\nvram_user_config.c NVRAM_EF_CUST_HW_LEVEL_TBL_DEFAULT


	时间状态条:
plutommi\Framework\GUI\GUI_SRC\wgui_datetime.c show_main_LCD_date_time
plutommi\Customer\Images\M105_MLT\M105_JX_S1716_A_VOLKSCOMM_F4\MainLCD\IdleScreen\Techno\SmallClock\0030.bmp
plutommi\Framework\GUI\GUI_SRC\gui_clock.c gui_clock_show_digital_small_image
	时间状态条 开宏:
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h CFG_MMI_UI_CLOCK_SMAILL_DIGITAL_IMAGE_CLOCK
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h CFG_WGUI_STATUS_ICON_SHOW_TIME_IN_RIGHT

	draw:
plutommi\Framework\GUI\OEM_SRC\gui_status_icon_bar_oem.c gui_status_icon_bar_show_info_oem

	弹窗图标:
custom\common\PLUTO_MMI\custom_events_notify.c mmi_events_notify_tbl

	界面位置:
plutommi\Customer\CustResource\CustCoordinates.c dm_category_id_control_set_map_struct^g_categories_controls_map


其它，未整理:
SBD_ELECTRIC_TORCH_BLINK_FAST_AND_SLOW 手电筒添加快闪慢闪
mmi_prof_customize_scrn_csk_hdlr  SIM1_MSG_TONE_ITEM flag = 2;添加可选择文件


cui_tone_selector_creat_tone_list 调整铃声个数
km_mmi_prof_activate_profile_backlight_process

gui_show_icontext_button  softkey字体颜色

dm_redraw_category_screen


----------------------------------------------------------------------------

Idle[i]: 测试模式
	待机运营商 mp3 fm
plutommi/mmi/Idle/IdleSrc/IdleClassic.c void^mmi_idle_classic_on_update_service_indication
plutommi/Framework/GUI/GUI_SRC/wgui_categories_idlescreen.c wgui_cat033_show_details
	
plutommi/mmi/Idle/IdleSrc/IdleClassic.c void^mmi_idle_classic_on_enter

	idle:network
plutommi\Framework\GUI\GUI_INC\gui_switch.h CFG_UI_IDLE_NETWORK_NAME_Y

	位置修改:
plutommi\Customer\CustResource\CustCoordinates.c g_categories_controls_map[]
	显示:
plutommi/Framework/GUI/GUI_SRC/wgui_categories_idlescreen.c wgui_cat033_show_details( )

	week:
plutommi\Framework\GUI\GUI_SRC\wgui_datetime.c void^km_idle_clock_week( )
plutommi\Framework\GUI\GUI_SRC\wgui_datetime.c void^show_main_LCD_date_time( )
	date:
plutommi\Framework\GUI\GUI_SRC\wgui_datetime.c wgui_clock_create(&wgui_clock_mainlcd_clock2

--------------------------------
	长按打开手电筒
plutommi\mmi\Idle\IdleSrc\IdleCommon.c
plutommi\mmi\Idle\IdleSrc\IdleCommon.c km_mmi_electric_torch_switch 

ShortCut:
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h CFG_MMI_DEDICATED_KEY_SHORTCUTS
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h CFG_MMI_DEDICATED_KEY_SHORTCUTS
plutommi\Customer\CustResource\PLUTO_MMI\MMI_features_switchPLUTO.h CFG_MMI_DEDICATED_KEY_SHORTCUTS
plutommi\Customer\CustResource\PLUTO_MMI\resource_shortcuts.c g_mmi_shct_nav_key_default_list
plutommi\Customer\CustResource\resource_shortcuts.c g_mmi_shct_nav_key_default_list 临时文件(模拟器改这个文件)
custom\common\PLUTO_MMI\nvram_common_config.c NVRAM_SHORTCUTS_TOTAL
	short ID:
plutommi\Customer\CustResource\mmi_rp_menu_shortcut_data.c mmi_shct_candidate_menu

--------------------------------
测试模式:
	版本号:
plutommi\MtkApp\FactoryMode\FactoryModeSrc\FactoryModeMisc.c void^mmi_fm_select_version_summary_menu
plutommi\MtkApp\FactoryMode\FactoryModeSrc\FactoryModeMain.c MMI_RET^mmi_fm_enter_main_menu_proc
plutommi\MtkApp\FactoryMode\FactoryModeRes\FactoryMode.res <MENUITEM^id="MENU_ID_FM_FLASH"

	校准参数:   测试模式->版本号->SERIAL#: 10表示已校准
plutommi\MtkApp\FactoryMode\FactoryModeSrc\FactoryModeMisc.c ReadRecordSlim(NVRAM_EF_BARCODE_NUM_LID, 


--------------------------------
Lock[l]:
plutommi\mmi\ScrLocker\ScrLockerSrc\ScrLockerClassic.c
	默认时间
plutommi\mmi\ScrLocker\ScrLockerSrc\ScrLockerSetting.c MMI_SLK_SET_SELECTION_DEFAULT
----------------------------------------------------------------------------

拨号[d]: 
plutommi\Framework\GUI\GUI_SRC\wgui_categories_CM.c ShowMOMTCallScreen
	拨号图标:
plutommi\Framework\GUI\GUI_Res\Gui.res #define^IMG_IDLE_DIGI_SUB_DIR
	拨号数字上下移:
plutommi/Framework/GUI/GUI_SRC/gui_inputs.c gui_dialer_input_box_prev_line
plutommi/Framework/GUI/GUI_SRC/gui_inputs.c gui_dialer_input_box_next_line
plutommi/Framework/GUI/GUI_SRC/gui_inputs.c gui_show_dialer_input_box_ext1
	拨号图片长按删除:
plutommi/Framework/GUI/GUI_SRC/wgui_inputs.c wgui_inputs_fast_del_nav_get_op_handler

	长按#键:
plutommi\CUI\DialerCui\DialerCuiCommon.c
	修改dialer search拨号界面字体颜色背景
plutommi\Framework\GUI\GUI_SRC\wgui_categories_idlescreen_op.c void^wgui_cat203_set_editor_focus_state
	定义+号在0上（+号键在“*”号键上       只要将其OFF掉）
plutommi\Customer\CustResource\PLUTO_MMI\MMI_features_switchPLUTO.h CFG_MMI_MULTITAP_KEY_0 (__OFF__)
	

	按键定义:
vendor\InputMethod\mtk\mtkmultitap.c g_multitap_urdu

	 通话动画:
plutommi/Service/Gsm3gCallSrv/GCallSrvStructMgmt.c IMG_ID_GCALL_CALL_INCOMEING
	
----------------------------------------------------------------------------
Menu:
	title:
plutommi\Framework\GUI\GUI_SRC\wgui_categories_MM.c matrix_title_theme.active_filler
	size:
plutommi\Framework\GUI\GUI_SRC\wgui_categories_MM.c configure_fixed_matrix(ixsize, iysize





----------------------------------------------------------------------------
联系人[p]: 短信
plutommi\mmi\PhoneBook\PhoneBookSrc\PhoneBookSetting.c

	联系人切换用tab+icon
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h CFG_MMI_PHB_UI_IN_TABS
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h CFG_MMI_PHB_CALLER_GROUP
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h CFG_MMI_TAB_BARS_SUPPORT

	群组功能:
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h CFG_MMI_PHB_UI_IN_TABS
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h CFG_MMI_PHB_CALLER_GROUP
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h CFG_MMI_CONTACT_SLIM

	联系人-预览:
plutommi/mmi/PhoneBook/PhoneBookSrc/PhoneBookEditor.c mmi_phb_entry_view_contact_entry_inline_tab_0
	
----------------------------------------------------------------------------
短信:
	短信-list:
plutommi/mmi/UnifiedMessage/UnifiedMessageSrc/UMScrHdlr.c mmi_um_ui_sh_general_folder_entry
plutommi/mmi/UnifiedMessage/UnifiedMessageSrc/UMScrHdlr.c mmi_um_ui_sh_general_folder_hilite_hdlr
	短信-view:
plutommi/mmi/Messages/MessagesSrc/SmsAppMainUI.c mmi_sms_entry_viewer
	短信-save:
plutommi/mmi/Messages/MessagesSrc/SmsAppEditor.c mmi_sms_editor_opt_select_hdlr
	短信-edit:
plutommi/mmi/Messages/MessagesSrc/SmsAppEditor.c mmi_sms_entry_editor
plutommi/Framework/InputMethod/Engine/Engine_Src/Imc_key.c mmi_imc_key_set_softkey
	短信-send:
plutommi/CUI/SmsCui/SmsSenderCui.c cui_sms_send_proc
plutommi/CUI/SmsCui/SmsSenderCui.c cui_sms_entry_add_recipient
plutommi/CUI/SmsCui/SmsSenderCui.c cui_sms_dm_pre_send_msg
	短信-短语-翻译:
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h CFG_MMI_SMS_TEMPLATE_SPANISH

----------------------------------------------------------------------------

多媒体[u]:

	Camera:
plutommi\MtkApp\Camera\CameraSrc\CameraApp.c
plutommi\MtkApp\Camera\CameraSrc\CameraApp.c mmi_camera_preview_set_key_hdlr

	Image:
plutommi\MtkApp\ImageView\ImageViewRes\imgview.res
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h USE_SW_PNG_DECODER
make\M105_JX_S1716_A_VOLKSCOMM_F4_gprs.mak PNG_DECODE	开了会报几个错误, PNG打不开


	FM:
make\M105_JX_S1716_A_VOLKSCOMM_F4_gprs.mak FM_RADIO_RECORD
	EZFM:
make\M105_JX_S1716_A_VOLKSCOMM_F4_gprs.mak EASY_FM
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h CFG_MMI_FM_RADIO_BIND_EARPHONE
	FM-画界面:
plutommi\MtkApp\FMRadio\FMRadioSrc\FMRadioMainScreen.c void^mmi_fmrdo_show_main
	FM-channel字体:
plutommi\MtkApp\FMRadio\FMRadioSrc\FMRadioMainScreen.c void^mmi_fmrdo_redraw_main_freq_label
	FM-其他颜色:
plutommi\Customer\CustResource\M105_MLT_MMI\resource_fmradio_skins.c g_fmrdo_skins


	SCREENSAVER:
plutommi\mmi\Setting\SettingRes\ScreenSaver.res NVRAM_SCREENSAVER_STATUS
plutommi\mmi\Setting\SettingRes\ScreenSaver.res RESTORE_DEFAULT_SCREENSAVER_STATUS
plutommi\mmi\Setting\SettingRes\ScreenSaver.res NVRAM_CURRENT_SCREENSVER_ID
plutommi\mmi\Setting\SettingRes\ScreenSaver.res RESTORE_DEFAULT_CURRENT_SCREENSVER_ID

----------------------------------------------------------------------------
浏览器[w]: 文件管理
	设置主页为百度:
custom\common\PLUTO_MMI\nvram_common_custpack.c nvram_wap_bookmark_list_struct


----------------------------------------------------------------------------
文件管理:
	详情opt:
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h CFG_MMI_SLIM_FILE_MANAGER
plutommi\MtkApp\FileMgr\FileMgrSrc\FileMgrMain.c MENU_ID_FMGR_CARD_DETAIL SRV_FMGR_DRV_CARD_TYPE
	格式化:
plutommi\MtkApp\FileMgr\FileMgrSrc\FileMgrMain.c fmgr_main_drive_action_hdlr(void)
plutommi\Service\FileMgrSrv\FileMgrSrvStorage.c srv_fmgr_drv_init(void)

----------------------------------------------------------------------------

工具[t]:单位转换 游戏 闹钟 日历
	单位转换:
make\M105_JX_S1716_A_VOLKSCOMM_F4_gprs.mak __MMI_CURRENCY_CONVERTER__
plutommi\mmi\Extra\ExtraRes\currencyconvertor.res EXTRA_MENU_CURRENCYCONVERTOR_STRINGID
plutommi\Customer\CustResource\CustMenuTree_Out.c EXTRA_CURRENCYCONVERTOR_MENU
plutommi\mmi\Extra\ExtraSrc\currencyconvertor.c mmi_cconv_entry_app
plutommi\mmi\Extra\ExtraSrc\currencyconvertor.c mmi_cconv_pre_entry_exchange
plutommi\mmi\Extra\ExtraSrc\currencyconvertor.c SetCategory57RightSoftkeyFunctions(mmi_cconv_pre_entry_exchange 估计要关掉
	游戏:
plutommi/mmi/FunAndGames/FunAndGamesSrc/FunAndGamesSrc.c

	计算器: 
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h CALC CFG_MMI_CALCULATOR CFG_MMI_CAL_SLIM
plutommi\mmi\Extra\ExtraSrc\Calculator.c

	蓝牙:
plutommi/MtkApp/Connectivity/ConnectivityRes/Bluetooth/Bluetooth.res S1716
plutommi/MtkApp/Connectivity/ConnectivitySrc/BtCommon/BTMMIScr.c S1716

	游戏: 
plutommi\mmi\Inc\MMI_features.h #define^__MMI_GAME_SNAKE__
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h CFG_MMI_RES_TYPE_WALLPAPER_SEL
	游戏资源: 
plutommi\mmi\FunAndGames\FunAndGamesRes\Game.res __MMI_GAME_SNAKE__
plutommi\mmi\FunAndGames\FunAndGamesSrc\Game.c GAME_SWITCH(game_snake

----------------------------------------------------------------------------
	闹钟: 
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h CALC CFG_MMI_ALARM_SLIM
	祈祷闹钟: 
plutommi/mmi/MainMenu/MainMenuRes/MainMenuRes.res <MENUITEM_ID>@OID:MENU_ID_AZAAN_ALARM
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h CFG_MMI_AZAAN_ALARM
	祈祷闹钟铃声: 
plutommi\Customer\Audio\M105_MLT\M105_JX_S1716_A_VOLKSCOMM_F4\UserProfiles\Ring\Allah.O.Akber.mp3 没有
	祈祷闹钟资源关闭SLIM: 
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h CFG_MMI_ALARM_SLIM
	祈祷闹钟AMPM: 
make\M105_JX_S1716_A_VOLKSCOMM_F4_gprs.mak __KM_AZAAN_ALARM_ADD_AMPM__
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h CFG_MMI_TIME_SETTING_AM_PM_SUPPORT
plutommi\mmi\Inc\MMI_features.h #define^__MMI_GAME_SNAKE__
plutommi\mmi\Organizer\HijriCalendar\HijriCalendarSrc\AzaanAlarm.c

	魔音:
VOICE_CHANGER_SUPPORT
SBD_CUSTOMER_NLIVE_ADD_MAGIC_VOICE

----------------------------------------------------------------------------

日历: 
	日历开宏: 
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h CFG_MMI_CALENDAR
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h __MMI_CALENDAR_EVENT__ (不开)
plutommi\Framework\GUI\GUI_INC\gui_calendar.h __MMI_CALENDAR_TITLE__
	日历UI: 
plutommi\Framework\GUI\GUI_SRC\gui_calendar.c gui_calendar_init_layout 画界面
plutommi\Framework\GUI\GUI_SRC\wgui_categories_calendar.c SBD_HIJRI_CALENDAR_AFGHAN
plutommi\Framework\GUI\GUI_INC\gui_typedef.h GUI_CALENDAR_FRAME_HEIGHT
	默认日历开始日为周一: 
plutommi\mmi\Organizer\OrganizerRes\calendar.res NVRAM_CLNDR_FIRST_DAY_OF_WEEK
	伊斯兰日历:
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h CFG_MMI_HIJRI_CALENDAR
plutommi\mmi\Inc\MMI_features.h __MMI_HIJRI_CALENDAR__
plutommi\mmi\Organizer\OrganizerRes\calendar.res __MMI_HIJRI_CALENDAR__
make\plutommi\mmi_app\mmi_app.mak HijriCalendar 				添加c(未修改)
plutommi\mmi\Inc\mmi_pluto_res_range_def.h APP_HIJRI_CALENDAR	添加Res(未修改)
	伊斯兰日历转换:
plutommi\mmi\Organizer\OrganizerSrc\Calendar.c mmi_clndr_lunar_data_constructor
plutommi\mmi\Organizer\OrganizerSrc\Calendar.c mmi_hijri_get_date_str
plutommi\mmi\Organizer\HijriCalendar\HijriCalendarSrc\HijriCalendar.c mmi_hijri_greg_to_hijri(MYTIME
plutommi\mmi\Organizer\HijriCalendar\HijriCalendarInc\HijriCalendarDef.h base_hijri_date 	基础日期
	添加Str
plutommi\mmi\Organizer\HijriCalendar\HijriCalendar_res\HijriCalendar.res STR_AFGHAN_JANUARY

----------------------------------------------------------------------------

主题[h]:
plutommi\Customer\CustResource\M105_MLT_MMI\M105_JX_S1716_A_VOLKSCOMM_F4\Themecomponents.h 
plutommi\Customer\CustResource\Themecomponents.h
	弹窗背景:
plutommi\Customer\CustResource\M105_MLT_MMI\M105_JX_S1716_A_VOLKSCOMM_F4\Themecomponents.h UI_filled_area^popup_screen_bg_filler_defaultTheme

	日期高亮背景色:
plutommi\Customer\CustResource\M105_MLT_MMI\M105_JX_S1716_A_VOLKSCOMM_F4\Themecomponents.h #define^img_menuitem_single_line_highlight_filler_color

----------------------------------------------------------------------------

TRACE[h]:
open D:\ProgramDownTool\3.1304.00_Catcher\Catcher.exe
	
Phone--EngMode--uart open

Menu--Config--Set database path:
	tst\database_classb\BPLGUInfoCustomAppSrcP_MT6261_...
Config port:
	usb connect
还有个设置...--set--All on
Menu--View--ps Integrated--show log


----------------------------------------------------------------------------
扩展项目:
//ctrl+C自动添加新文件, 旧项目->新项目
//新项目设置:
newPro = M105_JX_S1716_A_VOLKSCOMM_F4

扩展项目[e]:

custom\codegen\FARSIGHTED61M_CN_11C_BB\codegen_M105_JX_S1716_A_VOLKSCOMM_F4.dws
custom\common\config_account_M105_JX_S1716_A_VOLKSCOMM_F4.h
custom\common\userprofile_nvram_def_M105_JX_S1716_A_VOLKSCOMM_F4.h
custom\system\FARSIGHTED61M_CN_11C_BB\custom_MemoryDevice_M105_JX_S1716_A_VOLKSCOMM_F4.h
make\M105_JX_S1716_A_VOLKSCOMM_F4_gprs.mak 
make\Verno_M105_JX_S1716_A_VOLKSCOMM_F4.bld 
plutommi\Customer\Audio\M105_MLT\M105_JX_S1716_A_VOLKSCOMM_F4\audio.zip
plutommi\Customer\Images\M105_MLT\M105_JX_S1716_A_VOLKSCOMM_F4\image.zip
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h 
plutommi\Customer\CustResource\M105_MLT_MMI\M105_JX_S1716_A_VOLKSCOMM_F4\
plutommi\Customer\CustResource\M105_MLT_MMI\M105_JX_S1716_A_VOLKSCOMM_F4\ThemeRes.c 
plutommi\Customer\CustResource\M105_MLT_MMI\M105_JX_S1716_A_VOLKSCOMM_F4\Themecomponents.h 
plutommi\Customer\CustResource\M105_MLT_MMI\ref_list_M105_JX_S1716_A_VOLKSCOMM_F4.txt 
plutommi\Customer\CustResource\M105_MLT_MMI\CustResDefM105_MLT.h
plutommi\Customer\CustResource\M105_MLT_MMI\CustMiscDataM105_MLT.c
CUSTOMER_NAME_M105_JX_S1716_A_VOLKSCOMM_F4 其他相关


#SVN test
TortoiseProc.exe /command:commit /path:"c:\svn_wc\file1.txt*c:\svn_wc\file2.txt" /logmsg:"test log message" 
F:\11CW1352MP_MT6261DM\custom\codegen\FARSIGHTED61M_CN_11C_BB\codegen_M105_JX_S1716_A_VOLKSCOMM_F4.dws



----------------------------------------------------------------------------
临时目录
plutommi\Customer\ResGenerator\temp
plutommi\mmi\TargetOption.txt
	

SI删除:行太长
plutommi\Customer\ResGenerator\custom_option.txt 
tools\NVRAMStatistic\include\custom_option.txt

错误查找命令:
set path=%path%;C:\CSDTK\cygwin\bin;
find ./ -name "*.log"| xargs grep "ERROR"
没装cygwin:
findstr /s /i "ERROR" *.log>aaaa.txt

----------------------------------------------------------------------------

Build问题[Cb][b]:

build\M105_JX_S1716_A_VOLKSCOMM_F4\build.log cleanlib 				编译时间
build\M105_JX_S1716_A_VOLKSCOMM_F4\MT6261.log Finished: 			链接问题看这个
build\M105_JX_S1716_A_VOLKSCOMM_F4\log\mmiresource.log Error:
build\M105_JX_S1716_A_VOLKSCOMM_F4\log\mmi_framework.log Error:
build\M105_JX_S1716_A_VOLKSCOMM_F4\log\mmi_app.log Error:
build\M105_JX_S1716_A_VOLKSCOMM_F4\log\custom.log Error:
build\M105_JX_S1716_A_VOLKSCOMM_F4\log\mmi_service.log Error:
build\M105_JX_S1716_A_VOLKSCOMM_F4\log\resgen.log Error:
build\M105_JX_S1716_A_VOLKSCOMM_F4\log\mmi_check.log Error:

build\M105_JX_S1716_A_VOLKSCOMM_F4\MMI_DRV_DEFS.mak  				查看宏是否存在
build\M105_JX_S1716_A_VOLKSCOMM_F4\log\info.log  					查看宏是否存在
build\M105_JX_S1716_A_VOLKSCOMM_F4\log\drv_features_option.log  	查看宏是否存在
build\M105_JX_S1716_A_VOLKSCOMM_F4\log\MMI_features.log  			查看宏是否存在


build\M105_JX_S1716_A_VOLKSCOMM_F4\log\ckSysDrv.log Free#Space 				看剩余空间，nv大小
build\M105_JX_S1716_A_VOLKSCOMM_F4\log\resgen_mtk_resgenerator_make.log		res添加头文件
build\M105_JX_S1716_A_VOLKSCOMM_F4\log\resgen_xml_preprocess.log Error:
build\M105_JX_S1716_A_VOLKSCOMM_F4\log\FileSystemConfig.log
build\M105_JX_S1716_A_VOLKSCOMM_F4\log\ckImgSize.log Error:
//The Boundary of VIVA bin				 = 3883008	bytes		可以修改单位 8*512=4096
//Actual VIVA End Address 				 = 3741620	bytes
//============================================================
//Check VIVA Compressed ROM Size: PASS!

build\M105_JX_S1716_A_VOLKSCOMM_F4\gprs\MT6261r\pregen_dep\emigen.det
build\M105_JX_S1716_A_VOLKSCOMM_F4\log\resgen_mtk_resgenerator_make.log Error:

build\M105_JX_S1716_A_VOLKSCOMM_F4\log\vivaConfig.log Error:



----------------
1 超空间:
AAPMC Error: Error[2] Calculating correct VIVA memory value...Failed.
Error: L6388E: ScatterAssert expression (ImageLimit(ZIMAGE_ER) < ImageBase(CACHED_DUMMY_END)) failed on line 904
Please check link error or check 
build\M105_JX_S1716_A_VOLKSCOMM_F4\log\vivaConfig.log Error:
----------------
2
make[1]: *** [zimage_check] Error 1
make[1]: Leaving directory 'F:/11CW1352MP_MT6261DM'
make[1]: Entering directory 'F:/11CW1352MP_MT6261DM'
make[1]: Leaving directory 'F:/11CW1352MP_MT6261DM'
make: *** [POSTBUILD ] Error 1
perl tools\ChkDepMod.pl --step 2 M105_JX_S1716_A_VOLKSCOMM_F4 gprs MT6261

2.2 可能要删这个文件
custom\system\FARSIGHTED61M_CN_11C_BB

----------------
3
make[1]: *** [obigo03cstkadp.lib] Error 2
make[1]: *** [peripheral.lib] Error 2
make[1]: *** [postproc.lib] Error 2
make[1]: Leaving directory 'F:/11CW1352MP_MT6261DM'

make: *** [xgc_all_libs_2] Error 1
new
----------------
4
make[1]: *** [mmiresource.lib] Error 1
make[1]: *** Waiting for unfinished jobs....
make[1]: Leaving directory 'F:/11CW1352MP_MT6261DM'

make: *** [xgc_all_libs_2] Error 1
----------------
5 更换语言后 资源出错 开关机动画/状态图标不显示 --> NV中修改语言
----------------
6 MMI Feature Check Error
soft\tst\database_classb下面的临时文件删除
----------------
7 XX.bin does not exist. Please check it.
----------------
8 并行编译出错->Disable
  make: *** [xgc_all_libs_2] Error 1
----------------
9 process_begin: CreateProcess(C:\Users\ADMINI~1\AppData\Local\Temp\make6688-1.bat, 
  make (e=5): 拒绝访问
----------------
10 Tools\MSYS\bin\sh.exe: *** Couldn't reserve space for cygwin's heap (0x715B0000 <0x1FE0000>)
旧:
tools\MSYS\bin\msys-1.0.dll
新:
open: {save}\SI\z-other-patch\mtk-tools\msys-1.0.dll
换了后还是报错:
make[1]: *** [fluency.lib] Error 2
最后重启一次可以了。
----------------
11 
vivaConfig.log:
Checking VIVA configuration reason
Error: L6388E: ScatterAssert expression (ImageLimit(ZIMAGE_ER) < ImageBase(CACHED_DUMMY_END)) failed on line 904
原因未知, 重新new正常
----------------
12 丢失BOOTLOADER文件，原因未知
M105_..._BOOTLOADER_V005_MT6261_..._ext.bin
----------------
13 F:\11CW1352MP_KM2\build\M105_JX_..\M105_JX_._20181217.bin\M105_JX_.._20181217.bin
文件名长度超过256，不会生成bin文件


----------------------------------------------------------------------------

1 模拟器报错:
1.1 plutommi\framework\mte\mteinc\mte.h
plutommi\framework\mte\mteinc\mte_data.h 少一个}编不过
----------------
1.2  Run-time check Failure #2 - ... 'shortname' was corrupted
MoDIS_VC9\filesystem\FileSystemInc\FSSim_def.h FSSIM_SFN_LEN  ->19 最长18
----------------
1.3 vs_cfg:
 Stack around the variable XX was corrupted
 项目-属性-配置属性-C/C++-代码生成中”，将基本运行时检查设置成默认值
 code->basic runtime checks
----------------
1.4 exist not modis.exe 
 MoDIS_VC9 删除重拉代码
----------------
1.5 cannot update program database:
modis_vc9\mmi_service\debug\vc90.pdb
项目设置（打开项目设置ALT F7，以英文版为例）:
	C\C | General | Debug Information format | C7 Compatible (/Z7)
	C\C | Code Generation | Enable String Pooling | Yes (/GF)
	Linker |Debuging |General Debug Info | Yes (/DEBUG)
网上被互相转载的都是这三项，不过经过实验，只修改第一项即可。
修改保存后，再次编译会出现真正的错误点位置，修改该错误，
然后将各个设置恢复为修改前的值，再[重编]就不会出现cannot update program database错误了
----------------
1.6
vendor\framework\obigo_Q03C\v1_official\msf\msf_lib\export\msf_log.h #define^MSF_LOG_MSG_ARGS
空定义
#ifdef WIN32
#undef  MSF_LOG_MSG_ARGS_(type, modId, msgId, format, s, ...)      
#undef MSF_LOG_MSG_NOARG_(type, modId, msgId, format, s)          
#undef MSF_LOG_MSG_NOARG(x)                                       
#undef MSF_LOG_MSG_ARGS(x)                                        
#endif
----------------
1.7
wps_trc_gen.h 
复制到对应目录, 后来重编正常


[Cg]



