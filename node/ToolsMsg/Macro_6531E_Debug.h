
//basePath = E:\desktop\H9_KLS_F4\mmi_res_128x160
basePath = F:\6531G_16A_MP_W17.43.4
toolPath = E:\desktop\H9_KLS_F4\mmi_res_128x160


// 6531E [Num][Ca]:
// 1. 
Save:SI\node\ToolsMsg\Macro_6531E_Debug.h \[1.1\] ImageNote
Save:SI\node\ToolsMsg\Macro_6531E_Debug.h \[1.2\] TextNote
Save:SI\node\ToolsMsg\Macro_6531E_Debug.h \[1.3\] BugNote
Save:SI\node\ToolsMsg\Macro_6531E_Debug.h \[1.4\] GuiNote
// 2. 
Save:SI\node\ToolsMsg\Macro_6531E_Debug.h \[2.1\] MsgIdNote
Save:SI\node\ToolsMsg\Macro_6531E_Debug.h \[2.2\] WinNote
// 3. 
Save:SI\node\ToolsMsg\Macro_6531E_Debug.h \[3.1\] ToolNote
Save:SI\node\ToolsMsg\Macro_6531E_Debug.h \[3.2\] FmNote
Save:SI\node\ToolsMsg\Macro_6531E_Debug.h \[3.3\] AlarmNote



/***********************************************************************/

[1.1] ImageNote

//查看图标是否存在
Save:SI\node\set\Show_Pic_dir.h IMAGE_PUBWIN_QUERY
Save:SI\node\set\Show_Pic_dir.h IMAGE_PUBWIN_SUCCESS  
Tool:common\MMI_RES_DEFAULT\IMAG\Pubwin\PDA



Save:SI\node\set\Show_Pic_dir.h IMAGE_CHECK_SELECTED_ICON        
Save:SI\node\set\Show_Pic_dir.h IMAGE_CHECK_UNSELECTED_ICON      
Save:SI\node\set\Show_Pic_dir.h IMAGE_CHECK_UNSELECTED_ICON_GRAY 
Save:SI\node\set\Show_Pic_dir.h IMAGE_CHECK_SELECTED_ICON 
Save:SI\node\set\Show_Pic_dir.h IMAGE_COMMON_SOFTKEY_OK_ICON 
Save:SI\node\set\Show_Pic_dir.h IMAGE_CONTROL_POPWIN_SUCCESS 
Save:SI\node\set\Show_Pic_dir.h IMAGE_FM_PAUSE_DEFAULT 
Save:SI\node\set\Show_Pic_dir.h IMAGE_NUMBER_9
Save:SI\node\set\Show_Pic_dir.h IMAGE_IDLE_TITLE_ICON_EARPHONE
Save:SI\node\set\Show_Pic_dir.h EARPHONE
Save:SI\node\set\Show_Pic_dir.h IMAGE_CONTROL_POPWIN_FAIL
Save:SI\node\set\Show_Pic_dir.h IMAGE_CLOCK_CALENDAR_DEFAULT
Save:SI\node\set\Show_Pic_dir.h IMAGE_CLOCK_ALARM_WEEK_DISABLED


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


Tool:common\MMI_RES_DEFAULT\IMAG\Title\






//查看图标是否存在
build\H9_KLS_F4_builddir\tmp\mmi_res_128x160_imag.txt IMAGE_PUBWIN_QUERY

build\H9_KLS_F4_builddir\tmp\mmi_res_128x160_imag.txt IMAGE_COMMON_BG
//build\H9_KLS_F4_builddir\tmp\mmi_res_128x160_imag.txt IMAGE_MAINMENU_BG
build\H9_KLS_F4_builddir\tmp\mmi_res_128x160_imag.txt IMAGE_IDLE_TITLE_ICON_CLOCK
build\H9_KLS_F4_builddir\tmp\mmi_res_128x160_imag.txt IMAGE_FM_ADJ_BG
	
