/***********************************************************************/
/***************************  ��ʱ�ļ�      ********************************/
/***********************************************************************/
::��ȡ�ַ�������--start--
set str=%fileHead%
for /l %%i in (1,1,10000) do if "!str:~%%i,1!"=="" echo %%i

set str=%fileHead%
for /l %%i in (1,1,10000) do if "!str:~%%i,1!"=="" set num=%%i
echo num = %num%>> file.txt

set str=%fileHead%
for /l %%i in (1,1,10000) do (
	if "!str:~%%i,1!"=="" 
	(
		set num=%%i
	)
)
echo num = %num%>> file.txt
::��ȡ�ַ�������--end--


__KM_END_KEY_TURN_OFF_BACKLIGHT__
3  ~  10+2


//__MMI_AUTO_KEYPAD_LOCK__
//__KM_AUTO_LOCKER_SETTING_IN_SEC_SET__
//4  ~  10

//��˽���ܿ�����keylock
__MMI_PRIVACY_PROTECTION_KEYLOCK__

CFG_FUNC_MMI_PRIVACY_PROTECTION_KEYLOCK



1.bug
privacy protection; back  ���� done, ����
	
2.bug
canel,ͼ�겻��


//@wanc ���׹ر�MRE
#if !defined(__KM_DELETE_MRE__)
    MMI_BOOTUP_INIT_REG(srv_mre_appmgr_bootup_hdlr)
#endif	


gpio_prod.c
��ʽ��U��---δ�ж�;

plutommi\mmi\SecuritySetting\SecSetRes\SecSet.res __MMI_PRIVACY_PROTECTION_KEYLOCK__ 
	
��չѶ-----

keypad privacy


__M103_KEMAN_V2408_VGOTEL__


cui_menu_set_item_hint(
	param->sender_id,
	MENU_ID_PRIVACY_PROTECTION_CHANGE_PASSWORD,
	NULL);

plutommi/Framework/GUI/GUI_SRC/gui_clock.c

