
//basePath = E:\desktop\H9_KLS_F4\mmi_res_128x160
basePath = F:\6531G_16A_MP_W17.43.4
toolPath = E:\desktop\H9_KLS_F4\mmi_res_128x160





/***********************************************************************/
/******************************** IMAGE  *******************************/
/***********************************************************************/

//ImageNote

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






//查看图标是否存在
build\H9_KLS_F4_builddir\tmp\mmi_res_128x160_imag.txt IMAGE_PUBWIN_QUERY

build\H9_KLS_F4_builddir\tmp\mmi_res_128x160_imag.txt IMAGE_COMMON_BG
//build\H9_KLS_F4_builddir\tmp\mmi_res_128x160_imag.txt IMAGE_MAINMENU_BG
build\H9_KLS_F4_builddir\tmp\mmi_res_128x160_imag.txt IMAGE_IDLE_TITLE_ICON_CLOCK
build\H9_KLS_F4_builddir\tmp\mmi_res_128x160_imag.txt IMAGE_FM_ADJ_BG
	
build\H9_KLS_F4_builddir\tmp\mmi_res_128x160_imag.txt IMAGE_IDLE_TITLE_ICON_SILENT
build\H9_KLS_F4_builddir\tmp\mmi_res_128x160_imag.txt IMAGE_IDLE_TITLE_ICON
	
build\H9_KLS_F4_builddir\tmp\mmi_res_128x160_imag.txt IMAGE_FM_AJUST_PLAY




/***********************************************************************/
//TextNote
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

STXT_CANCEL, STXT_STOP, STXT_RETURN, STXT_SAVE

//str,新加图标:
project\H9_KLS_F4\resource\common_mdu_def.h SBD_H9_KLS_FM



/***********************************************************************/
//BugNote

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





/***********************************************************************/
//GuiNote


GUIANIM_SetCtrlRect(MMIFM_FREQUENCY_BAR_CTRL_ID, &anim_rect);




//status-bar-rect:
//(3,-20--11,15)(6)(3,-1--13,15)->(5)

//freq-rect:
//(22,--1,-1)

//freq-rect-point:
//(22+52-11-10,--1,-1)=(10, 53, w=3, h=10), ==22+31,  +9,-9,

//btn-rect:
//(22+25+52,--1,-1), 22+25+52=99  +1=100


//主题字体颜色:
// 1.选中bg蓝+font白,form-bg白+font黑, vol蓝+rec/name白+sch白+chl黑    ,
// 2.选中bg黄+font白,form-bg黄+font白, vol白+rec/name黄+sch黑+chl白,
// 3.选中bg深+font白,form-bg白+font黑, vol深+rec/name白+sch白+chl黑,
//         ---->MMI_THEME_POPMENU_BG    蓝
//         ---->MMI_THEME_FORM_BG       白
//         ---->MMI_THEME_LABEL_FONT    白
//         ---->MMI_THEME_LABEL_FONT ~  黑
//         ---->MMI_THEME_CUSTOM_BG  ~  
//    MMITHEME_GetCurThemeFontColor(MMI_THEME_EDIT_FONT)
//黄色:  #99740e
#ifdef SBD_THEME_COLOR_H9_KLS
	MMI_THEME_CUSTOM_BG,
#endif


//search icon:(6,101,121,   )str:(6,127,121,144,h=10,top=8)bg:(0,115,127,144,h=30)
//search icon:(6,126,121,131)str:(6,102,121,111,h=10,top=8)bg:(0, 94,127,143,h=50)
//search...  TXT_COMMON_SEARCHING

/***********************************************************************/
//MsgIdNote

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



MSG_APP_1, MSG_KEYDOWN_1, MsgId=64008,


KEY_PLAYANDSTOP
MSG_KERNEL_START


/***********************************************************************/
//WinNote
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
//ToolNote




GUIRES_DisplayImg
MS_MMI\source\mmi_app\common\c\mmicom_panel.c  MAINLCD_SIZE_68X96


MS_MMI\source\mmi_app\app\accessory\c\mmicalc_main.c 
MS_MMI\source\mmi_app\app\accessory\h\mmicalc_export.h 



MS_MMI\source\mmi_app\app\accessory\c\mmialarm.c 
MS_MMI\source\mmi_app\app\accessory\h\mmialarm_position.h 

MS_MMI\source\mmi_app\app\accessory\h\mmiacc_position.h 


MS_MMI\source\mmi_app\app\phone\c\mmiphone_charge.c 






