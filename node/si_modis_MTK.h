/***********************************************************************/
/***********************************************************************/
/***********************************************************************/

mmi_frm_nmgr_popup(MMI_SCENARIO_ID_BATTERY_MEDIUM, MMI_EVENT_INFO, (WCHAR *)GetString(STR_USB_CHARGER_CONNECTED));


SBD_SELECT_SIM_BY_VOL_KEY

SetKeyHandler(idle_extra_handle,KEY_EXTRA_1,KEY_EVENT_UP);	

KEY_1


KEY_1


PhoneBookList.c


wgui_cat1031_show


EntryMainMenuFromIdleScreen

SetKeyHandler
mmi_frm_group_enter


SBD_SELECT_SIM_BY_VOL_KEY

SetKeyHandler(idle_extra_handle,KEY_EXTRA_1,KEY_EVENT_UP);	
----------------------------------------
mmi_clog_get_id_by_idx



高亮：
mmi_clog_lt_item_hlt_hdlr


显示：
mmi_clog_lt_get_log_item


联系人 高亮：
srv_phb_get_number
mmi_phb_list_get_hint_ext
	
联系人 显示：
mmi_phb_contact_get_item_image


cui_dialer_classic_on_enter


保存pb-img：
mmi_clog_act_make_call
mmi_clog_act_create_phb_udata(&log);

更新pb-img：
srv_phb_get_image
srv_phb_oplib_get_contact_info

mmi_clog_act_create_phb_udata


srv_gcall_cntxt_set_ptr
	
	

/***********************************************************************/
/***********************************************************************/
/***********************************************************************/





MTK常用断点:

事件:
mmi_frm_post_event
mmi_frm_send_event  按键


字符方向：
gui_get_multi_line_text_language_type


str:
get_string

img:
GetImageData
gdi_image_get_dimension_id


gui:
gui_draw_filled_area


界面入口：
mmi_frm_scrn_enter
	node_exec_entry_proc

菜单切换：
MMI_menu_highlight_handler




转格式：
app_ucs2_wtoi


plutommi/CUI/SmsCui/SmsSenderCui.c SBD_SMS_SEND_4SIM_SELECT_FIX

cui_sms_recipient_opt_send_by_sim


-------------------------------------------- 
5. 断点
mmi_asc_to_ucs2  转换
mmi_asc_to_ucs2



SIM弹窗:
__MMI_POPUP_NO_SHOW_ICON__

ShowCategory165Screen_int
ShowCategory366Screen
ShowCategory66Screen
ShowCategory208Screen_int

---- STR_GLOBAL_PLEASE_WAIT		Please wait

-------------------------------------------- 






/***********************************************************************/
/***********************************************************************/
/***********************************************************************/
	画背景:
plutommi\Framework\GDI\GDISrc\gdi_primitive.c
void gdi_draw_solid_rect(S32 x1, S32 y1, S32 x2, S32 y2, gdi_color rect_color)
	if(y2>20 && y2<320 && y2 != 292)
	{
		int a = 1;
		a = 1;
	}



/***********************************************************************/
/***********************************************************************/
/***********************************************************************/

F:\11CW1352MP_BLEPHONE61D_11C_V33\plutommi\Framework\MTE\MTEInc\mte_data.h
F:\11CW1352MP_KM2\plutommi\Framework\MTE\MTEInc\mte_data.h

cp->
F:\11CW1352MP_KM2\tst\database_classb\pstrace_db\wap_trc_gen.h
F:\11CW1352MP_KM2\tst\database_classb\pstrace_db\wps_trc_gen.h

F:\11CW1352MP_KM2\vendor\wap\obigo_Q03C\adaptation\integration\include\wap_trc.h
F:\11CW1352MP_KM2\vendor\wap\obigo_Q03C\adaptation\integration\include\wap_trc_gen.h

F:\11CW1352MP_KM2\vendor\framework\obigo_Q03C\adaptation\integration\include\trc\wps_trc.h
F:\11CW1352MP_KM2\vendor\framework\obigo_Q03C\adaptation\integration\include\trc\wps_trc_gen.h

	
err->
f:\11CW1352MP_KM2\custom\system\FARSIGHTED61M_CN_11C_BB\custom_config.c sys_mem_size_modis.h
F:\11CW1352MP_KM2\custom\system\FARSIGHTED61M_CN_11C_BB\sys_mem_size_modis.h
cp F:\11CW1352MP_KM2\custom\system\FARSIGHTED61M_CN_11C_BB\sys_mem_size.h F:\11CW1352MP_KM2\custom\system\FARSIGHTED61M_CN_11C_BB\sys_mem_size_modis.h



