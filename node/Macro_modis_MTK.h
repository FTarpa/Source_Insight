/***********************************************************************/
/******************************** Mtk modis ****************************/
/***********************************************************************/
// ����, �������:
[Num]
// Ŀ¼:[Ca]
//   1. ���ܵ�
Save:SI\node\Macro_modis_MTK.h   \[1.1\] ���Ű���
Save:SI\node\Macro_modis_MTK.h   \[1.2\] gid
Save:SI\node\Macro_modis_MTK.h   \[1.3\] GetString()
Save:SI\node\Macro_modis_MTK.h   \[1.4\] SetKeyHandler(, , )
Save:SI\node\Macro_modis_MTK.h   \[1.5\] bg color
Save:SI\node\Macro_modis_MTK.h   \[1.6\] image
Save:SI\node\Macro_modis_MTK.h   \[1.7\] win id
Save:SI\node\Macro_modis_MTK.h   \[1.8\] win func
Save:SI\node\Macro_modis_MTK.h   \[1.9\] NV
//Save:SI\node\Macro_modis_MTK.h   \[1.10\]
//	 2. ����
Save:SI\node\Macro_modis_MTK.h   \[2.1\] ��ϵ��
Save:SI\node\Macro_modis_MTK.h   \[2.2\] ����
Save:SI\node\Macro_modis_MTK.h   \[2.3\] ���˵�
Save:SI\node\Macro_modis_MTK.h   \[2.4\] ����
Save:SI\node\Macro_modis_MTK.h   \[2.5\] �˵�
Save:SI\node\Macro_modis_MTK.h   \[2.6\] 
//Save:SI\node\Macro_modis_MTK.h   \[2.7\]
//	 3. MTK���öϵ�
Save:SI\node\Macro_modis_MTK.h   \[3.1\] �¼�
Save:SI\node\Macro_modis_MTK.h   \[3.2\] �ַ�����
Save:SI\node\Macro_modis_MTK.h   \[3.3\] ת��ʽ
Save:SI\node\Macro_modis_MTK.h   \[3.4\] gui draw
//Save:SI\node\Macro_modis_MTK.h   \[3.5\] 
//	 4. ģ��
Save:SI\node\Macro_modis_MTK.h	 \[4.1\] SIM����
Save:SI\node\Macro_modis_MTK.h	 \[4.2\] Browser
//	 5. MTK���öϵ�
Save:SI\node\Macro_modis_MTK.h	 \[5.1\] �ռ�����
Save:SI\node\Macro_modis_MTK.h	 \[5.2\] ��������
//	 6. ģ����
Save:SI\node\Macro_modis_MTK.h	 \[6.1\] KMģ�����಻��
Save:SI\node\Macro_modis_MTK.h	 \[6.2\] ģ������NV



/***********************************************************************/
/******************************** Mtk modis ****************************/
/***********************************************************************/
// ���ܵ�:[Cs]


[1.1] ���Ű���:
ExecuteCurrKeyHandler
plutommi\Framework\GUI\GUI_SRC\wgui.c void^MMI_key_input_handler
plutommi\Framework\GUI\GUI_SRC\wgui_inputs_dialer.c void^wgui_inputs_dialer_handle_key_down





[1.2] gid
mmi_frm_group_enter
MMI_ID mmi_popup_display_ext( 
	MMI_STR_ID title, 
	mmi_event_notify_enum event_type, 
	mmi_popup_property_struct *arg)
	
[1.3] GetString()
// GetString(STR_USB_CHARGER_CONNECTED)
// get_string
// STR_GLOBAL_OFF
// STR_GLOBAL_ON

// STR_GLOBAL_PLEASE_WAIT



[1.4] SetKeyHandler(, , );
// SetKeyHandler(, KEY_1, KEY_EVENT_UP);
plutommi\Framework\EventHandling\EventsSrc\KeyBrd.c
//void SetKeyHandler(FuncPtr funcPtr, U16 keyCode, U16 keyType)
//{
//	{
//		if(KEY_RSK == keyCode)
//		{
//			int a = 2;
//		}
//	}
//}


