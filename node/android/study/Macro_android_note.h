
基础路径设置:
//basePath = 

/***********************************************************************/

//目录[Num][Ca]:
// 1. 
Save:node\android\study\Macro_android_note.h \[1.1\] 设置全屏显示
Save:node\android\study\Macro_android_note.h \[1.2\] 沉浸式状态栏
Save:node\android\study\Macro_android_note.h \[1.3\] 沉浸式状态栏全屏
Save:node\android\study\Macro_android_note.h \[1.4\] 启动模式
Save:node\android\study\Macro_android_note.h \[1.5\] 函数注释
Save:node\android\study\Macro_android_note.h \[1.6\] Observer
Save:node\android\study\Macro_android_note.h \[1.7\] 
Save:node\android\study\Macro_android_note.h \[1.8\] 
Save:node\android\study\Macro_android_note.h \[1.9\] 
Save:node\android\study\Macro_android_note.h \[1.10\] 
Save:node\android\study\Macro_android_note.h \[1.11\] 
Save:node\android\study\Macro_android_note.h \[1.12\] 
//
Save:node\android\study\Macro_android_note.h \[2.1\] 
Save:node\android\study\Macro_android_note.h \[2.2\] 
Save:node\android\study\Macro_android_note.h \[2.3\] 
Save:node\android\study\Macro_android_note.h \[2.4\] 
Save:node\android\study\Macro_android_note.h \[2.5\] 
Save:node\android\study\Macro_android_note.h \[2.6\] 
Save:node\android\study\Macro_android_note.h \[2.7\] 
Save:node\android\study\Macro_android_note.h \[2.8\] 
Save:node\android\study\Macro_android_note.h \[2.9\] 
Save:node\android\study\Macro_android_note.h \[2.10\] 
Save:node\android\study\Macro_android_note.h \[2.11\] 
Save:node\android\study\Macro_android_note.h \[2.12\] 
// 其他标号
Save:Help\\DefaultFile\\Macro_Node_Num.h




[1.1] 设置全屏显示
//设置全屏显示
android:theme="@android:style/Theme.Black.NotitleBar"
android:theme="@android:style/Theme.Black.NotitleBar.Fullscreen"

//设置全屏显示
<style name="AppTheme" parent="AppBaseTheme">
<item name="android:windowNoTitle">true</item>  <!--没有标题-->
</style>

//不包含状态栏
android:theme="@android :style/Theme.NoTitleBar.Fullscreen"


[1.2] 沉浸式状态栏

沉浸式状态栏


[1.3] 沉浸式状态栏全屏




[1.4] 启动模式
//Android启动模式
1. Standard 标准模式
2. SingleTop 栈顶复用模式
	被直接复用时，它的onCreate、onStart不会被系统调用
	一个新的方法 onNewIntent会被回调
3. SingleTask 栈内复用模式
	将存在栈中的Activity上面的其他Activity所有销毁，使它成为栈顶。
4. SingleInstance 单实例模式
	经常使用于系统中的应用
//使用方式
1. 
	<activity android:name="" android:launchMode="singleTask"/>
2. 动态指定方式，优先级要高
	intent.addFlags(Intent.FLAG_ACTIVITY_NEW_TASK);
限定范围：
	第一种方式无法为Activity直接指定 FLAG_ACTIVITY_CLEAR_TOP 标识，
	另外一种方式无法为Activity指定 singleInstance 模式。
//应用场景
1. SingleTask模式的运用场景
主页（Home页）
2. SingleTop模式的运用场景

//Flags
标记位既能够设定Activity的启动模式，如同上面介绍的，在动态指定启动模式，比方 FLAG_ACTIVITY_NEW_TASK 和 FLAG_ACTIVITY_SINGLE_TOP 等。
它还能够影响Activity 的运行状态 ，比方 FLAG_ACTIVITY_CLEAN_TOP 和 FLAG_ACTIVITY_EXCLUDE_FROM_RECENTS 等。
	以下介绍几个基本的标记位，切勿死记，理解几个就可以，须要时再查官方文档。
1. FLAG_ACTIVITY_NEW_TASK
作用是为Activity指定 “SingleTask”启动模式。跟在AndroidMainfest.xml指定效果同样。

2. FLAG_ACTIVITY_SINGLE_TOP
作用是为Activity指定 “SingleTop”启动模式，跟在AndroidMainfest.xml指定效果同样。

3. FLAG_ACTIVITY_CLEAN_TOP
具有此标记位的Activity，启动时会将与该Activity在同一任务栈的其他Activity出栈。一般与SingleTask启动模式一起出现。它会完毕SingleTask的作用。但事实上SingleTask启动模式默认具有此标记位的作用

4.FLAG_ACTIVITY_EXCLUDE_FROM_RECENTS
具有此标记位的Activity不会出如今历史Activity的列表中，使用场景：当某些情况下我们不希望用户通过历史列表回到Activity时，此标记位便体现了它的效果。它等同于在xml中指定Activity的属性：
android:excludeFromRecents="trure"



[1.5] 函数注释

	/**
	 * 创建二维码位图
	 *
	 * @param content 字符串内容
	 * @param size    位图宽&高(单位:px)
	 * @return
	 */



[1.6] Observer
// 被观察者
observable
// 订阅
subscribe 
// 监听
do
// 销毁
dispose()



[1.7] 




[1.8] 




[1.9] 




[1.10] 



[1.11] 




[1.12] 




[1.13] 




[1.14] 




[1.15] 



[2.1] 


[2.2] 


[2.3] 


[2.4] 


[2.5] 


[2.6] 


[2.7] 


[2.8] 


[2.9] 


[2.10] 



[2.11] 


[2.12] 


[2.13] 


[2.14] 


[2.15] 





