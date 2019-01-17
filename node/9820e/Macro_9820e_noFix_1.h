
/***********************************************************************/
/****************************** base ***********************************/
/***********************************************************************/
[Num]

基础路径设置: 
basePath = F:\9820e
//basePath = \\192.168.2.115\xiaoj\9820e\idh.code

/***********************************************************************/
/******************************* code **********************************/
/***********************************************************************/

[1.1] 长按Home键的功能配置，在config.xml 中更改 config_longPressOnHomeBehavior 参数的配置：
frameworks\base\core\res\res\values\config.xml config_longPressOnHomeBehavior
//<!-- Control the behavior when the user long presses the home button.
//         0 - Nothing
//            1 - Recent apps view in SystemUI
//             2 - Launch assist intent
//         This needs to match the constants in
//         policy/src/com/android/internal/policy/impl/PhoneWindowManager.java
//    -->
//    <integer name="config_longPressOnHomeBehavior">2</integer>



[1.2] 长按电源键的弹出框功能选项配置，在config.xml 中更改 config_longPressOnPowerBehavior 参数的配置：
frameworks\base\core\res\res\values\config.xml config_longPressOnPowerBehavior 0~3
//    <!-- Control the behavior when the user long presses the power button.
//            0 - Nothing
//            1 - Global actions menu
//            2 - Power off (with confirmation)
//    -->
//    <integer name="config_longPressOnPowerBehavior">2</integer>
frameworks\base\policy\src\com\android\internal\policy\impl\PhoneWindowManager.java config_longPressOnPowerBehavior



[1.3] 更改默认壁纸 
frameworks\base\core\res\res\drawable-nodpi\default_wallpaper.jpg


[1.4] 更改型号, 版本号等信息：build\tools\buildinfo.sh
build\tools\buildinfo.sh ro.product.name
//	echo "ro.product.model=$PRODUCT_MODEL"
//	echo "ro.product.brand=$PRODUCT_BRAND"
//	echo "ro.product.name=$PRODUCT_NAME"
//	echo "ro.product.device=$TARGET_DEVICE"
//	echo "ro.product.board=$TARGET_BOOTLOADER_BOARD_NAME"

frameworks/base/core/java/android/os/Build.java getString("ro.product.device");
//	/** The name of the overall product. */
//	public static final String PRODUCT = getString("ro.product.name");
//
//	/** The name of the industrial design. */
//	public static final String DEVICE = getString("ro.product.device");
//

packages/apps/Settings/src/com/android/settings/DeviceInfoSettings.java Build.VERSION.RELEASE
//	setStringSummary(KEY_FIRMWARE_VERSION, Build.VERSION.RELEASE);



[1.5] 修改默认日期格式/铃声/通知 
build\target\product\full_base.mk
//	PRODUCT_PROPERTY_OVERRIDES := \
//		ro.com.android.dateformat=MM-dd-yyyy \
//		ro.config.ringtone=Ring_Synth_04.ogg \
//		ro.config.notification_sound=pixiedust.ogg


[1.6] 支持多卡铃声：device\sprd\XXX(project)\system.prop  增加设置属性 ro.config.support_multiringtone=true


[1.7] 不插SIM卡也支持铃声设置：packages\apps\AudioProfile\src\com\sprd\audioprofile\AudioProfileSoundSettings.java
packages\apps\AudioProfile\src\com\sprd\audioprofile\AudioProfileSoundSettings.java mRingtonePreference[i].setEnabled(false);
//（1）在protected void onCreate(Bundle savedInstanceState)方法中去除如下if的判断
// if (((TelephonyManagerSprd)TelephonyManager.from(mContext)).hasIccCard(i)) {
//                    mRingtonePreference[i].setEnabled(true);
//                } else { 
//                    mRingtonePreference[i].setEnabled(false);
//                }  

packages\apps\AudioProfile\src\com\sprd\audioprofile\AudioProfileSoundSettings.java mRingtonePreference[i]^!=^null
//（2）在protected void onCreate(Bundle savedInstanceState)方法的run()中去除如下if的判断
//	for (int i = 0; i < mPhoneCount; i++) {
                        //if (mRingtonePreference[i] != null && 