build\H9_KLS_F4_builddir\tmp\mmi_res_128x160_imag.txt IMAGE_IDLE_TITLE_ICON_SILENT
build\H9_KLS_F4_builddir\tmp\mmi_res_128x160_imag.txt IMAGE_IDLE_TITLE_ICON
	
build\H9_KLS_F4_builddir\tmp\mmi_res_128x160_imag.txt IMAGE_FM_AJUST_PLAY

build\H9_KLS_F4_builddir\tmp\mmi_res_128x160_imag.txt ALARM_WEEK





/***********************************************************************/
[1.2] TextNote
build\H9_KLS_F4_builddir\tmp\mmi_res_128x160_text.txt _ALL
build\H9_KLS_F4_builddir\tmp\mmi_res_128x160_text.txt exists
build\H9_KLS_F4_builddir\tmp\mmi_res_128x160_text.txt _EMPTY
build\H9_KLS_F4_builddir\tmp\mmi_res_128x160_text.txt Delete
build\H9_KLS_F4_builddir\tmp\mmi_res_128x160_text.txt Search
//字符整理:
// 公式:
// =IF(ISNUMBER(MATCH(C1,A$1:A$14254,)),INDEX(B$1:B$14254,MATCH(C1,A$1:A$14254,)),"")
Save:SI\node\set\Show_Str_eng.h ,^Select^all,
Save:SI\node\set\Show_Str_eng.h ,^Settings,
Save:SI\node\set\Show_Str_eng.h ,^Once, //TXT_ALARM_MODE_ONCE
Save:SI\node\set\Show_Str_eng.h ,^Daily,//TXT_ALARM_MODE_EVERYDAY
Save:SI\node\set\Show_Str_eng.h ,^Weekly, //TXT_CALENDAR_WEEKLY
	
Save:SI\node\set\Show_Str_eng.h ,^Close^spea
Save:SI\node\set\Show_Str_eng.h ,^PAUSE,
Save:SI\node\set\Show_Str_eng.h ,^Reminder,
Save:SI\node\set\Show_Str_eng.h ,^Frequency,
Save:SI\node\set\Show_Str_eng.h ,^Reminder^time,
Save:SI\node\set\Show_Str_eng.h ,^Repeat,
Save:SI\node\set\Show_Str_eng.h ,^Cancel,
Save:SI\node\set\Show_Str_eng.h ,^Stop,
Save:SI\node\set\Show_Str_eng.h ,^Back,
Save:SI\node\set\Show_Str_eng.h ,^Save,
Save:SI\node\set\Show_Str_eng.h ,^Change,
Save:SI\node\set\Show_Str_eng.h ,^Option,
Save:SI\node\set\Show_Str_eng.h ,^This^channel,
Save:SI\node\set\Show_Str_eng.h ,^Insert^memory,
//softkey:
STXT_CANCEL, STXT_STOP, STXT_RETURN, STXT_SAVE
//str,新加图标:
project\H9_KLS_F4\resource\common_mdu_def.h SBD_H9_KLS_FM

//clander
Save:SI\node\set\Show_Str_eng.h ,^View, TXT_VIEW
//Save:SI\node\set\Show_Str_eng.h ,^Go^to, TXT_CALENDAR_TO_DATE
Save:SI\node\set\Show_Str_eng.h ,^Monday, TXT_MONDAY
Save:SI\node\set\Show_Str_eng.h ,^Sunday, TXT_SUNDAY
Save:SI\node\set\Show_Str_eng.h ,^Save, STXT_SAVE
Save:SI\node\set\Show_Str_eng.h ,^Today, TXT_TODAY
Save:SI\node\set\Show_Str_eng.h ,^Date, TXT_DATE
Save:SI\node\set\Show_Str_eng.h ,^Go^to, TXT_CALENDAR_TO_DATE
	

