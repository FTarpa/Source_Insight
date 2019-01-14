
/***********************************************************************/
/****************************** base ***********************************/
/***********************************************************************/
	
基础路径设置: [s][Cs]
basePath = F:\9820e
//basePath = \\192.168.2.115\xiaoj\9820e\idh.code


/***********************************************************************/
/******************************* code **********************************/
/***********************************************************************/
[Num]目录:

易连汇通软件-FAQ


一、系统默认值修改	2
1、修改默认输入法	2
2、修改数据连接为默认关闭	3
3、默认蓝牙名字修改	3
4、修改默认字体大小	3
5、修改默认亮度、休眠时间	3
6、修改可移动磁盘的名字	3
7、修改联机ID(磁盘驱动器名称)	3
8、修改默认音量	4
9、设置-安全-未知来源默认打开	4
10、修改浏览器默认主页	4
11、修改默认时间格式为24小时	4
12、修改默认日期格式	5
13、设置>显示>自动亮度调节 默认是勾选上的	5
14、内置输入法默认打勾	5
15、修改系统一些默认数据库中的属性	6
16、WIFI设置，选择热点后，输入密码状态栏位置，显示高级选项默认勾选	6
17、修改系统默认铃声	6
18、默认开启键盘提示音	6
19、修改壁纸为动态壁纸	6
二、客户需求	7
1、默认把客户的一些文件复制到SD卡中	7
2、新增拨号键盘输入“*#07#“显示SAR Values	7
3、更改制造商、品牌	9
4、修改像素插值	9
5、修改工程模式指令	9
6、修改MTP名字	10
7、修改PTP名字	10
8、修改CD-ROM的名字	10
9、关闭电话接通后的振动提示	10
10、系统不转换系统默认语言为SIM卡语言	11
11、关闭打开相机快门声	11
12、修改照相机默认保存路径为DCIM/Camera	12
13、来短信和收到蓝牙传输文件亮屏6秒	12
14、取消SIM卡叠加	12
15、隐藏playstore，客户手动安装之后可正常使用	12
16、launcher中字符串被遮盖，文件夹编译没有字符串显示	12
17、过滤无效字符“(”和“）”	13
18、指定第三方的Launcher为系统默认启动	13
19、修改耳机按键响应电话	13
20、修改内存显示成8（256）G	13
21、修改听筒声音	13
22、拨打国外电话号码匹配（11位改成7位）	13
23、6577改成8377	13
24、延长关机时间	13
25、添加阿拉伯语外置键盘支持	13
26、DDR从512改成假的1G	14
27、去MAC地址显示	14
28、俄罗斯适用apn	14
29、修改音量键正反	14
30、点击关机直接关机不需要确认	14
31、修改浏览器默认搜索引擎	14
32、FileManager打开客制目录APK	14
33、删除谷歌商店重新安装可用	14
三、常见修改	15
1、更换开机LOGO	15
2、更换开、关机动画	15
3、开关机铃声	16











一、系统默认值修改
1、修改默认输入法
修改文件：\mediatek\config\md700\ProjectConfig.mk中的DEFAULT_INPUT_METHOD为要替换的默认输入法的Services全包名。如：DEFAULT_INPUT_METHOD=com.sohu.inputmethod.sogou.SogouIME
2、修改数据连接为默认关闭
	修改文件：frameworks\base\core\java\android\provider\Settings.java   MOBILE_DATA_DEFAULT = 1;  
              \mediatek\operator\OP02\frameworks\java\com\mediatek\op\telephony\TelephonyExtOP02.java 把isDefaultDataOn（）中的ture改成false

3、默认蓝牙名字修改
	修改文件：mediatek\config\common\custom.conf   
修改bluetooth.HostName为要默认的名字

4、修改默认字体大小
	修改文件：frameworks\base\core\java\android\content\res\Configuration.java   
修改setToDefaults（）方法中的fontScale变量。
Small 0.9f
Normal 1
Large 1.1f
Extra Large 1.15f

5、修改默认亮度、休眠时间
	frameworks\base\packages\SettingsProvider\res\values\defaults.xml
<integer name="def_screen_off_timeout"> 休眠时间
<integer name="def_screen_brightness"> 亮度

6、修改可移动磁盘的名字
	参照附件：修改可移动磁盘名字

7、修改联机ID(磁盘驱动器名称)
	参照附件：kernel\drivers\usb\gadget\f_mass_storage.c
把fsg_common *fsg_common_init方法中的下面代码：snprintf(common->inquiry_string, sizeof common->inquiry_string,
   "%-8s%-16s%04x", cfg->vendor_name ?: "",
   /* Assume product name dependent on the first LUN */
   cfg->product_name ?: (common->luns->cdrom
         ? "i9220"
         : "i9220"),
   i);中的i9220这个地方改成需要的名称
8、修改默认音量
	修改文件：\frameworks\base\media\java\android\media\AudioManager.java
修改数组：DEFAULT_STREAM_VOLUME中的值。最大值参照AudioService.java中的MAX_STREAM_VOLUME数组。主要修改STREAM_VOICE_CALL、STREAM_ALARM、STREAM_NOTIFICATION
设置情景模式标准音量 中也要同步，修改值如下
alps/mediate/framework/base/media/audio/java/com/mediate/audioprofile/AudioPrifileMnager.java中的getDefaultState() 的值
STREAM_VOICE_CALL  对应  DEFAULT_RINGER_VOLUME_GENERAL
STREAM_NOTIFICATION对应  DEFAULT_NOTIFICATION_VOLUME_GENERAL
STREAM_ALARM       对应  DEFAULT_ALARM_VOLUME_GENERAL
9、设置-安全-未知来源默认打开
修改文件：frameworks\base\packages\SettingsProvider\res\values\defaults.xml  
<bool name="def_install_non_market_apps">改成true
10、修改浏览器默认主页
	修改文件：packages\apps\Browser\src\com\android\browser\BrowserSettings.java
修改getHomePage（）方法中的 getFactoryResetHomeUrl(mContext)改成要修改的主页。
如：public String getHomePage() {
        return mPrefs.getString(PREF_HOMEPAGE, "http://www.baidu.com.cn/");
} 
注：主页前面一定要加上http://
11、修改默认时间格式为24小时
	修改文件：\frameworks\base\packages\SettingsProvider\src\com\android\providers\settings\DatabaseHelper.java 
在loadSystemSettings（）方法中增加代码：loadStringSetting(stmt, Settings.System.TIME_12_24, R.string.time_12_24);

\frameworks\base\packages\SettingsProvider\res\values\defaults.xml 中增加 <string name="time_12_24" translatable="false">24</string>

12、修改默认日期格式
	修改文件：frameworks\base\core\res\res\values\donottranslate-cldr.xml
             frameworks\base\core\res\res\values-en-rUS\donottranslate-cldr.xml
修改对应语言目录下面的donottranslate-cldr.xml    中的 numeric_date_format

如：将中文环境下的日期格式修改为"yyyy年M月d日，EEE"（EEE是星期）
打开文件Donottranslate-cldr.xml (frameworks\base\core\res\res\values-zh-rcn)
找到numeric_date_format这项，修改成下面这样：
<string name="numeric_date_format">yyyy年M月d日，EEE</string>
13、设置>显示>自动亮度调节 默认是勾选上的
	修改文件：
alps\frameworks\base\packages\SettingsProvider\res\values\defaults.xml 
内的 
<bool name="def_screen_brightness_automatic_mode">false</bool> 
改为 
<bool name="def_screen_brightness_automatic_mode">true</bool> 
即可。

14、内置输入法默认打勾
	修改文件：frameworks\base\packages\SettingsProvider\src\com\android\providers\settings\DatabaseHelper.java
在loadSecureSettings(SQLiteDatabase db)方法中添加loadStringSetting( stmt, Settings.Secure.ENABLED_INPUT_METHODS,R.string.config_enabled_input_methods); 其中R.string.config_enabled_input_methods为你要默认打勾的输入法包名/Services名 不同输入法以“：”号分开
如：<string name="config_enabled_input_methods">com.google.android.inputmethod.pinyin/.PinyinIME:com.guobi.gbime.trunk/.GBIme:com.googlecode.tcime/.CangjieIME</string>

注：如果有修改过默认的输入法。要把默认输入法放在R.string.config_enabled_input_methods第一个，如：
<string name="config_enabled_input_methods">com.googlecode.tcime/.CangjieIME:com.google.android.inputmethod.pinyin/.PinyinIME:com.guobi.gbime.trunk/.GBIme</string>

15、修改系统一些默认数据库中的属性
	修改文件：frameworks\base\packages\SettingsProvider\src\com\android\providers\settings\DatabaseHelper.java
在loadSecureSettings(SQLiteDatabase db)方法中添加loadStringSetting( stmt, Settings.Secure.ENABLED_INPUT_METHODS(数据库中的表格名字，一般在修改改属性之后保存到数据库中的代码能找到对应的名字),R.string.config_enabled_input_methods（可以自己定义String,要写入数据库的值。）)
16、WIFI设置，选择热点后，输入密码状态栏位置，显示高级选项默认勾选
	修改文件：\packages\apps\Settings\res\layout\wifi_dialog.xml
把id/wifi_advanced_togglebox这个CheckBox中的 android:checked="false"改成true

17、修改系统默认铃声
	把铃声拷贝到out\target\product\md700\system\media\audio目录下面。修改out\target\product\md700\system\build.prop文件里面的

ro.config.notification_sound=Proxima.ogg
ro.config.alarm_alert=Alarm_Classic.ogg
ro.config.ringtone=Backroad.ogg

18、默认开启键盘提示音
	Settings -> Language & input -> Android keyboard -> Settings -> "Sound on keypress"
    修改文件：\alps_gq\packages\inputmethods\LatinIME\java\res\values\config.xml
              config_default_sound_enabled 由false改成true.
19、修改壁纸为动态壁纸
修改frameworks/base/core/res/res/values/config.xml文件中
找到<string name=”default_wallpaper_component”>@null</string>
修改为
<string name=”default_wallpaper_component”>com.android.wallpaper/.nexus.NexusWallpaper</string>
其中com.android.wallpaper/.nexus.NexusWallpaper，”/”前为包名，后为类名
备注：如果要将内置到系统中的无source code的第三方动态壁纸程序设置为默认动态壁纸，则需要知道该apk中
WallpaperService对应的类名和包名，可以通过Google提供的apk-tool工具来得到该apk的资源文件，那么就可以通过查
看AndroidManifest.xml文件去查找到对应的Wallpaper Service的类名和包名。
20、USB调试模式默认打开
\alps\build\core\main.mk
 ADDITIONAL_DEFAULT_PROPERTIES += ro.debuggable=0 改为1（两个地方）

二、客户需求
1、默认把客户的一些文件复制到SD卡中
		参照附件：预置客供文件至存储卡根目录

2、新增拨号键盘输入“*#07#“显示SAR Values
	修改文件：
\packages\apps\Contacts\res\values\strings.xml中增加：<string name="sar_value">SAR value</string>
packages\apps\Contacts\src\com\mediatek\contacts\ SpecialCharSequenceMgrProxy.java中修改下面几个地方：
  （1）、新增常量
private static final String MMI_IMEI_DISPLAY = "*#06#";
    	/****add by xiangxiang for SAR Values****/
    	private static final String SAR_DISPLAY = "*#07#";
    	/****end****/

	（2）、修改handleChars （）方法。
static boolean handleChars(Context context, String input, boolean useSystemWindow,
            EditText textField) {
        Log.d(TAG, "handleChars() dialString:" + input);
        if(ContactsApplication.sGemini) {
            String dialString = PhoneNumberUtils.stripSeparators(input);
            /****modify by xiangxiang for SAR Values ****/
            if (handleIMEIDisplay(context, dialString, useSystemWindow)
                    || handlePinEntry(context, dialString)
                    || handleAdnEntry(context, dialString, textField)
                    || handleSecretCode(context, dialString)
                    || handleSARDisplay(context, dialString,useSystemWindow)) {
                return true;
            }
            /****end***/
            return false;
        } else
            return SpecialCharSequenceMgr.handleChars(context, input, useSystemWindow, textField);
}

（3）、新增下面两个方法。
/*****add by xiangxiang 0521 for SAR Values****/
		static boolean handleSARDisplay(Context context, String input, boolean useSystemWindow) {
		    if(ContactsApplication.sGemini) {
		        if (input.equals(SAR_DISPLAY)) {
		            int phoneType = ((TelephonyManager)context.getSystemService(
		                    Context.TELEPHONY_SERVICE)).getCurrentPhoneType();
		            showSARValues(context, useSystemWindow);
		            return true;
			        }
		        return false;
		    } 
		    		    else
		    {
		    	return true;
		    	}
		}
							
		static void showSARValues(Context context, boolean useSystemWindow) {
			final TelephonyManager telephonyManager = ((TelephonyManager)context.getSystemService(
	             Context.TELEPHONY_SERVICE));
		    if (ContactsApplication.sGemini) {
		        final CharSequence[] imeiStrs = new CharSequence[1];
		       
		        String softInfo = "Head:0.880 W/kg \r\n\r\nBody:0.550 W/kg\r\n\r\n";
		        imeiStrs[0]= softInfo;
		
		        AlertDialog alert = new AlertDialog.Builder(context).setTitle(R.string.sar_value)
		                .setItems(imeiStrs, null).setPositiveButton(android.R.string.ok, null)
		                .setCancelable(false).create();
		        alert.show();
		    } 
    }
/*****end****/
3、更改制造商、品牌
	修改文件：编译之后 修改\out\target\product\md700\system\build.prop中的ro.product.manufacturer
ro.product.brand

4、修改像素插值
	修改文件：\mediatek\custom\mt6577\hal\camera\camera\cfg_ftbl_custom_yuv_main.h
	修改apture Size
    //modify by xiangxiang 
#if 1
    //  Capture Size
    CONFIG_FEATURE(FID_CAP_SIZE, 
        BY_DEFAULT(CAPTURE_SIZE_1600_1200), 
        CAPTURE_SIZE_320_240,   CAPTURE_SIZE_640_480, 
        CAPTURE_SIZE_1024_768,  CAPTURE_SIZE_1280_960, 
        CAPTURE_SIZE_1600_1200
    )
\mediatek\custom\mt6577\hal\camera\camera\cfg_ftbl_custom_yuv_sub.h
修改：Capture Size 
//modify by xiangxiang
#if 1
    //  Capture Size
    CONFIG_FEATURE(FID_CAP_SIZE, 
        BY_DEFAULT(CAPTURE_SIZE_640_480), 
        CAPTURE_SIZE_320_240,   CAPTURE_SIZE_640_480
    )
#endif

5、修改工程模式指令
	修改文件：\mediatek\packages\apps\EngineerMode\src\com\mediatek\engineermode\EngineerModeReceiver.java
     修改private final Uri mEmUri1 = Uri.parse("android_secret_code://3646633");

6、修改MTP名字
修改文件：\frameworks\base\media\java\android\mtp\MtpDatabase.java
修改方法getDeviceProperty()中的下面代码：
 String deviceName;
                        deviceName = SystemProperties.get("ro.product.name");
                        /***modify by xiangxiang0725****/
                        deviceName = "Panasonic X71";
                        /***end****/
7、修改PTP名字
修改文件:frameworks\av\media\mtp\MtpServer.cpp
   修改方法：MtpResponseCode MtpServer::doGetDeviceInfo()
       property_get("ro.product.model", prop_value, "MTP Device");
    /***modify by xiangxiang0726****/
    //string.set(prop_value);
    strcpy(prop_value, "Panasonic x71");
    string.set(prop_value);
    /****end****/
8、修改CD-ROM的名字
修改\system\mobile_toolkit\iAmCdRom.iso 修改该文件的卷标符号。采用UltraISO_9.5.5.2960.exe工具可以修改。该工具见附件-修改CD-ROM名字。
安装完成打开后-》工具-》修改ISO卷标。

9、关闭电话接通后的振动提示
修改文件：packages\apps\Phone\src\com\android\phone\CallNotifier.java
注释掉文件中的下面代码

if((mCM.getActiveFgCallState() == Call.State.ACTIVE)
                &&(mPreviousCallState != Call.State.IDLE)
                &&(mPreviousCallState != Call.State.ACTIVE)
                &&(mPreviousCallState != Call.State.HOLDING)
                &&(mPreviousCallState != Call.State.DISCONNECTED)
                &&(mPreviousCallState != Call.State.DISCONNECTING)){
            if (DBG) Log.d(LOG_TAG, "onPhoneStateChanged mCM.getActiveFgCallState()= "+mCM.getActiveFgCallState());
            if (DBG) Log.d(LOG_TAG, "onPhoneStateChanged mPreviousCallState= "+mPreviousCallState);
            final int MO_CALL_VIBRATE_TIME = 300;  // msec
            mVibrator.vibrate(MO_CALL_VIBRATE_TIME);
        }
        if (DBG) Log.d(LOG_TAG, "before set value, mPreviousCallState= "+mPreviousCallState);
        mPreviousCallState = mCM.getActiveFgCallState(); 
        if (DBG) Log.d(LOG_TAG, "end after set value, mPreviousCallState= "+mPreviousCallState);

10、系统不转换系统默认语言为SIM卡语言
frameworks\base\telephony\java\com\android\internal\telephony\ MccTable.java
   // setLocaleFromMccIfNeeded(context, mcc); 注释掉
11、关闭打开相机快门声
 a.  frameworks\base\media\java\android\media\ AudioService.java
    修改 private final int[] STREAM_VOLUME_ALIAS = new int[]
      第八个数组
AudioSystem. STREAM_RING, // STREAM_SYSTEM_ENFORCED
修改
AudioSystem.STREAM_SYSTEM_ENFORCED, // STREAM_RING
在setStreamMute（）中添加
  if(streamType == AudioSystem.STREAM_SYSTEM_ENFORCED){
           mStreamStates[streamType].mute(cb, state);
         }
b．
frameworks\base\packages\SettingsProvider\src\com\android\providers\settings\ DatabaseHelper.java
在 loadVolumeLevels（） int ringerModeAffectedStreams 中
去掉 1 << AudioManager.STREAM_SYSTEM_ENFORCED

在上层关闭打开拍照音
1）获取AudioManager
AudioManager mAM;
mAM = (AudioManager)getSystemService(Context.AUDIO_SERVICE);
2）打开拍照音：
mAM.setStreamMute(AudioManager.STREAM_SYSTEM_ENFORCED, false);
3）关闭拍照音：
mAM.setStreamMute(AudioManager.STREAM_SYSTEM_ENFORCED, true);





12、修改照相机默认保存路径为DCIM/Camera


Camera\src\com\mediatek\camera\ext\ExtensionHelper.java

注释掉try-catch里的内容
保存
    if (sCameraExtension == null) {
        		sCameraExtension = new CameraExtension();
        	}
13、来短信和收到蓝牙传输文件亮屏6秒
见补丁包：来短信和收到蓝牙传输文件亮屏6秒
14、取消SIM卡叠加
把frameworks\base\core\java\android\provider\Telephony.java下面代码注释：
try {
                if (cursor != null) {
                    if (cursor.getCount() > 0) {
                        return ErrorCode.ERROR_NAME_EXIST;
                    }
                }
            } finally {
                if (cursor != null) {
                    cursor.close();
                }
            }
15、隐藏playstore，客户手动安装之后可正常使用
参照补丁包：隐藏playstore中的所有信息

16、launcher中字符串被遮盖，文件夹编译没有字符串显示
    参照补丁包：launcher中字符串被遮盖，文件夹编译没有字符串显示(高清)
17、过滤无效字符“(”和“）”
参照补丁包：过滤无效字符
18、指定第三方的Launcher为系统默认启动
参照补丁包：指定第三方的Launcher为系统默认启动

19、修改耳机按键响应电话
参照补丁：修改耳机按键响应电话
20、修改内存显示成8（256）G
参照补丁包：修改内存显示成8G
21、修改听筒声音
参照补丁包：修改听筒声音
22、拨打国外电话号码匹配（11位改成7位）
将ProjectConfig.mk中的MTK_CTA_SUPPORT改成no
23、6577改成8377
参照补丁包：MT6577改成MT8377
24、延长关机时间
参照补丁包：延长关机时间
25、添加阿拉伯语外置键盘支持
参照补丁包：添加阿拉伯语外置键盘支持
26、DDR从512改成假的1G
参照补丁包：DDR从512改成假的1G
27、去MAC地址显示
参照补丁包：去MAC地址显示
28、俄罗斯适用apn
参照补丁包：俄罗斯适用apn
29、修改音量键正反
参照补丁包：修改音量键正反
30、点击关机直接关机不需要确认
参照补丁包：点击关机直接关机不需要确认
31、修改浏览器默认搜索引擎
参照补丁包：修改浏览器默认搜索引擎
32、FileManager打开客制目录APK
参照补丁包：FileManager打开客制目录APK
33、删除谷歌商店重新安装可用
参照补丁包：删除谷歌商店重新安装可用
三、常见修改
	1、更换开机LOGO
开机LOGO有两张，第一张为BOOT户动LOGO，是第一张，第二张是进入KERNEL时的LOGO，
目录在mediatek\custom\common\lk\logo\wsvga 
第一张：wsvga_uboot.bmp 第二张：wsvga_kernel.bmp
	2、更换开、关机动画
		(1) 动画的制作：
分别创建名为："part0"和"part1"的文件夹及一个名为"desc.txt"的文件
part0中存储动画的第一阶段的资源图片，
part1存储第二阶段的资源图片，注意图片为png格式
播放控制由"desc.txt"指定，比如内容如下
320 480 30
p 1 0 part0
p 0 0 part1
上面的参数功能如下：
320    480       30
宽     高    每秒播放帧数
p          1           0                 part0
标志符  循环次数  阶段切换间隔时间    对应目录名
p          0           0                 part1
标志符  循环次数  阶段切换间隔时间    对应目录名




desc.txt文本内容必须用单个空格隔开，且不能有多余空行
最后，将这三个组件通过存储压缩的方式为bootanimation.zip
什么是存储压缩方式呢：
操作如下：
a.压缩文件名：输入bootanimation
b.选中要压缩的文件和文件夹
c.右键选择添加到压缩文件
d.勾选 压缩文件格式 zip
e.压缩方式  选中存储
f.按确定完成压缩
  	 (2)，开机动画，
        A,将制作好的开机动画以bootanimation.zip命名拷到以下文件夹：
          mediatek\operator\OP02\prebuilt\bootanim\bootanimation\{HD600}，相应的文件夹下，
        B,改动当前文件夹下的androoid.mk指定路径。
          ifeq ($(LCM_HEIGHT), 1024)
              LOCAL_PATH := $(LOCAL_PATH)/HD600
      Endif
        C,修改mediatek\operator\OP02\SPEC0200\SEGA\optr_apk_config.mk
              PRODUCT_PACKAGES += \
                 bootanimation.zip \
                 shutanimation.zip \
 	 (3)，关机动画，
        A,将制作好的开机动画以shutanimatiom.zip命名拷到以下文件夹：
          mediatek\operator\OP02\prebuilt\bootanim\shuatanimation\{HD600}，相应的文件夹下，
        B,改动当前文件夹下的androoid.mk指定路径。
          ifeq ($(LCM_HEIGHT), 1024)
               LOCAL_PATH := $(LOCAL_PATH)/HD600
      Endif
        C,修改mediatek\operator\OP02\SPEC0200\SEGA\optr_apk_config.mk
              PRODUCT_PACKAGES += \
                    bootanimation.zip \
                    shutanimation.zip \
      
	3、开关机铃声
		开机铃声命名为bootaudio.mp3、关机铃声命名为shutaudio.mp3

把MP3文件放到\alps_gq\out\target\product\md700\system\media文件夹下面。然后打包。





/***********************************************************************/
/*************************** 参考笔记、网上找的，很乱. *****************/
/***********************************************************************/