//	((TelephonyManagerSprd)TelephonyManager.from(mContext)).hasIccCard(i)){
//                            updateRingtoneName(RingtoneManager.TYPE_RINGTONE,i, mRingtonePreference[i], 
//
//	MSG_UPDATE_RINGTONE_SUMMARY);
                       // }     
//               }



[1.8] 更改蓝牙默认存储路径为内部存储：
packages\apps\Bluetooth\src\com\android\bluetooth\opp\BluetoothOppReceiveFileInfo.java Environment.MEDIA_MOUNTED
//在public static BluetoothOppReceiveFileInfo generateFileInfo(Context context, int id)方法中做如下修改：
//（1）String root = Environment.getInternalStoragePath().getAbsolutePath() ;//获取内部存储路径
//		if (true) {
        //if (Environment.getExternalStorageState().equals(Environment.MEDIA_MOUNTED)) {
           // String root = Environment.getExternalStorageDirectory().getPath();
//（2）if(true){ 
		//if (Environment.getExternalStorageState(Environment.getSecondaryStorageDirectory()).
//			equals(Environment.MEDIA_MOUNTED)) {
                //String root = Environment.getSecondaryStorageDirectory().getPath();

//在 private static boolean safeCanonicalPath(String uniqueFileName)方法中做如下修改：
//	File receiveFile = new File(uniqueFileName);
//            if (mUseSecondCard) {
//                sDesiredStoragePath = Environment.getSecondaryStorageDirectory().getPath() + Constants.DEFAULT_STORE_SUBDIR;
//            } else {
	//modify start
	//sDesiredStoragePath = Environment.getExternalStorageDirectory().getPath() 
//
//	+ Constants.DEFAULT_STORE_SUBDIR;
//
//	sDesiredStoragePath = Environment.getInternalStoragePath().getAbsolutePath()
//
//	 + Constants.DEFAULT_STORE_SUBDIR;
//	// modify end
//	}


[1.9] 调用系统的音量控制：
//mAudioManager = (AudioManager) (mActivity.getSystemService(Context.AUDIO_SERVICE));
//
//           （ KeyEvent.KEYCODE_VOLUME_UP:）
//mAudioManager.adjustStreamVolume(AudioManager.STREAM_MUSIC, AudioManager.ADJUST_RAISE, AudioManager.FLAG_VIBRATE);
//            （ KeyEvent.KEYCODE_VOLUME_DOWN:）
//mAudioManager.adjustStreamVolume(AudioManager.STREAM_MUSIC, AudioManager.ADJUST_LOWER, AudioManager.FLAG_VIBRATE);


[1.10] 单击menu键只有只有壁纸和小部件快捷选项，需添加设置快捷项：
packages\apps\Launcher3\src\com\android\launcher3\Launcher.java  xxx no found.
//	（1）在protected boolean hasSettings()方法中return true；
//
//	（2）protected void onClickSettingsButton(View v)方法做如下修改，添加代码：
//
//	    protected void onClickSettingsButton(View v) {
	//modify
//	 ComponentName com = new ComponentName("com.android.settings", "com.android.settings.Settings");    
//	      Intent  intent = new Intent();
//	      intent.setComponent(com);
//	      startActivity(intent);
	  //end;
//	        if (LOGD) Log.d(TAG, "onClickSettingsButton");
//	        if (mLauncherCallbacks != null) {
//	            mLauncherCallbacks.onClickSettingsButton(v);
//	        }
//	    } 


[1.11] 长按menu键，出现最近使用应用列表（多任务列表）： 
frameworks\base\policy\src\com\android\internal\policy\impl\PhoneWindowManager.java
//	 public long interceptKeyBeforeDispatching(WindowState win, KeyEvent event, int policyFlags)方法中做如下修改：
//
//	else if (keyCode == KeyEvent.KEYCODE_MENU) {
	            // Hijack modified menu keys for debugging features
//	            final int chordBug = KeyEvent.META_SHIFT_ON;
		//---start
//		if(KeyEvent.ACTION_UP == event.getAction()&&
//
//		event.getEventTime()-event.getDownTime()>700&&repeatCount == 0){
//		this.toggleRecentApps();
//		preloadRecentApps();
//		recentAppsShowing = true;
//		return -1;
//	}
//---end
//if (down && repeatCount == 0) {





/***********************************************************************/
/*************************** 参考笔记、网上找的，很乱. *****************/
/***********************************************************************/








