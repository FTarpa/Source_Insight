
����·������: 
//basePath = F:\9820e
//basePath = \\192.168.2.115\xiaoj\9820e\idh.code

/***********************************************************************/

//Ŀ¼[Num][Ca]:
// Settings
Save:node\android\app\Macro_App_Setting.h \[1.1\] AndroidManifest.xml
Save:node\android\app\Macro_App_Setting.h \[1.2\] Settings
Save:node\android\app\Macro_App_Setting.h \[1.3\] settings_headers.xml
Save:node\android\app\Macro_App_Setting.h \[1.4\] �Ƴ����õ���
Save:node\android\app\Macro_App_Setting.h \[1.5\] onHeaderClick
Save:node\android\app\Macro_App_Setting.h \[1.6\] DevelopmentSettings
// Settings
Save:node\android\app\Macro_App_Setting.h \[2.1\] DDR��512�ĳɼٵ�1G
Save:node\android\app\Macro_App_Setting.h \[2.2\] ��ιر��˺��Զ�ͬ����
Save:node\android\app\Macro_App_Setting.h \[2.3\] �鿴android�İ汾





[1.1] AndroidManifest.xml
packages\apps\Settings\AndroidManifest.xml name="Settings"
//	<intent-filter>
//		<action android:name="android.intent.action.MAIN" />
//		<category android:name="android.intent.category.DEFAULT" />
//		<category android:name="android.intent.category.LAUNCHER" />
//	</intent-filter>

[1.2] Settings
packages\apps\Settings\src\com\android\settings\Settings.java void^onCreate( )
frameworks\base\core\java\android\preference\PreferenceActivity.java void^onCreate( )
//	protected void onCreate(Bundle savedInstanceState) {
//		onBuildHeaders(mHeaders);
//		setListAdapter(new HeaderAdapter(this, mHeaders));
//	}

packages\apps\Settings\src\com\android\settings\Settings.java void^onBuildHeaders( )
//	public void onBuildHeaders(List<Header> headers) {
//		if (!onIsHidingHeaders()) {
//			/* SPRD: changed for tab style @{ */
//			if (UNIVERSEUI_SUPPORT && !PIKEL_UI_SUPPORT) {
//
//			} else {
//				loadHeadersFromResource(R.xml.settings_headers, headers);
//			}
//		}
//		updateHeaderList(headers);
//	}

[1.3] settings_headers.xml
packages\apps\Settings\res\xml\settings_headers.xml
//    <header
//        android:id="@+id/development_settings"
//        android:fragment="com.android.settings.DevelopmentSettings"
//        android:icon="@drawable/ic_settings_development_pikel"
//        android:title="@string/development_settings_title" />


[1.4] �Ƴ����õ���
packages\apps\Settings\src\com\android\settings\Settings.java void^updateHeaderList( )
//	if (!showDev) {
//		target.remove(i);
//	}


[1.5] onHeaderClick
frameworks\base\core\java\android\preference\PreferenceActivity.java void^onHeaderClick( )
//	public void onHeaderClick(Header header, int position) {
//		if (header.fragment != null) {
//			if (mSinglePane) {
//				startWithFragment(header.fragment, header.fragmentArguments, null, 0,
//						titleRes, shortTitleRes);
//			} else {
//				switchToHeader(header);
//			}
//		} else if (header.intent != null) {
//			startActivity(header.intent);
//		}
//	}

packages\apps\Settings\src\com\android\settings\Settings.java boolean^isValidFragment( )
//	protected boolean isValidFragment(String fragmentName) {
//		for (int i = 0; i < ENTRY_FRAGMENTS.length; i++) {
//			if (ENTRY_FRAGMENTS[i].equals(fragmentName)) return true;
//		}
//		return false;
//	}

packages\apps\Settings\src\com\android\settings\Settings.java String[]^ENTRY_FRAGMENTS
//	WirelessSettings.class.getName(),
//	WifiSettings.class.getName(),


[1.6] DevelopmentSettings
packages\apps\Settings\src\com\android\settings\DevelopmentSettings.java void^onCreate( )
//	public void onCreate(Bundle icicle) {
//	    addPreferencesFromResource(R.xml.development_prefs);
//	}

packages\apps\Settings\res\xml\development_prefs.xml




/***********************************************************************/
/****************************** δ���� *********************************/
/***********************************************************************/


[2.1] DDR��512�ĳɼٵ�1G
packages\apps\Settings\src\com\android\settings\applications\RunningProcessesView.java Formatter.formatShortFileSize
//	long freeMem = mLastAvailMemory + mLastBackgroundProcessMemory;
//	/***add by xiangxiang***/
//	Long mFree = freeMem +	7*1024*1024*1024+512*1024*1024;
//	/***end***/
//	/***modify by xiangxiang ***/
	//String sizeStr = Formatter.formatShortFileSize(getContext(), freeMem);
//	String sizeStr = Formatter.formatShortFileSize(getContext(), mFree);
//	/****end***/


[2.2] ��ιر��˺��Զ�ͬ����
1.�޸�frameworks/base/core/res/res/values/config.xml�е�
	config_syncstorageengine_masterSyncAutomatically��������Ĭ��ֵ��Ϊfalse��
 
2.�޸�frameworks/base/services/core/java/com/android/server/content/SyncStorageEngine.java��
 
-	  mMasterSyncAutomatically.put(0, listen == null || Boolean.parseBoolean(listen));
+	  //mMasterSyncAutomatically.put(0, listen == null || Boolean.parseBoolean(listen));
	  eventType = parser.next();
	  AuthorityInfo authority = null;


