
//basePath = E:\desktop\H9_KLS_F4\mmi_res_128x160
//basePath = F:\6531G_16A_MP_W17.43.4
basePath = F:\6531G_SX
toolPath = G:\UIS8910FF_36.2\UIS8910.36.2.FFS.git\MS_MMI_Main\source\resource\mmi_res_240x320\


// 6531E [Num][Ca]:
// 1. 
Save:node\C\study\Macro_8910_Debug.h \[1.1\] ImageNote
Save:node\C\study\Macro_8910_Debug.h \[1.2\] TextNote
Save:node\C\study\Macro_8910_Debug.h \[1.3\] BugNote
Save:node\C\study\Macro_8910_Debug.h \[1.4\] GuiNote
Save:node\C\study\Macro_8910_Debug.h \[1.5\] RingNote
// 2. 
Save:node\C\study\Macro_8910_Debug.h \[2.1\] MsgIdNote
Save:node\C\study\Macro_8910_Debug.h \[2.2\] WinNote
// 3. 
Save:node\C\study\Macro_8910_Debug.h \[3.1\] ToolNote
Save:node\C\study\Macro_8910_Debug.h \[3.2\] FmNote
Save:node\C\study\Macro_8910_Debug.h \[3.3\] AlarmNote
Save:node\C\study\Macro_8910_Debug.h \[3.4\] CalendarNote
Save:node\C\study\Macro_8910_Debug.h \[3.5\] EnvNote
Save:node\C\study\Macro_8910_Debug.h \[3.6\] RecNote
	




/***********************************************************************/

[1.1] ImageNote

//查看图标是否存在
Save:node\C\study\Show_Pic_dir.h IMAGE_PUBWIN_QUERY
Save:node\C\study\Show_Pic_dir.h IMAGE_PUBWIN_SUCCESS  
Tool:common\MMI_RES_DEFAULT\IMAG\Pubwin\PDA

Tool:clock\MMI_RES_DEFAULT\IMAG\Alarm\IMAGE_CLOCK_ALARM_ALERT.png
Tool:clock\MMI_RES_DEFAULT\IMAG\Alarm


Save:node\C\study\Show_Pic_dir.h IMAGE_CHECK_SELECTED_ICON        
Save:node\C\study\Show_Pic_dir.h IMAGE_CHECK_UNSELECTED_ICON      
Save:node\C\study\Show_Pic_dir.h IMAGE_CHECK_UNSELECTED_ICON_GRAY 
Save:node\C\study\Show_Pic_dir.h IMAGE_CHECK_SELECTED_ICON 
Save:node\C\study\Show_Pic_dir.h IMAGE_COMMON_SOFTKEY_OK_ICON 
Save:node\C\study\Show_Pic_dir.h IMAGE_CONTROL_POPWIN_SUCCESS 
Save:node\C\study\Show_Pic_dir.h IMAGE_FM_PAUSE_DEFAULT 
Save:node\C\study\Show_Pic_dir.h IMAGE_NUMBER_9
Save:node\C\study\Show_Pic_dir.h IMAGE_IDLE_TITLE_ICON_EARPHONE
Save:node\C\study\Show_Pic_dir.h EARPHONE
Save:node\C\study\Show_Pic_dir.h IMAGE_CONTROL_POPWIN_FAIL
Save:node\C\study\Show_Pic_dir.h IMAGE_CLOCK_CALENDAR_DEFAULT
Save:node\C\study\Show_Pic_dir.h IMAGE_CLOCK_ALARM_WEEK_DISABLED


//str,新加图标:
project\H9_KLS_F4\resource\common_mdu_def.h SBD_H9_KLS_FM
//str,旧图标:
project\H9_KLS_F4\resource\common_mdu_def.h IMAGE_IDLE_TITLE_ICON_EARPHONE
project\H9_KLS_F4\resource\common_mdu_def.h IMAGE_NUMBER_HL_1

Tool:common\MMI_RES_DEFAULT\IMAG\Number\IMAGE_NUMBER_9.png
Tool:common\MMI_RES_DEFAULT\IMAG\Number\
	

IMAGE_CONTROL_LIST_CHECK_DEFAULT

MS_MMI\source\mmi_app\app\fm\h\fm_mdu_def.h SBD_H9_KLS_FM



