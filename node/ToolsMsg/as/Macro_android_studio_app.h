
/***********************************************************************/
/****************************** base ***********************************/
/***********************************************************************/
	
基础路径设置:
basePath = D:\SVN\app\APPTest3
//basePath = F:\9820e
//basePath = \\192.168.2.115\xiaoj\9820e\idh.code



/***********************************************************************/
/******************************* code **********************************/
/***********************************************************************/


[1.1] 一个app打包多个APK
//一个app打包多个APK

[1.2] 修改app\build.gradle
app\build.gradle
//	假设我们同一套代码编译2个app：demo1和demo2
	android {
		...
		productFlavors {
			// demo1
			demo1 {
	
				 //设置applicationId（这里很重要，两个相同applicationId的apk不同同时安装在同一台Android手机中）
				applicationId "com.glorystudent.buglydemo1"
	
				 //自动生成@string/app_name为demo
				resValue "string","app_name","demo1"
	
				 //定义app_icon字段，在AndroidManifest.xml文件中用到
				manifestPlaceholders = [UMENG_CHANNEL_VALUE: "demo1",app_icon : "@mipmap/ic_launcher"]
			}
			// demo2
			demo2 {
				 //解释同app1
				applicationId "com.glorystudent.buglydemo2"
				resValue "string","app_name","demo2"
				manifestPlaceholders = [UMENG_CHANNEL_VALUE: "demo2",app_icon : "@mipmap/ic_launcher1"]
			}
		}
		lintOptions {
			checkReleaseBuilds false
			abortOnError false
		}
	}

[1.3] 去坑，我们上面写了
	resValue "string","app_name","demo"
//	运行之后，AS会自动生成@string/app_name，内容是这样的
	<item type="string" name="app_name">demo</item>
//	那么问题来了，如果你在app的strings.xml文件也定义了
//	所以编译的时候就会出现问题，因为有2个app_name，所以我们要把app的strings.xml去掉，编译就会正常了。
	
[1.4] 修改AndroidManifest.xml文件
	<manifest xmlns:android="http://schemas.android.com/apk/res/android"
		package="com.glorystudent.buglydemo1">
	
		<application
			android:allowBackup="true"
			// 注意啦，这里改为${app_icon}
			android:icon="${app_icon}"
			android:label="@string/app_name"
			android:supportsRtl="true"
			android:theme="@style/AppTheme">
			   <meta-data
				  android:name="UMENG_CHANNEL"
					android:value="${UMENG_CHANNEL_VALUE}"/>
			<activity android:name=".ui.MainActivity">
				<intent-filter>
					<action android:name="android.intent.action.MAIN" />
					<category android:name="android.intent.category.LAUNCHER" />
				</intent-filter>
			</activity>
		</application>
	
	</manifest>

//	注意啦，icon属性的值是${app_icon}，虽然为红色，但是不要紧，我们在build.gradle文件中加入了这么一段代码：
	
	android {
		...
		lintOptions {
			checkReleaseBuilds false
			abortOnError false
		}
	}
//	这里的作用就是即使项目中报错也不会停止打包 。
//	
//	打包并签名APK
//	我们打包时，就会出现2个app：
//	我们选择2个app，AS就会帮我们打包2个不同的APK了，就这么简单！！
	
[1.5] 注意：可能出现的问题
//	如果可以打包不同版本的apk，但是不能同时安装到同一台设备，提示：xx有相同组件之类的。然后查看两个apk的包名是否一样，结果两个apk的包名是不同的。一般情况不会，执行签名步骤就ok了：
//	记住，provider标签的authorities属性的值一定要是唯一的，如果两个app的authorities属性值一样，就会提示安装失败，一定要记住！！



/***********************************************************************/
/******************************* code **********************************/
/***********************************************************************/

[2.1] Android-Studio多个项目添加依赖同一个模块
//Android-Studio多个项目添加依赖同一个模块

实例: 
在ProjectA中有一个模块moduleLib, 在ProjectB的一个模块app需要依赖使用在ProjectA中的moduleLib 
- ProjectA/ 
	- moduleLib/ 
		- build.gradle 
	- moduleLib2/ 
		- build.gradle 
	- build.gradle 
	- settings.gradle 
- ProjectB/ 
	- app/ 
		- build.gradle 
	- build.gradle 
	- settings.gradle 

方法一 
1.在ProjectB/Settings.gradle下,导入ProjectA的模块moduleLib 
//include ':moduleLib' 
//project(':moduleLib').projectDir = new File(settingsDir, '../ProjectA/moduleLib') 
2.在ProjectB/app/build.gradle下,添加依赖 
//dependencies { 
//	compile project(':moduleLib') 
//} 
提示: ..代表当前目录的上一级目录 

方法二 
1.在ProjectB/Settings.gradle下,导入ProjectA的所有模块 
//include ':ProjectA' 
//project (':ProjectA').projectDir = new File('../ProjectA') 
//include ':ProjectA:moduleLib' 
2.在ProjectB/app/build.gradle下,添加依赖 
//dependencies { 
//	compile project(':moduleLib') 
//} 

方法三 
1.在ProjectB/Settings.gradle下,导入ProjectA的模块moduleLib 
//include ':..:ProjectA:moduleLib' 
2.在ProjectB/app/build.gradle下,添加依赖 
//dependencies { 
//	compile project(':..:ProjectA:moduleLib') 
//} 
此方法导入模块,在as中显示目录结构不好看! 建议使用方法一或二 

	

/***********************************************************************/
/*************************** 参考笔记、网上找的，很乱. *****************/
/***********************************************************************/