[2.3] �鿴android�İ汾
out\target\product\sp9820e_1h10\system\build.prop build.version
out\target\product\sp9820e_2h10\system\build.prop build.version
//	ro.build.version.sdk=19
//	ro.build.version.codename=REL
//	ro.build.version.release=4.4.4

build/core/version_defaults.mk  PLATFORM_SDK_VERSION^:=
//  PLATFORM_SDK_VERSION := 19


//adb��ȡϵͳ�汾��
adb shell getprop ro.build.version.release

//adb��ȡϵͳapi�汾��
adb shell getprop ro.build.version.sdk




/***********************************************************************/
/****************************** δ���� *********************************/
/***********************************************************************/



	���飺 
//	bluetooth.BluetoothSettings    ������-2��-->WirelessSettings
//	WirelessSettings    ������-6��-->AdvancedWifiSettings
//	sim.SimSettings    ������-3*��-->SavedAccessPointsSettings
//	TetherSettings-->ApnSettings
//	VpnSettings-->WifiP2pSettings
//	DateTimeSettings    ��ϵͳ-22��-->LocalePicker
//	deviceinfo.StorageSettings    ���豸-11-5�洢��-->InputMethodAndLanguageSettings    
//	PrivateVolumeForget-->ManageAssist
//	PrivateVolumeSettings-->SpellCheckersSettings
//	PublicVolumeSettings-->UserDictionarySettings
//	wifi.WifiSettings    ������-1��-->DeviceInfoSettings
//	WifiP2pSettings-->RunningServices
//	inputmethod.InputMethodAndLanguageSettings    ������-20���ԡ�-->StorageUse
//	KeyboardLayoutPicker-->SecuritySettings
//	InputMethodAndSubtypeEnabler-->PrivacySettings
//	SpellCheckersSettings-->DeviceAdminSettings
//	LocalePicker-->UsageAccessSettings
//	UserDictionarySettings-->AccessibilityDaltonizerSettings
//	HomeSettings    ���豸-7-1ѡ��Launch��-->CaptioningSettings    
//	DisplaySettings    ���豸-8-2��-->TextToSpeechSettings
//	DeviceInfoSettings    ��ϵͳ-26-���ڡ�-->StorageSettings
//	ApplicationSettings-->PrivateVolumeSettings    ����ʱ��
//	applications.ManageApplications    ���豸-10-4��//֪ͨ--->PublicVolumeSettings
//	ManageAssist-->PrivateVolumeForget
//	AllApplications-->DevelopmentSettings
//	HighPowerApplications-->PrintSettings
//	AppOpsSummary-->PrintJobSettings
//	StorageUse-->AndroidBeamSettings
//	DevelopmentSettings    ��ϵͳ-25�����ߡ�-->AccountSettings
//	accessibility.AccessibilitySettings    ��ϵͳ-23��-->AccountSyncSettings
//	CaptioningSettings
//	AccessibilityInversionSettings
//	AccessibilityContrastSettings
//	AccessibilityDaltonizerSettings
//	SecuritySettings    ������-18��ȫ��
//	UsageAccessSettings
//	location.LocationSettings    ������-17λ�á�
//	PrivacySettings    ������-21���ݡ�
//	RunningServices
//	ManageAccountsSettings
//	fuelgauge.PowerUsageSummary    ���豸-12-6��
//	BatterySaverSettings
//	applications.ProcessStatsSummary    ���豸-13-7�ڴ桿�޸��ڴ�8G
//	AccountSyncSettings
//	accounts.AccountSettings    ������-19�˺š�
//	AccountSyncSettingsInAddAccount
//	CryptKeeperSettings
//	DeviceAdminSettings
//	DataUsageSummary    ������-4��
//	AdvancedWifiSettings
//	SavedAccessPointsSettings
//	TextToSpeechSettings
//	AndroidBeamSettings
//	wfd.WifiDisplaySettings    ֪ͨ-
//	DreamSettings
//	NotificationStation    //server
//	users.UserSettings    ���豸-14-8��
//	notification.NotificationAccessSettings    ֪ͨ-
//	notification.ZenAccessSettings    ֪ͨ-
//	ConditionProviderSettings
//	UsbSettings
//	TrustedCredentialsSettings
//	nfc.PaymentSettings    ���豸-15-9��
//	PrintSettings
//	PrintJobSettings
//	notification.ZenModeSettings    ֪ͨ-����
//	notification.ZenModePrioritySettings
//	notification.ZenModeAutomationSettings
//	notification.ZenModeScheduleRuleSettings
//	notification.ZenModeEventRuleSettings
//	notification.ZenModeExternalRuleSettings
//	notification.NotificationSettings     ���豸-9-֪ͨ��
//	NotificationAppList
//	AppNotificationSettings
//	OtherSoundSettings
//	DomainsURLsAppList
//	TopLevelSettings
//	ApnSettings
//	WifiCallingSettings
//	MemorySettings
//	OverlaySettings
//	WriteSettings
//	AppDrawOverlaySettings
//	AppWriteSettings
 








�豸-�ڴ桢�洢
applications.ProcessStatsBase  

applications.ProcessStatsSummary�ڴ�
applications.ProcessStatsUi  apk�ڴ�
applications.ProcessStatsDetail  apk�ڴ�Detail

applications.ProcStatsData      ������


applications.StorageSettings�洢
applications.ManageApplications  Ӧ��


ApplicationSettings��Ӧ�ã�    ��ʱ
applications.RunningProcessesView    ��ʱ
applications.RunningServiceDetails    ��ʱ
applications.RunningServices    ��ʱ
applications.RunningState    ��ʱ