//打开图标文件位置
Tool:common\MMI_RES_DEFAULT\IMAG\Softkey\IMAGE_SOFTKEY_BG.png
Tool:common\MMI_RES_DEFAULT\IMAG\Softkey\
Tool:common\MMI_RES_DEFAULT\IMAG\StatusbarIcon
Tool:common\MMI_RES_DEFAULT\IMAG\Common
Tool:fm\MMI_RES_DEFAULT\IMAG\IMAGE_FM_PAUSE_DEFAULT.png
Tool:fm\MMI_RES_DEFAULT\IMAG\
Tool:common\MMI_RES_DEFAULT\IMAG\Number\IMAGE_NUMBER_9.png
Tool:common\MMI_RES_DEFAULT\IMAG\Number\
Tool:common\MMI_RES_DEFAULT\IMAG\StatusbarIcon\IMAGE_IDLE_TITLE_ICON_EARPHONE.png
Tool:common\MMI_RES_DEFAULT\IMAG\StatusbarIcon\


//IMAGE_CHECK_SELECTED_ICON
Tool:common\MMI_RES_DEFAULT\IMAG\List\IMAGE_CONTROL_LIST_CHECK_PRESSED.png
//IMAGE_CHECK_UNSELECTED_ICON
Tool:common\MMI_RES_DEFAULT\IMAG\List\IMAGE_CONTROL_LIST_CHECK_DEFAULT.png
//IMAGE_CHECK_UNSELECTED_ICON_GRAY
Tool:common\MMI_RES_DEFAULT\IMAG\List\IMAGE_CONTROL_LIST_CHECK_UNSELECTED_ICON_GRAY.png


Tool:common\MMI_RES_DEFAULT\IMAG\Title\Common

//title
Tool:common\MMI_RES_DEFAULT\IMAG\Common


pic:IMAGE_TITLE_BAR,\common\MMI_RES_DEFAULT\IMAG\Title\Common\IMAGE_TITLE_BAR.png
pic:IMAGE_TITLE_BAR2,\common\MMI_RES_DEFAULT\IMAG\Title\IMAGE_TITLE_BAR2.png




//查看图标是否存在
build\UIS8910_ROM_16MB_DS_USER_builddir^YT\tmp\mmi_res_240x320_imag.txt IMAGE_PUBWIN_QUERY

build\UIS8910_ROM_16MB_DS_USER_builddir YT\tmp\mmi_res_240x320_imag.txt IMAGE_COMMON_BG
//build\UIS8910_ROM_16MB_DS_USER_builddir YT\tmp\mmi_res_240x320_imag.txt IMAGE_MAINMENU_BG
build\UIS8910_ROM_16MB_DS_USER_builddir YT\tmp\mmi_res_240x320_imag.txt IMAGE_IDLE_TITLE_ICON_CLOCK
build\UIS8910_ROM_16MB_DS_USER_builddir YT\tmp\mmi_res_240x320_imag.txt IMAGE_FM_ADJ_BG
	
build\UIS8910_ROM_16MB_DS_USER_builddir YT\tmp\mmi_res_240x320_imag.txt IMAGE_IDLE_TITLE_ICON_SILENT
build\UIS8910_ROM_16MB_DS_USER_builddir YT\tmp\mmi_res_240x320_imag.txt IMAGE_IDLE_TITLE_ICON
	
build\UIS8910_ROM_16MB_DS_USER_builddir YT\tmp\mmi_res_240x320_imag.txt IMAGE_FM_AJUST_PLAY

build\UIS8910_ROM_16MB_DS_USER_builddir YT\tmp\mmi_res_240x320_imag.txt ALARM_WEEK


//删除默认多余动画
IMAGE_RECORD_BG_ANIM_FRAME_1
MS_MMI\source\resource\mmi_res_128x160\record\MMI_RES_DEFAULT\IMAG
MS_MMI\source\resource\mmi_res_128x160\record\MMI_RES_DEFAULT\ANIM\ANIM_RECORD_PLAY



/***********************************************************************/
[1.2] TextNote
build\UIS8910_ROM_16MB_DS_USER_builddir YT\tmp\mmi_res_128x160_text.txt _ALL
build\UIS8910_ROM_16MB_DS_USER_builddir YT\tmp\mmi_res_128x160_text.txt exists
build\UIS8910_ROM_16MB_DS_USER_builddir YT\tmp\mmi_res_128x160_text.txt _EMPTY
build\UIS8910_ROM_16MB_DS_USER_builddir YT\tmp\mmi_res_128x160_text.txt Delete
build\UIS8910_ROM_16MB_DS_USER_builddir YT\tmp\mmi_res_128x160_text.txt Search
//字符整理:
// 公式:
// =IF(ISNUMBER(MATCH(C1,A$1:A$14254,)),INDEX(B$1:B$14254,MATCH(C1,A$1:A$14254,)),"")
Save:node\C\study\Show_Str_eng.h ,^Select^all,
Save:node\C\study\Show_Str_eng.h ,^Settings,
Save:node\C\study\Show_Str_eng.h ,^Once, //TXT_ALARM_MODE_ONCE
Save:node\C\study\Show_Str_eng.h ,^Daily,//TXT_ALARM_MODE_EVERYDAY
Save:node\C\study\Show_Str_eng.h ,^Weekly, //TXT_CALENDAR_WEEKLY
	
