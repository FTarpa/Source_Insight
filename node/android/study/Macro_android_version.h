
基础路径设置:
//basePath = 

/***********************************************************************/

//目录[Num][Ca]:
// 1. 
Save:node\android\study\Macro_android_version.h \[1.1\] 
Save:node\android\study\Macro_android_version.h \[1.2\] J--4.1------16--
Save:node\android\study\Macro_android_version.h \[1.3\] J--4.2------17--
Save:node\android\study\Macro_android_version.h \[1.4\] J--4.3------18--
Save:node\android\study\Macro_android_version.h \[1.5\] K--4.4------19--
Save:node\android\study\Macro_android_version.h \[1.6\] K--4.4W-----20--
Save:node\android\study\Macro_android_version.h \[1.7\] L--5--------21--
Save:node\android\study\Macro_android_version.h \[1.8\] L--5.1------22--
Save:node\android\study\Macro_android_version.h \[1.9\] M--6--------23--
Save:node\android\study\Macro_android_version.h \[1.10\] N--7--------24--Drawables
Save:node\android\study\Macro_android_version.h \[1.11\] N--7.1------25--
Save:node\android\study\Macro_android_version.h \[1.12\] O--8--------26--Vector
Save:node\android\study\Macro_android_version.h \[1.13\] O--8.1------27--
Save:node\android\study\Macro_android_version.h \[1.14\] P--9--------28--network
Save:node\android\study\Macro_android_version.h \[1.15\] Q--10-------29--STORAGE
Save:node\android\study\Macro_android_version.h \[1.16\] 
Save:node\android\study\Macro_android_version.h \[1.17\] 
Save:node\android\study\Macro_android_version.h \[1.18\] 
Save:node\android\study\Macro_android_version.h \[1.19\] 
Save:node\android\study\Macro_android_version.h \[1.20\] kotlin
Save:node\android\study\Macro_android_version.h \[1.21\] 
Save:node\android\study\Macro_android_version.h \[1.22\] 
Save:node\android\study\Macro_android_version.h \[1.23\] 
Save:node\android\study\Macro_android_version.h \[1.24\] 
Save:node\android\study\Macro_android_version.h \[1.25\] 
Save:node\android\study\Macro_android_version.h \[1.26\] 
// 其他标号
Save:Help\\DefaultFile\\Macro_Node_Num.h






[1.1] 




[1.2] 




[1.3] 




[1.4] 




[1.5] 




[1.6] 




[1.7] 




[1.8] 




[1.9] 




[1.10] N--7--------24--Drawables
//Drawables
自定义Drawables类可以最终在XML中使用（仅在您的包中）。


[1.11] 




[1.12] O--8--------26--
//	VectorDrawable
添加了VectorDrawable自适应图




[1.13] 




[1.14] P--9--------28--network
// network
而当升级到Android API 28时，需要配置networkSecurityConfig 才能访问服务器，




[1.15] Q--10-------29--
// STORAGE
从Android Q(即 Android 10)开始，应用访问外部存储的私有目录（即Context.getExternalFilesDir()）
不需要申请READ_EXTERNAL_STORAGE or WRITE_EXTERNAL_STORAGE权限。
同时，正常情况下，就算应用有申请READ_EXTERNAL_STORAGE or WRITE_EXTERNAL_STORAGE权限，
也只能访问外部存储的私有目录，
若是访问了除了私有目录之外的其他外部储存，会抛出FileNotFoundException异常


//外部存储空间被分为两部分：
//	公共目录：
//	公共目录下的文件在APP卸载后，不会删除。
Downloads、Documents、Pictures 、DCIM、Movies、Music、Ringtones等
APP可以通过SAF(System Access Framework)、MediaStore接口访问其中的文件。
//	App-specific目录
//	APP卸载后，数据会清除。
APP的私密目录，APP访问自己的App-specific目录时无需任何权限。


Android Q规定了APP有两种外部存储空间视图模式：Legacy View、Filtered View。
//	Filtered View
App可以直接访问App-specific目录，但不能直接访问App-specific外的文件。
访问公共目录或其他APP的App-specific目录，只能通过 MediaStore 、 SAF 、或者其他APP提供的ContentProvider、FileProvider等访问。
//	Legacy View
兼容模式。与Android Q以前一样，申请权限后App可访问外部存储，拥有完整的访问权限。

MediaStore:
// APP应该将想要保留的文件通过MediaStore接口保存到公共目录下
SAF:

参考:
https://blog.csdn.net/irizhao/article/details/94121551






[1.16] 




[1.17] 




[1.18] 




[1.19] 




[1.20] kotlin
//kotlin
//	kotlin 1.3.21 
kotlin-stdlib-jre7 支持库更新为 kotlin-stdlib-jdk7



[1.21] 




[1.22] 




[1.23] 




[1.24] 




[1.25] 




[1.26] 



