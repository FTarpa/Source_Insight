
/***********************************************************************/
/****************************** base ***********************************/
/***********************************************************************/
	
基础路径设置:
basePath = F:\9820e
//basePath = \\192.168.2.115\xiaoj\9820e\idh.code



/***********************************************************************/
/****************************** Error  *********************************/
/***********************************************************************/
//配置类错误
[4.0] ----------------------------------


[4.1] //错误: Please select Android SDK
//Ctrl + Alt +Shift +S，打开Project Structure，选中主modele app ，
//把 Source Compatibility 选中1.8或项目以前用的jdk版本，
//Target Compatibility同样操作，点击右下角ok，项目自动编译，也能解决。


[4.2] //错误: AndroidManifest.xml doesn''t exist
AndroidManifest.xml doesn''t exist or has incorrect root tag
//1. 解决方法：
//	点击 Android Studio 中的 Sync project with Gradle files 按钮。
//	https://blog.csdn.net/doris_d/article/details/46413591

//2.试过没用：
//File->Settings->Plugins->取消Android Support的禁用即可。


[4.3]  //错误: gradle project sync failed
//	进入项目目录下，找到 gradle\wrapper\gradle-wrapper.properties 文件，记事本打开，内容如下：

//	
//	`#Sun Sep 04 23:25:42 CST 2016 
//	distributionBase=GRADLE_USER_HOME 
//	distributionPath=wrapper/dists 
//	zipStoreBase=GRADLE_USER_HOME 
//	zipStorePath=wrapper/dists 
//	distributionUrl=https://services.gradle.org/distributions/gradle-2.14.1-all.zip
//	
//	最后一句，https://services.gradle.org/distributions/gradle-2.14.1-all.zip
//	
//	studio会下载上面的Gradle，不知道什么原因下载不下来，我们可以手动下载这个版本的Gradle，无需解压直接拷贝到
//	
//	C:\Users\Administrator\.gradle\wrapper\dists\gradle-2.10-all\a4w5fzrkeut1ox71xslb49gst
//	
//	下即可，重启studio，问题解决

 
[4.4] //错误: Cannot parse SDK Android API 19 Platform:
//错误:Android Source Generator: Cannot parse SDK Android API 19 Platform: 
//	build target is not specified


[4.4] Emulator: dsound: Could not initialize DirectSoundCapture
// 开启电脑录音设备:
//	https://jingyan.baidu.com/article/a65957f434890a24e67f9bfc.html


[4.5] //Emulator: installation failed
installation failed with message failed to finalize session
//	1.清理项目之前编译好的.class文件,重新编译文件
点击build->clean project ,然后再点击 rebuild project。



//配置类错误
[3.0] ----------------------------------

[3.2] *.png.png格式报错

[3.3] styles.xml: Error: Duplicate resources
//		AppBaseTheme 重复

[3.4] <item> inner element must either be a resource reference or empty.
//		Android Studio 3.0以后尤其3.2版本对资源文件命名校验更严格
//		 <item name="xxx" type="id">false</item>
//	改为 <item name="xxx" type="id"/>
//	去掉false就行了

[3.5] .9没黑边
//	Error:top-left corner pixel must be either opaque white or transpare

[3.6] error: attribute 'xxx:xxx' not found
//	先删了代码，原因没找到

[3.7] Compilation failed; see the compiler error output for details.
//	WARNING: Configuration 'compile' is obsolete and has been replaced with 'implementation' and 'api'.
//	修改build.gradle文件下的dependencies下的classpath配置版本。如下图所示：
build.gradle classpath
//	暂时忽略。

[3.7] 非法字符: '\ufeff'
//	Error:(1, 1) 错误: 非法字符: '\ufeff'
//	Error:(1, 10) 错误: 需要class, interface或enum
//	经过查看，该文件采用的编码方式为UTF-8带BOM的格式，随后，使用NotePad++打开该文件，
//	并将文件格式改为以UTF-8无BOM格式编码（如图1：选择格式第二项）并保存之后问题得以解决。

[3.8] 错误: 程序包org.apache.http不存在
//	1) 错误: 程序包org.apache.http不存在
app\build.gradle
//	buildToolsVersion "28.0.3"
//	useLibrary 'org.apache.http.legacy'

//	2) 错误: 程序包junit.framework不存在
//	Assert.assertTrue(...);
//	意思是不要使用assert，因为它并不可靠，建议使用
//	### BuildConfig会根据你的动作自动更新DEBUG的值
//	if(BuildConfig.DEBUG && boolParse){
	//do something for assert aim
//	}

[3.9] 错误: 找不到符号 Canvas.ALL_SAVE_FLAG
//	先删了其他的，只留:
//	Canvas.ALL_SAVE_FLAG

[3.10] API过时: FloatMath.floor
//	使用 Math.floor 代替 FloatMath.floor 即可

[3.11] 包重复:app:transformDexArchiveWithExternalLibsDexMergerForDebug FAILED
//	AGPBI: {"kind":"error","text":"Program type already present: 
//		com.loopj.android.http.AsyncHttpClient$3","sources":[{}],"tool":"D8"}
//	:app:transformDexArchiveWithExternalLibsDexMergerForDebug FAILED
//	v7->v4

//	执行命令：(也没用)
//	gradlew -q app:dependencies

//	排队: design
//	implementation('com.android.support:customtabs:27.1.0', {
//	    exclude group: 'com.loopj.android.http', module: 'AsyncHttpClient'
//	})

[3.12] AndroidManifest.xml重复
//	将重复的activity设置去掉一个



// 导入源码
[6.0] ----------------------------------
[6.1] Could not find method google() ...
Could not find method google() for arguments [] on repository container.
//	替换gradle-wrapper.properties里面
gradle-wrapper.properties

distributionUrl=https\://services.gradle.org/distributions/gradle-4.1-all.zip



/***********************************************************************/
/*************************** 参考笔记、网上找的，很乱. *****************/
/***********************************************************************/