Save:node\C\study\Show_Str_eng.h ,^Close^spea
Save:node\C\study\Show_Str_eng.h ,^PAUSE,
Save:node\C\study\Show_Str_eng.h ,^Reminder,
Save:node\C\study\Show_Str_eng.h ,^Frequency,
Save:node\C\study\Show_Str_eng.h ,^Reminder^time,
Save:node\C\study\Show_Str_eng.h ,^Repeat,
Save:node\C\study\Show_Str_eng.h ,^Cancel,
Save:node\C\study\Show_Str_eng.h ,^Stop,
Save:node\C\study\Show_Str_eng.h ,^Back,
Save:node\C\study\Show_Str_eng.h ,^Save,
Save:node\C\study\Show_Str_eng.h ,^Change,
Save:node\C\study\Show_Str_eng.h ,^Option,
Save:node\C\study\Show_Str_eng.h ,^This^channel,
Save:node\C\study\Show_Str_eng.h ,^Insert^memory,
Save:node\C\study\Show_Str_eng.h ,^Empty,
//softkey:
STXT_CANCEL, STXT_STOP, STXT_RETURN, STXT_SAVE, STXT_OPTION, STXT_SELECT, TXT_DELETE, TXT_EDIT
STXT_OK, TXT_COMMON_CLEAR, 
//str,新加图标:
project\H9_KLS_F4\resource\common_mdu_def.h SBD_H9_KLS_FM

//clander
Save:node\C\study\Show_Str_eng.h ,^View, TXT_VIEW
//Save:node\C\study\Show_Str_eng.h ,^Go^to, TXT_CALENDAR_TO_DATE
Save:node\C\study\Show_Str_eng.h ,^Monday, TXT_MONDAY
Save:node\C\study\Show_Str_eng.h ,^Sunday, TXT_SUNDAY
Save:node\C\study\Show_Str_eng.h ,^Save, STXT_SAVE
Save:node\C\study\Show_Str_eng.h ,^Today, TXT_TODAY
Save:node\C\study\Show_Str_eng.h ,^Date, TXT_DATE
Save:node\C\study\Show_Str_eng.h ,^Go^to, TXT_CALENDAR_TO_DATE
	

//alarm
Save:node\C\study\Show_Str_eng.h ,^Melody, TXT_ENG_UIMELODY_TITLE
Save:node\C\study\Show_Str_eng.h ,^multiple,
Save:node\C\study\Show_Str_eng.h ,^Alert^tone,
Save:node\C\study\Show_Str_eng.h ,^Change,
//profiles
Save:node\C\study\Show_Str_eng.h ,^Meeting, TXT_ENVSET_MEETING
Save:node\C\study\Show_Str_eng.h ,^volume, TXT_ENVSET_MEETING
Save:node\C\study\Show_Str_eng.h ,^Confirm, 
Save:node\C\study\Show_Str_eng.h ,^Snooze, 
Save:node\C\study\Show_Str_eng.h ,^Alarm, 
//memo
Save:node\C\study\Show_Str_eng.h ,^Delete^all, 
Save:node\C\study\Show_Str_eng.h ,^date, 
	


/***********************************************************************/
[1.3] BugNote

//样机BUG--未播放可以--REC;
//低电量问题


// file: Music/FM Radio clips/Radio___J-001.wav





#if 1//def WIN32
{
MMI_STRING_T  confirmStr = {0};
//			confirmStr.wstr_ptr = new_file_name;
//			confirmStr.wstr_len = MMIAPICOM_Wstrlen(new_file_name);
confirmStr.wstr_ptr = buffer_ptr;
confirmStr.wstr_len = MMIAPICOM_Wstrlen(buffer_ptr);
 MMIPUB_OpenAlertWinByTextPtr(PNULL, &confirmStr, PNULL, PNULL, PNULL, PNULL,MMIPUB_SOFTKEY_ONE, PNULL);
}
#endif



/***********************************************************************/
[1.4] GuiNote


GUIANIM_SetCtrlRect(MMIFM_FREQUENCY_BAR_CTRL_ID, &anim_rect);




//Calendar主题字体颜色:
// 1.数字白蓝红+框白+BG绿绿+角蓝,
// 2.数字黑蓝红+框黄+BG浅浅+角蓝,
// 3.数字白蓝红+框白+BG绿绿+角蓝,

