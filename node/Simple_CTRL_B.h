
Save�ļ��б�
Save:SI\node\Macro_File.h

// ���õı༭�ļ�:
//	6531E
Save:SI\node\note\Macro_modis_6531E.h
Save:SI\node\note\Macro_Note_6531E.h
//	tmp
Save:SI\bak\Macro_tmp.h TmpNote
Save:SI\bak\Macro_code_tmp.h

//ģ������
vc: build\H9_KLS_F4_builddir\win\simulator.dsw
//Image��
Save:SI\node\ToolsMsg\Macro_6531E_Debug.h ImageNote
Save:SI\node\ToolsMsg\Macro_6531E_Debug.h TextNote
Save:SI\node\ToolsMsg\Macro_6531E_Debug.h MsgIdNote
Save:SI\node\ToolsMsg\Macro_6531E_Debug.h BugNote
Save:SI\node\ToolsMsg\Macro_6531E_Debug.h GuiNote
Save:SI\node\ToolsMsg\Macro_6531E_Debug.h ToolNote
Save:SI\node\ToolsMsg\Macro_6531E_Debug.h WinNote


/***********************************************************************/
/********************************��ʱ�ļ�*******************************/
/***********************************************************************/
// ����set channel
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  MMIFM_SetCurrrentChannel
//msg:Saved.
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  13150


MMI_WIN_ID_T query_win_id = FM_QUERY_WIN_ID; 
SetCurrentOperator(MMIFM_DELETE_ALL_CHANNEL);
MMIPUB_OpenQueryWinByTextId(TXT_FM_DELETE_ALL_CHA_QUERY, IMAGE_PUBWIN_QUERY, &query_win_id, HandleQuerywin);;


// ������Ҫ

//�������ܲ���:
//1.����:������ͣ ok.
//     bug:�̰�.¼�������в�Ҫ������ͣ.�ζ�������¼��.
//2.btn:play ok.
//     bug:left-right
//     bug:���Ź�����, ֻ�л�����Ƶ��δ��.
//3.opt:
//     bug:ÿ������Ĭ�����״�.
//4.opt-list:
//     bug:play��ˢ��.  ---ѡ���б��λ
//6.rec:
//     bug:�˳���ʾ¼������. statusͼ��. 30min�Զ�����,
//     bug:¼��ʱ����ˢ��̫��
//7.other:
//     bug:��1�β��ţ�������������.��������ʾ
//     bug:Ĭ��T��--statusͼ��;��T�����ý���.
//
//
//�������ܲ���:
//1.statusͼ��ָ��������ã�Ҳ���ܻ�ԭ






//opt
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^^HandleFmChannelOptionMsg
//opt--action
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  void^HandleFMAction
	








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
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  case^MSG_APP_9
	

	
//�¹���:
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
	

//�ɹ���:
//option
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleFmMainOptionMsg
//channel list
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleChannelListWinMsg
//Handle
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleFmMainMsg
//  Headset
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  MMIFM_HandleHeadsetButtonAction
MS_MMI\source\mmi_app\app\fm\c\mmifm_wintab.c  void^MMIFM_HandleHeadsetAction







//alarm
MS_MMI\source\mmi_app\app\accessory\c\mmialarm.c WINDOW_TABLE(^ALARM_EDITWIN_TAB )
MS_MMI\source\mmi_app\app\accessory\c\mmialarm.c MMI_RESULT_E^^HandleAlarmEditWinMsg
MS_MMI\source\mmi_app\app\accessory\h\mmialarm_position.h
//�¹���:
MS_MMI\source\mmi_app\app\accessory\c\mmialarm.c MMI_RESULT_E^HandleAutoPowerOnOffWinMsg









