
����·������: 
//basePath = F:\9820e
//basePath = \\192.168.2.115\xiaoj\9820e\idh.code

/***********************************************************************/

//Ŀ¼[Num][Ca]:
Save:SI\node\9820e\Macro_9820e_App_Contacts.h \[1.1\] ·��
Save:SI\node\9820e\Macro_9820e_App_Contacts.h \[2.1\] //android��ο��ƻ��������룿


//mk�����Ӧ��:
Save:SI\node\9820e\Macro_9820e_mk.h  1.1 mk�����Ӧ��

//apk ģ�� -- cmd:
Save:SI\node\9820e\Macro_9820e_Sys_Build.h \[3.1\] apk ģ�� -- cmd


/***********************************************************************/
/******************************* code **********************************/
/***********************************************************************/

[1.1] ·��
·��: 
packages\apps\xxxx
packages\apps\xxxx

��Դ: Calculator
packages\apps\xxxx\AndroidManifest.xml
packages\apps\xxxx\res\layout\activity_main.xml




[2.1] //android��ο��ƻ��������룿
//�����130Ϊ����ֻ��Ҫȷ��PhoneNumberUtils.java�ļ�������������ȷ��Ӿ�ok��

frameworks\base\telephony\java\android\telephony\PhoneNumberUtils.java //isSimEmergencyNumber()
1.isSimEmergencyNumber()�����������޸� 
//	no ecclist system property, so use our own list. 
//		- return (number.equals(��112��) || number.equals(��911��)); 
//		+ return (number.equals(��112��) || number.equals(��911��)||number.equals(��130��)); 

//        emergencyNumbers = ((slotId < 0) ? "112,911,000,08,110,118,119,999" : "112,911");

2. ���� CUSTOM_EMERGENCY_NUMBER �����130

PS�� 
���ƻ���������Ŀǰ��ͨ��ap�·� ATDaddress@1,# ��ɵģ�Ŀǰ�ⲿ���߼��������Ѿ�ʵ�֣��������£�

���ȣ�GsmCallTracker.java�е��ж��ǿ��ƻ���������ʱ������address����ϡ�/1���� 
//	frameworks\opt\telephony\src\java\com\android\internal\telephony\gsm\GsmCallTracker.java isEmergencyNumber(dialString)
//	if (PhoneNumberUtils.isCustomEmergencyNumber(mPendingMO.mAddress)) { 
//		Rlog.d(LOG_TAG,��Pending MO is Custom Emergency call��); 
//		tmpAddr = tmpAddr + ��/1��; 
//	}

//Sprd: Add for Emergency call bug843871
//	if (PhoneNumberUtils.isEmergencyNumber(dialString)) {
//		if (mBackgroundCall != null && mBackgroundCall.getState() != Call.State.IDLE) {
//			mBackgroundCall.hangup();
//		}
//
//		if (mForegroundCall != null && mForegroundCall.getState() != Call.State.IDLE) {
//			mForegroundCall.hangup();
//		}
//	}

��Σ�ril��Ҳ��Խ������Ž��д�����address�еġ�/���滻Ϊ��@��,�����·� ATDaddress@1,#��modem��ril�еĲ���ʵ�ִ������£� 
//	category = strchr(p_dial->address, ��/��); 
//	if(category) 
//	*category = ��@��;
//
//	ret = asprintf(&cmd, "ATD%s,#%s;", p_dial->address, clir);




/***********************************************************************/
/*************************** �ο��ʼǡ������ҵģ�����. *****************/
/***********************************************************************/