//alarm主题字体颜色:
// 1.数字白蓝红+框白+BG绿绿+角蓝,
// 2.数字黑蓝红+框黄+BG浅浅+角蓝,
// 3.数字白蓝红+框白+BG绿绿+角蓝,

//childwin:
// title:   bg蓝+font白, bg浅黄+font黑, bg浅蓝+font白, 
// setlist: bg白+icon黑, bg黄  +icon白, bg白  +icon黑, 
// softkey: 黑

//FM主题字体颜色:
// 1.选中bg蓝+font白,form-bg白+font黑, vol蓝+rec/name白+sch白+chl黑    ,
// 2.选中bg黄+font白,form-bg黄+font白, vol白+rec/name黄+sch黑+chl白,
// 3.选中bg深+font白,form-bg白+font黑, vol深+rec/name白+sch白+chl黑,
//         ---->MMI_THEME_POPMENU_BG    蓝白深
//         ---->MMI_THEME_FORM_BG       白黄白
//         ---->MMI_THEME_LABEL_FONT    白黑白
//         ---->~MMI_THEME_LABEL_FONT   黑白黑
//         ---->MMI_THEME_CUSTOM_BG  ~  
//    MMITHEME_GetCurThemeFontColor(MMI_THEME_CUSTOM_BG)
//黄色:  #99740e
#ifdef SBD_THEME_COLOR_H9_KLS
	MMI_THEME_CUSTOM_BG,
#endif

//rect: bar_bg{0,31,128,44, H=14} week{0,34,128,41, H=8}
//      title_btn {4,17,8,41, H=9} {123,17,127,41, H=9}
//      day_W = 18*7+2 = 126+2  day_H=6*(8+2+3)+3*5+1+1=95
//      day_all_bg{1,45,127,140, H=14}
//	  day_item_r0 {1,48,127,60}, H=13, day_item_r1 {1,64,127,76}, H=13, space=3

//search icon:(6,101,121,   )str:(6,127,121,144,h=10,top=8)bg:(0,115,127,144,h=30)
//search icon:(6,126,121,131)str:(6,102,121,111,h=10,top=8)bg:(0, 94,127,143,h=50)
//search...  TXT_COMMON_SEARCHING


//alarm
list:13+16+38+38+38+16=159, 
	font->cur ->[29 67 106 140]
	font->样机->[29 67 107 144] ,font=16+16+3
	font->12->  [29 68 107 134]
	font->9 ->  [29 65 101 134]
list-ctrl:
	label:16+1=17,  setlist:18,    sum=17+18+3=38    58
	label:16+2=18,  edit: 17+2=19, sum=18+19+3=40
	label:16+1=17,  setlist:18,    sum=17+18+1=37
	
	label:16+1=17,  btn:19,        sum=17+19+1=37
	label:16+1=17,  type:19,       sum=17+19+1=37  (无week38)
	label:16+2=18,  tone:17,       sum=18+17+3=38 20+18
	
	label:16+1=17,  vol:19,        sum=17+19+1=37   102->104
	label:16+2=18,  sno:19,        sum=18+19+1=38
	label:16+2=18,  pow:19,        sum=18+19+1=38  (无week38)
tone-item:13+1,17+1
week-item:(17*14)
	w=5+14*7+3*6=10+98+18+3+4=128,   cur:8,14,3, h
	h=3+10+4+17+2=36,
vol-item: (88*15)
	w=13+88+4+7+12+4=13+88+27=128
	h=3+10+7+15+2=37,

//mmi_pubwin
// h=title_17 + margin_4 + 17 + margin_13 + txt_10 + margin_4 + txt_10 + margin_4
//	alert_rect: image
//	title_rect: text
//	bg_rect


//env list:
//[0,1] <1,18> [19,21] <22,39>


rec:
//anim: (47,23,80,50),h=28;bottom space=1; 图片少2像素;
//		space--h8--(51,58)
//name: (0,59,128,71),h=13;chg.
//name: (0,57,128,72),h=16;只能用16号窄字;
//		space--h4--(72,75)
//rec:	(16,76,127,88),h=13;chg.
//rec:	(16,74,127,89),h=16;只能用16号窄字;
//icon: (5,78,12,75),h=8;
//		space--h20--(89,108)
//scrl: (0,109,128,112),h=4;
//		space--h1--(113,113)
//ptm:	(1,114,63,127),h=13;chg.
//ptm:	(64,114,127,127),h=13;chg.
//ptm:	(1,114,63,130),h=16;只能用16号窄字;
//ptm:	(64,114,127,130),h=16;只能用16号窄字;

