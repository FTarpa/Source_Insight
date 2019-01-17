
/***********************************************************************/
/****************************** base ***********************************/
/***********************************************************************/
基础路径设置: 

basePath = F:\9820e
//basePath = \\192.168.2.115\xiaoj\9820e\idh.code


/***********************************************************************/
/***************************** setting *********************************/
/***********************************************************************/

[1.1]   默认字体
out/target/product/sp9820e_1h10/system/build.prop ro.product.locale.language=en
//ro.product.locale.language=en
//ro.product.locale.region=US
//system/customize/default.xml


[1.2]   默认字体大小 
out/target/product/~/system/build.prop
out/target/product/sp9820e_1h10/system/build.prop ro.default.size   \[fail\]
//     ro.default.size=100
     
/packages/apps/Settings/res/values/arrays.xml entryvalues_font_size
//<string-array name="entryvalues_font_size" translatable="false">
//-        <item>0.85</item>
//         <item>1.0</item>
//         <item>1.15</item>
//         <item>1.30</item>
//+        <item>1.45</item>
//     </string-array>
     
/frameworks/base/core/java/android/content/res/Configuration.java void^setToDefaults()
//@ -732,7 +732,8 @ public final class Configuration implements Parcelable, Comparable&lt;Configuration
//    * Set this object to the system defaults.
//      */
//     public void setToDefaults() {
//-        fontScale = 1;
//+        //fontScale = 1;
//+               fontScale = 1.15f;


[1.3]   默认以太网优先
packages/SettingsProvider/res/values/defaults.xml
//+  <integer name="def_network_preference">9</integer>
///packages/SettingsProvider/src/com/android/providers/settings/DatabaseHelper.java
//     loadBooleanSetting(stmt, Settings.Global.ETHERNET_MODE,R.bool.def_ethernet_mode);
//+    loadIntegerSetting(stmt, Settings.Global.NETWORK_PREFERENCE, R.integer.def_network_preference);
//overlay/frameworks/base/core/res/res/values/config.xml
//        <item>"bluetooth,7,7,1,60000,true"</item>
//-        <item>"ethernet,9,9,2,-1,true"</item>
//+        <item>"ethernet,9,9,4,-1,true"</item>


[1.4]   修改内存8G
packages/apps/Settings/src/com/android/settings/applications
ProcessStatsUi  +44
    static final boolean DEBUG = false;  //显示Log
ProcStatsData  +378
     double freeRam = (float)8*1024+(freeWeight * 1024) / memTotalTime;
...（还有其他位置可以改）


[1.5]   修改文字等
主页
SettingsActivity.java
    loadCategoriesFromResource(R.xml.dashboard_categories, categories, this); 
子页：
ProcessStatsSummary.java
    addPreferencesFromResource(R.xml.process_stats_summary);  


[1.6]   添加设置项（有问题）
Settings.java
            R.xml.settings
call_feature_setting.xml
            PreferenceCategory 
                    PreferenceScreen  
    android:targetPackage="com.android.phone" 
    android:targetClass="com.android.phone.DectSettings"

Phone\res\xml\dect_settings.xml 
            PreferenceScreen 
DectSettings.java  
            addPreferencesFromResource(R.xml.dect_settings); 


[1.7]   添加设置项（旧）
frameworks\base\packages\SettingsProvider\res\values\defaults.xml
            <!--Default for NavigationSettings>
+    <string name="def_nav_packagename" >com.android.email</string>
frameworks/base/core/java/android/provider/Settings.java
            /** * @hide */
+            public static final String NAV_PACKAGENAME = "def_nav_packagename";
+            public final class SETTINGS_TO_BACKUP{  , NAV_PACKAGENAME,}  
frameworks\base\packages\SettingsProvider\src\com\android\providers\settings\DatabaseHelper.java
            loadSystemSettings(){        //Secure、System、Global
+        loadStringSetting(stmt, Settings. System. NAV_PACKAGENAME , R.string. def_nav_packagename);
            }
packages\app\Settings\src\com\...
            Settings.Secure.putInt(getActivity().getContentResolver(),Settings.System.NAV_PACKAGENAME,0);  
            Settings.System.getInt(cr,Settings.System.NAV_PACKAGENAME, 0)

			
[1.8]   添加、隐藏虚拟按键
/system/build.prop
qemu.hw.mainkeys=0    # 添加虚拟按键
qemu.hw.mainkeys=1        # 隐藏虚拟按键

			
/***********************************************************************/
/***************************** setting *********************************/
/***********************************************************************/
			mtk的--不对...

[2.6]   mtk修改默认字体大小 
在frameworks/base/core/java/android/content/res/Configuration.java
 public void setToDefaults()里面的
fontScale = 1.10f;    1代表默认的大小，1.10f代表大，1.15代表超大



[2.7]   默认关闭usb debug
在packages/apps/Provision/src/com/android/provision/DefaultActivity.Java
在这个里面的oncreate方法里面添加：
 Settings.Secure.putInt(getContentResolver(), Settings.Secure.ADB_ENABLED, 0);  /0代表关闭，1代表打开



[2.8]   修改系统默认时区及默认语言
       修改：
           build/tools/buildinfo.sh 在这个文件的最后一行的前面添加以下代码：
                     echo "persist.sys.language=zh"
                     echo "persist.sys.country=CN"
                     echo "persist.sys.localevar="
                     echo "persist.sys.timezone=Asia/Shanghai"
                     echo "ro.product.locale.language=zh"
                     echo "ro.product.locale.region=CN"



[2.9]   修改系统默认时间
rtc-mt6573.h
cust_rtc.h


[2.10]   修改设备默认名字。
build/tools/buildinfo.sh



/***********************************************************************/
/******************************* code **********************************/
/***********************************************************************/