//alarm
Save:SI\node\set\Show_Str_eng.h ,^Melody, TXT_ENG_UIMELODY_TITLE
Save:SI\node\set\Show_Str_eng.h ,^multiple,
Save:SI\node\set\Show_Str_eng.h ,^Alert^tone,
//profiles
Save:SI\node\set\Show_Str_eng.h ,^Meeting, TXT_ENVSET_MEETING
Save:SI\node\set\Show_Str_eng.h ,^volume, TXT_ENVSET_MEETING


/***********************************************************************/
[1.3] BugNote

//样机BUG--未播放可以--REC;
//后台播放, 
//耳机播放,
//耳机未连接,  
//耳机中键播放, MMIFM_HandleHeadsetButtonAction
//低电量问题

//del back select

// FM增量0.1
// FM记录
// file: Music/FM Radio clips/Radio___J-001.wav



//主题有白边


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


//FM主题字体颜色:
// 1.选中bg蓝+font白,form-bg白+font黑, vol蓝+rec/name白+sch白+chl黑    ,
// 2.选中bg黄+font白,form-bg黄+font白, vol白+rec/name黄+sch黑+chl白,
// 3.选中bg深+font白,form-bg白+font黑, vol深+rec/name白+sch白+chl黑,
//         ---->MMI_THEME_POPMENU_BG    蓝
//         ---->MMI_THEME_FORM_BG       白
//         ---->MMI_THEME_LABEL_FONT    白
//         ---->MMI_THEME_LABEL_FONT ~  黑
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

/***********************************************************************/
[2.1] MsgIdNote

Save:SI\node\set\Show_Msg_ID.h MSG_APP_1
Save:SI\node\set\Show_Msg_ID.h MSG_APP_OK
Save:SI\node\set\Show_Msg_ID.h MSG_KEYDOWN_1

//Save:SI\node\set\Show_Msg_ID.h MsgId=61505,
//Save:SI\node\set\Show_Msg_ID.h MsgId=61479,
Save:SI\node\set\Show_Msg_ID.h MsgId=61475,
//Save:SI\node\set\Show_Msg_ID.h MsgId=61480,
//Save:SI\node\set\Show_Msg_ID.h MsgId=61470,
//Save:SI\node\set\Show_Msg_ID.h MsgId=61480,
//Save:SI\node\set\Show_Msg_ID.h MsgId=61482,
Save:SI\node\set\Show_Msg_ID.h MsgId=65027,
Save:SI\node\set\Show_Msg_ID.h MsgId=64003,
Save:SI\node\set\Show_Msg_ID.h MsgId=64256,
Save:SI\node\set\Show_Msg_ID.h MsgId=64017,MSG_KEYDOWN_STAR
Save:SI\node\set\Show_Msg_ID.h MsgId=65041,MSG_KEYREPEAT_STAR
Save:SI\node\set\Show_Msg_ID.h MsgId=64273,MSG_KEYUP_STAR
Save:SI\node\set\Show_Msg_ID.h MSG_KEYLONG_STAR, 64529




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
Save:SI\node\ToolsMsg\Macro_6531E_Debug.h FmNote
Save:SI\node\ToolsMsg\Macro_6531E_Debug.h AlarmNote




/***********************************************************************/
[3.2] FmNote


//

//本机功能测试:
//1.耳机:长按暂停 ok.
//     bug:短按.录音过程中不要耳机暂停.拔耳机保存录音.
//2.btn:play ok.
//     bug:left-right
//     bug:播放过程中, 只切换界面频道未换.  好像有按键音; 
//3.opt:
//     bug:每天好像会默认搜首次.
//4.opt-list:
//     bug:play不刷新. 
//6.rec:
//     bug:. status图标. 30min自动保存,
//7.other:
//     bug:第1次播放，进入搜索界面.音量大提示
//8.T卡功能:
//     bug:默认T卡--status图标;无T卡设置禁用; 开机后再插T卡,没有修改默认存储路径
//
//
//样机功能测试:
//1.status图标恢复出厂设置，也不能还原
//请插入T卡, 样机没有手机存储



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