old:
//anim: (45 39 81 62) record_record_bg_x
//bg1:	(0 20 128 99) record_num_bg_x
//bg2:	(0 25 128 93) 
//time: (33 105 98 114) record_time_x
//scrbg:(3 118 128 138) play_bg_x
//scrl: (3 120 128 124) progress_bg_x
//ptm:	(2 132 128 140) play_time_label_x


	
/***********************************************************************/
[1.5] RingNote
	
//查看图标是否存在
build\UIS8910_ROM_16MB_DS_USER_builddir YT\tmp\mmi_res_128x160_ring.txt R_ALARM_1

build\UIS8910_ROM_16MB_DS_USER_builddir YT\tmp\mmi_res_128x160_ring.txt R_CALL_1
build\UIS8910_ROM_16MB_DS_USER_builddir YT\tmp\mmi_res_128x160_ring.txt R_SMS_1
build\UIS8910_ROM_16MB_DS_USER_builddir YT\tmp\mmi_res_128x160_ring.txt R_POWER_1
build\UIS8910_ROM_16MB_DS_USER_builddir YT\tmp\mmi_res_128x160_ring.txt R_KEY_LOUND_2
build\UIS8910_ROM_16MB_DS_USER_builddir YT\tmp\mmi_res_128x160_ring.txt R_KEY_2
build\UIS8910_ROM_16MB_DS_USER_builddir YT\tmp\mmi_res_128x160_ring.txt R_TP_KEYLOCK
build\UIS8910_ROM_16MB_DS_USER_builddir YT\tmp\mmi_res_128x160_ring.txt R_DL_1
	
	


/***********************************************************************/
[2.1] MsgIdNote

Save:node\C\study\Show_Msg_ID.h MSG_APP_1
Save:node\C\study\Show_Msg_ID.h MSG_APP_OK
Save:node\C\study\Show_Msg_ID.h MSG_KEYDOWN_1

//Save:node\C\study\Show_Msg_ID.h MsgId=61505,
//Save:node\C\study\Show_Msg_ID.h MsgId=61479,
Save:node\C\study\Show_Msg_ID.h MsgId=61475,
//Save:node\C\study\Show_Msg_ID.h MsgId=61480,
//Save:node\C\study\Show_Msg_ID.h MsgId=61470,
//Save:node\C\study\Show_Msg_ID.h MsgId=61480,
//Save:node\C\study\Show_Msg_ID.h MsgId=61482,
Save:node\C\study\Show_Msg_ID.h MsgId=65027,
Save:node\C\study\Show_Msg_ID.h MsgId=64003,
Save:node\C\study\Show_Msg_ID.h MsgId=64256,
Save:node\C\study\Show_Msg_ID.h MsgId=64017,MSG_KEYDOWN_STAR
Save:node\C\study\Show_Msg_ID.h MsgId=65041,MSG_KEYREPEAT_STAR
Save:node\C\study\Show_Msg_ID.h MsgId=64273,MSG_KEYUP_STAR
Save:node\C\study\Show_Msg_ID.h MSG_KEYLONG_STAR, 64529
//pub
Save:node\C\study\Show_Msg_ID.h MsgId=61479, KEY_AT
Save:node\C\study\Show_Msg_ID.h MsgId=61477,
Save:node\C\study\Show_Msg_ID.h MsgId=61480,
//left right
Save:node\C\study\Show_Msg_ID.h MsgId=64003,
Save:node\C\study\Show_Msg_ID.h MsgId=64257, MSG_KEYUP_UP
Save:node\C\study\Show_Msg_ID.h MsgId=64258, MSG_KEYUP_DOWN
Save:node\C\study\Show_Msg_ID.h MsgId=64259,
Save:node\C\study\Show_Msg_ID.h MsgId=57364,

	
Save:node\C\study\Show_Msg_ID.h MsgId=61474,
Save:node\C\study\Show_Msg_ID.h MsgId=61479,
Save:node\C\study\Show_Msg_ID.h MsgId=64283,
		
Save:node\C\study\Show_Msg_ID.h MsgId=65025,  MSG_KEYREPEAT_UP
Save:node\C\study\Show_Msg_ID.h MsgId=61475,
Save:node\C\study\Show_Msg_ID.h MsgId=64257,  MSG_KEYUP_UP






MSG_APP_1, MSG_KEYDOWN_1, MsgId=64008,


KEY_PLAYANDSTOP
MSG_KERNEL_START


/***********************************************************************/
[2.2] WinNote
MS_MMI/source/mmi_app/app/fm/h/mmifm_id.def  SBD_H9_KLS_FM
MS_MMI/source/mmi_app/app/fm/h/mmifm_id.h  SBD_H9_KLS_FM