[1.5] bg color
plutommi\Framework\GDI\GDISrc\gdi_primitive.c void^gdi_draw_solid_rect( )
//	if(y2>20 && y2<320 && y2 != 292)
//	{
//		int a = 1;
//		a = 1;
//	}

[1.6] image
plutommi\mmi\Resource\readres.c S8^*GetImage( )
//	int a =1 ;
//
//	if(ImageId ==IMG_ID_PHNSET_WP_START-10)
//	{
//		a = 1;
//	}
GetImageData
gdi_image_get_dimension_id


[1.7] win id
// GetActiveScreenId() = IDLE_SCREEN_ID
// ��:
//	mmi_rp_*_def.h
//	27[8-9][0-9][0-9]

[1.8] win func
ShowCategory53Screen(): �б�


[1.9] NV
NVRAM_BRW_SETTINGS_HOMEPAGE


/***********************************************************************/
/***********************************************************************/
/***********************************************************************/


[2.1] ����ģ��: ��ϵ�� ������
mmi_clog_lt_item_hlt_hdlr


��ʾ��
mmi_clog_lt_get_log_item


��ϵ�� ������
srv_phb_get_number
mmi_phb_list_get_hint_ext
	
��ϵ�� ��ʾ��
mmi_phb_contact_get_item_image


����pb-img��
mmi_clog_act_make_call
mmi_clog_act_create_phb_udata(&log);

����pb-img��
srv_phb_get_image
srv_phb_oplib_get_contact_info

mmi_clog_act_create_phb_udata
srv_gcall_cntxt_set_ptr
	
[2.2] ����:
cui_dialer_classic_on_enter


[2.3] ���˵����:
EntryMainMenuFromIdleScreen

[2.4] ������ڣ�
mmi_frm_scrn_enter
node_exec_entry_proc

wgui_cat1031_show

[2.5] �˵���ڣ�
�˵��л���
MMI_menu_highlight_handler
cui_menu_set_item_hidden

[2.6] 



-------------------------------------------- 

// MTK���öϵ�:

[3.1] �¼�:
mmi_frm_post_event
mmi_frm_send_event  ����


[3.2] �ַ�����
gui_get_multi_line_text_language_type



[3.3] ת��ʽ��
app_ucs2_wtoi
	
mmi_asc_to_ucs2  ת��
mmi_asc_to_ucs2
mmi_ucs2ncpy

[3.2] gui draw��
gui_draw_filled_area


-------------------------------------------- 

[4.1] SIM����:
__MMI_POPUP_NO_SHOW_ICON__

ShowCategory165Screen_int
ShowCategory366Screen
ShowCategory66Screen
ShowCategory208Screen_int

[4.2] Browser
//show acc:
plutommi\CUI\DataAccountCui\DataAccountCui.c cui_dtcnt_show_acct_list_scrn
//sim list:
plutommi\CUI\DataAccountCui\DataAccountCui.c cui_dtcnt_sim_list_scrn_proc
//set sim
plutommi\Service\DtcntSrv\DtcntSrvApi.c srv_dtcnt_set_sim_preference
//set nv
plutommi\Service\DtcntSrv\DtcntSrvDb.c srv_dtcnt_db_fileio_write_store_info_file
//default_acc_idx
plutommi\Service\DtcntSrv\DtcntSrvDb.c srv_dtcnt_db_store_info_file_open
//wap menu
plutommi\mmi\BrowserApp\Browser\BrowserSrc\BrowserAppMain.c mmi_brw_app_get_menu_cui_proc_func
//open page
plutommi\mmi\BrowserApp\Browser\BrowserSrc\BrowserAppDmgr.c mmi_brw_app_dmgr_open_homepage