//NvNote
MS_MMI/source/mmi_app/app/fm/c/mmifm_nv.c
MS_MMI/source/mmi_app/app/fm/h/mmifm_nv.h



//ResNote
MS_MMI/source/mmi_app/app/fm/h/mmifm_position.h  SBD_H9_KLS_FM
MS_MMI/source/mmi_app/app/fm/h/fm_mdu_def.h  SBD_H9_KLS_FM
MS_MMI/source/mmi_app/app/fm/h/mmifm_internal.h SBD_H9_KLS_FM



/***********************************************************************/
[3.1] ToolNote




GUIRES_DisplayImg
MS_MMI\source\mmi_app\common\c\mmicom_panel.c  MAINLCD_SIZE_68X96


MS_MMI\source\mmi_app\app\accessory\c\mmicalc_main.c 
MS_MMI\source\mmi_app\app\accessory\h\mmicalc_export.h 



MS_MMI\source\mmi_app\app\accessory\c\mmialarm.c 
MS_MMI\source\mmi_app\app\accessory\h\mmialarm_position.h 

MS_MMI\source\mmi_app\app\accessory\h\mmiacc_position.h 


MS_MMI\source\mmi_app\app\phone\c\mmiphone_charge.c 

//other tool:
Save:node\C\study\Macro_8910_Debug.h FmNote
Save:node\C\study\Macro_8910_Debug.h AlarmNote




/***********************************************************************/
[3.2] FmNote



//opt
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^^HandleFmChannelOptionMsg
//opt--action
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  void^HandleFMAction
	
// 所有set channel
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  MMIFM_SetCurrrentChannel



//set
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleCustomSettingWinMsg
//set edit
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleCustomEditBoxWinMsg
// file: Music/FM Radio clips/Radio___J-001.wav




//Display:
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  void^^DisplayMainWindow
//Record
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleFmRecordMsg
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleFMCustomRecordAction
//Record test
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleFMCustomRecordActionTest
	

	
//新功能:
//struct
//MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  case^MMIFM_CUSTOM_ONOFF
//MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  uint32^s_fm_custom_channel_play_opt_item
//channel list
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleCustomChannelListWinMsg
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  void^ReadCustomOpenChannelsListBox
//channel list sel
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleCustomChannelSelectListWinMsg
//channel opt
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleFmCustomChannelOptionMsg
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  void^CreateCustomChannelOptionMenu
//channel Action
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  void^HandleFMCustomAction
	

//旧功能:
//option
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleFmMainOptionMsg
//channel list
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleChannelListWinMsg
//Handle
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleFmMainMsg
//  Headset
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  MMIFM_HandleHeadsetButtonAction
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  void^MMIFM_HandleHeadsetAction



/***********************************************************************/
[3.3] AlarmNote
alarm



//alarm
MS_MMI\source\mmi_app\app\accessory\c\mmialarm.c WINDOW_TABLE(^ALARM_EDITWIN_TAB )
MS_MMI\source\mmi_app\app\accessory\c\mmialarm.c MMI_RESULT_E^^HandleAlarmEditWinMsg
MS_MMI\source\mmi_app\app\accessory\h\mmialarm_position.h
//新功能:
MS_MMI\source\mmi_app\app\accessory\c\mmialarm.c MMI_RESULT_E^HandleAutoPowerOnOffWinMsg


//BUG:
// 未录: 按键音 短信 开关机
// edit->time->am->mid key
// btn_ring 不滚动
// 闹钟ring 外放
// 状态条背景 同主题
// tone h-2;vol+2;up-2;
// 重新打开弹窗
// 按键音与来电铃声重叠
//	sel ring -》red.
// tone->option

MS_MMI\source\mmi_app\app\accessory\c\mmialarm.c 4788
OpenAlarmAliveWin
//过期事件
OpenPastSchEventWin



//test
OpenAlarmAliveWin
HandleEventAliveWinMsg

//alarm
MS_MMI\source\mmi_app\app\accessory\c\mmialarm.c WINDOW_TABLE(^ALARM_EDITWIN_TAB )
MS_MMI\source\mmi_app\app\accessory\c\mmialarm.c MMI_RESULT_E^^HandleAlarmEditWinMsg
MS_MMI\source\mmi_app\app\accessory\h\mmialarm_position.h


/***********************************************************************/
[3.4] CalendarNote
calendar

//未完成功能: 
//日期跳转(有个弹窗多选输入法), 日期范围提示, 1-9快捷键日期跳转, 输入法相关(添加符号风格, 切换后还原默认输入法), 几个控件问题

//main
MS_MMI\source\mmi_app\app\accessory\c\mmicalendar_main.c MMI_RESULT_E^HandleCalendarWinMsg
//opt
MS_MMI\source\mmi_app\app\accessory\c\mmicalendar_main.c MMI_RESULT_E^HandleCalendarOptionWinMsg
	MMK_CreateWin((uint32 *)CALENDAR_OPTION_WIN_TAB, (ADD_DATA)is_weekly);
//go to
MS_MMI\source\mmi_app\app\accessory\c\mmicalendar_main.c MMIAPICALEND_OpenCalendarQueryByDate
//list-opt
MMK_CreateWin((uint32 *)SCH_LIST_OPTION_WIN_TAB, (ADD_DATA)detail_win_param);

//draw:
//DrawMonthCalendar
	//DrawLunarDateOrWeek
	DrawFocusDates
		DrawMonthDate //画当天, 或一月30天
	DrawMonthTitle( calendar_ctrl_ptr );
		DrawTitleBtn
	DrawMonthDates( calendar_ctrl_ptr );
		DrawGrayMonthDate( calendar_ctrl_ptr ); //两边不画
	DrawWeeks
	DrawBackground
		DrawWeekBg

	GetDateRect
		DrawSchdule

MS_MMI\source\mmi_app\app\accessory\c\mmicalendar_main.c
MS_MMI\source\mmi_app\app\accessory\c\mmischedule.c  12769 ++  list
MS_MMI\source\mmi_app\app\accessory\c\mmischedule.c  12445 ++  edit


/***********************************************************************/
[3.5] EnvNote
Env

// Env 改不动的问题: 
//	 按键音录制的有杂音; 半透明;长按上键手电筒

//不严重问题:
//	 分卡 SBD_H9_KLS_PROFILE_SIM_NV
//	 RES_ADD_STRING(TXT_ALARM_PLAY_IN_SLIENT, "Play sound in Silent profile?")
//	   offline---功能待改 
//	 拨号音: 音量实际调不了; 
//			 beep菜单中, 按键音、beep声都没反应;
//			 拨号音按键音共用, 一关都关, 测试不了未改;


//其他待改+BUG:
// key_wav 最大5格;
// call ring.mp3 都大一倍
// vol play--上下键移动了背景;

//功能问题:
//	   s---没有key tone+拨号间--功能待改
//	   menu--beep--少2响 --------------------------	 #####	  ++++++
// 最后3项有waiting...
//	 检查各种key tone



// 实际来电铃声  ---------------- 	++++++
MMISRVMGR_Request

//type new
MS_MMI\source\mmi_app\app\envset\c\mmienvset.c 6220
MS_MMI\source\mmi_app\app\envset\c\mmienvset.c 6353


//ring--key--4-1-N 才能播放
MS_MMI\source\mmi_app\app\setting\c\mmiset_ring.c 1736 PlayRing
MS_MMI\source\mmi_app\app\setting\c\mmiset_ring.c 5377 MMIAPISET_PreviewRing
MS_MMI\source\mmi_app\app\setting\c\mmiset_ring.c 1391 PlayFixedRing
MS_MMI\source\mmi_app\app\envset\c\mmienvset_wintab.c 4102	Save
MS_MMI\source\mmi_app\app\envset\c\mmienvset_wintab.c 3993	换TYPE
//	MMIAPISET_SetCurRingType
MS_MMI\source\mmi_app\app\envset\c\mmienvset.c 6456   KEY_ID
MS_MMI\source\mmi_app\app\envset\c\mmienvset_wintab.c 6432	WIN_ID
//	ring id:
MS_MMI\source\mmi_app\app\envset\c\mmienvset.c 5084    GetRingID



//vib--one
MS_MMI\source\mmi_app\app\envset\c\mmienvset_wintab.c 1403	  --vib
MS_MMI\source\mmi_app\app\envset\c\mmienvset_wintab.c 3915	  --timer


//env main
MS_MMI\source\mmi_app\app\envset\c\mmienvset_wintab.c  1395
//vib list
MS_MMI\source\mmi_app\app\envset\c\mmienvset.c 6398
	


//play--type
MMIENVSET_PlayRingByListItem
//play--vib
MMIENVSET_PlayMsgAlarmRingByListItem
//play--tone
MMIAPISET_PlayCallRingByVol


//vol--alert
MS_MMI\source\mmi_app\app\setting\c\mmiset_wintab.c 822
MS_MMI\source\mmi_app\app\setting\c\mmiset_wintab.c 8886

//call type
//msg type
//keypad 
MS_MMI\source\mmi_app\app\envset\c\mmienvset_wintab.c 3695
MS_MMI\source\mmi_app\app\envset\c\mmienvset_wintab.c 3966 