//net sim (step 1: pre boot)
plutommi\mmi\DataAccount\DataAccountSrc\DataAccountApp.c mmi_dtcnt_get_defined_prof(void)
//net sim (step 2: pre boot)
plutommi\Service\BrowserSrv\BrowserSrvMsgHdlr.c void^srv_brw_bam_ready_ind(void *msg)
//net sim (step 3: switch)
plutommi\Service\BrowserSrv\BrowserSrvinterface.c srv_brw_convert_dtcnt_sim_id_to_sim_setting
//net sim (step 4: switch) (set,save)
plutommi\Service\BrowserSrv\BrowserSrvinterface.c srv_brw_convert_sim_setting_to_profile_sim_id
//net sim (step 5: enter net menu)
plutommi\mmi\BrowserApp\Browser\BrowserSrc\BrowserAppInterface.c mmi_brw_app_common_gateway

//other set--setSIM
mmi_dtcnt_pre_entry_main
mmi_dtcnt_cui_event_proc
mmi_dtcnt_main_scrn_proc
srv_dtcnt_get_default_account
//other net--setSIM
cui_dtcnt_show_acct_list_scrn
cui_dtcnt_prepare_list_info
//other net--sel
cui_dtcnt_get_first_entry_highlight_item



-------------------------------------------- 

[5.1] �ռ�����:
//@wanc ���׹ر�MRE
//#if !defined(__KM_DELETE_MRE__)
//    MMI_BOOTUP_INIT_REG(srv_mre_appmgr_bootup_hdlr)
//#endif	

[5.2] ��������:
mk:
custom\system\BLEPHONE61D_11C_BB\scat_config\FeatureBased\ObjListGen\object.list.backup CUSTOM_OPTION




/***********************************************************************/
/***********************************************************************/
/***********************************************************************/
[6.1] KMģ�����಻��, ȱ�ļ�[Cg]
// F:\6261D_11C_V33\plutommi\Framework\MTE\MTEInc\mte_data.h
// F:\6261D_KM\plutommi\Framework\MTE\MTEInc\mte_data.h
cp->
cp F:\6261D_11C_V33\plutommi\Framework\MTE\MTEInc\mte_data.h F:\6261D_KM\plutommi\Framework\MTE\MTEInc\mte_data.h


// copy��2���ļ�
// F:\6261D_KM\tst\database_classb\pstrace_db\wap_trc_gen.h
// F:\6261D_KM\tst\database_classb\pstrace_db\wps_trc_gen.h

// F:\6261D_KM\vendor\wap\obigo_Q03C\adaptation\integration\include\wap_trc.h
// F:\6261D_KM\vendor\wap\obigo_Q03C\adaptation\integration\include\wap_trc_gen.h
cp->
cp tst\database_classb\pstrace_db\wap_trc_gen.h vendor\wap\obigo_Q03C\adaptation\integration\include\wap_trc_gen.h

// F:\6261D_KM\vendor\framework\obigo_Q03C\adaptation\integration\include\trc\wps_trc.h
// F:\6261D_KM\vendor\framework\obigo_Q03C\adaptation\integration\include\trc\wps_trc_gen.h
cp->
cp tst\database_classb\pstrace_db\wps_trc_gen.h vendor\framework\obigo_Q03C\adaptation\integration\include\trc\wps_trc_gen.h

	
err->
// f:\6261D_KM\custom\system\FARSIGHTED61M_CN_11C_BB\custom_config.c sys_mem_size_modis.h
// F:\6261D_KM\custom\system\FARSIGHTED61M_CN_11C_BB\sys_mem_size_modis.h
cp custom\system\FARSIGHTED61M_CN_11C_BB\sys_mem_size.h custom\system\FARSIGHTED61M_CN_11C_BB\sys_mem_size_modis.h
// ��
cp F:\6261D_KM\custom\system\FARSIGHTED61M_CN_11C_BB\sys_mem_size.h F:\6261D_KM\custom\system\FARSIGHTED61M_CN_11C_BB\sys_mem_size_modis.h


[6.2] ģ������NV��, ���б���, ɾ���ļ�:
MoDIS_VC9\WIN32FS\DRIVE_C