//call ring1
MS_MMI\source\mmi_app\app\setting\c\mmiset_wintab.c 608
//call ring2 --ring
MS_MMI\source\mmi_app\app\setting\c\mmiset_wintab.c 924
MS_MMI\source\mmi_app\app\setting\c\mmiset_wintab.c 988 ++vol


//msg ring
MS_MMI\source\mmi_app\app\setting\c\mmiset_wintab.c 322
MS_MMI\source\mmi_app\app\setting\c\mmiset_wintab.c 812

//keypad 
MS_MMI\source\mmi_app\app\envset\c\mmienvset_wintab.c 4148
	

//vol
MS_MMI\source\mmi_app\app\envset\c\mmienvset_wintab.c 4909

MMK_CreateWin



// bak--不用
//env main
MS_MMI\source\mmi_app\app\envset\c\mmienvset_wintab.c MMIENVSET_MAIN_MENU_WIN_TAB
MS_MMI\source\mmi_app\app\envset\c\mmienvset_wintab.c 1910 handle


//opt
MS_MMI\source\mmi_app\app\envset\c\mmienvset_wintab.c 1400
MS_MMI\source\mmi_app\app\envset\c\mmienvset_wintab.c 1480


//	set edit
MS_MMI\source\mmi_app\app\envset\c\mmienvset_wintab.c 2862


//	nv
MS_MMI\source\mmi_app\app\envset\c\mmienvset.c 6730
// item
MS_MMI\source\mmi_app\app\envset\c\mmienvset.c 3300
// def nv
MS_MMI\source\mmi_app\app\envset\c\mmienvset.c 1680


project\H9_KLS_F4\resource\mmienvset_internal.h MMISET_CALL_RING
project\H9_KLS_F4\resource\mmienvset_internal.h MMISET_MSG_RING
project\H9_KLS_F4\resource\mmienvset_internal.h MMISET_OTHER_RING1

/***********************************************************************/
[3.6] RecNote
Rec



//time
MS_MMI\source\mmi_app\app\record\c\mmirecord_wintab.c IMAGE_RECORD_NUMBER_0  

// bg
MS_MMI\source\mmi_app\app\record\c\mmirecord_wintab.c IMAGE_RECORD_NUMBER_BG			  
MS_MMI\source\mmi_app\app\record\c\mmirecord_wintab.c IMAGE_COMMON_BG			
MS_MMI\source\mmi_app\app\record\c\mmirecord_wintab.c IMAGE_RECORD_RECORD_PDA_BG   
// bg-w
MS_MMI\source\mmi_app\app\record\c\mmirecord_wintab.c IMAGE_RECORD_RECORD_BG   
MS_MMI\source\mmi_app\app\record\c\mmirecord_wintab.c IMAGE_RECORD_PLAY_BK_BG  
// anim
MS_MMI\source\mmi_app\app\record\c\mmirecord_wintab.c IMAGE_RECORD_BG_ANIM_FRAME_1		  
MS_MMI\source\mmi_app\app\record\c\mmirecord_wintab.c IMAGE_RECORD_PLAY_BTN_UNSEL  


//draw
MS_MMI\source\mmi_app\app\record\c\mmirecord_wintab.c 2137 soft
//status
MS_MMI\source\mmi_app\app\record\c\mmirecord_wintab.c 954	web
MS_MMI\source\mmi_app\app\record\c\mmirecord_wintab.c 2994	canel + Alert
MS_MMI\source\mmi_app\app\record\c\mmirecord_wintab.c 4100	stop
//重新播放+
MS_MMI\source\mmi_app\app\record\c\mmirecord_wintab.c 4088	ok
//canel + query
//canel + close
MS_MMI\source\mmi_app\app\record\c\mmirecord_wintab.c 995
//red + query
MS_MMI\source\mmi_app\app\record\c\mmirecord_wintab.c 1032
//timeout 
MS_MMI\source\mmi_app\app\record\c\mmirecord_wintab.c 1067
MS_MMI\source\mmi_app\app\record\c\mmirecord_wintab.c 3567



//main
MS_MMI\source\mmi_app\app\record\c\mmirecord_wintab.c 867
//opt
MS_MMI\source\mmi_app\app\record\c\mmirecord_wintab.c 3622
//set
MS_MMI\source\mmi_app\app\record\c\mmirecord_wintab.c 6842
//file
MS_MMI\source\mmi_app\app\record\c\mmirecord.c 2084  ++ path

//save
MS_MMI\source\mmi_app\app\record\c\mmirecord.c 865










