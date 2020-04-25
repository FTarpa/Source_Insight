
基础路径设置:
//basePath = 

/***********************************************************************/

//目录[Num][Ca]:
// 1. 数据通信
Save:node\android\base\Macro_base_Data.h \[1.1\] Activity-->Activity
Save:node\android\base\Macro_base_Data.h \[1.2\] Activity-->Fragment
Save:node\android\base\Macro_base_Data.h \[1.3\] Fragment-->Activity
Save:node\android\base\Macro_base_Data.h \[1.4\] Activity-->Service------(3)
Save:node\android\base\Macro_base_Data.h \[1.5\] Service-->Activity------(4)
Save:node\android\base\Macro_base_Data.h \[1.6\] AsyncTask-->Activity
Save:node\android\base\Macro_base_Data.h \[1.7\] GlobalScope-->Activity
Save:node\android\base\Macro_base_Data.h \[1.8\] Brocast-->Activity------(2)
Save:node\android\base\Macro_base_Data.h \[1.9\] Activity-->Brocast------(2)
Save:node\android\base\Macro_base_Data.h \[1.10\] eventBus / Rxbus
Save:node\android\base\Macro_base_Data.h \[1.11\] 
Save:node\android\base\Macro_base_Data.h \[1.12\] 
Save:node\android\base\Macro_base_Data.h \[1.14\] 
Save:node\android\base\Macro_base_Data.h \[1.15\] Class-->Class
Save:node\android\base\Macro_base_Data.h \[1.16\] Block-->Block
Save:node\android\base\Macro_base_Data.h \[1.17\] AssetsManger------------原生数据
Save:node\android\base\Macro_base_Data.h \[1.18\] 
Save:node\android\base\Macro_base_Data.h \[1.19\] 
Save:node\android\base\Macro_base_Data.h \[1.20\] 
//
Save:node\android\base\Macro_base_Data.h \[2.1\] 内存泄露
Save:node\android\base\Macro_base_Data.h \[2.2\] AsyncTask极限
Save:node\android\base\Macro_base_Data.h \[2.3\] 
Save:node\android\base\Macro_base_Data.h \[2.4\] 
Save:node\android\base\Macro_base_Data.h \[2.5\] 
Save:node\android\base\Macro_base_Data.h \[2.6\] 
Save:node\android\base\Macro_base_Data.h \[2.7\] 
Save:node\android\base\Macro_base_Data.h \[2.8\] 
Save:node\android\base\Macro_base_Data.h \[2.9\] 
Save:node\android\base\Macro_base_Data.h \[2.10\] 
Save:node\android\base\Macro_base_Data.h \[2.11\] 
Save:node\android\base\Macro_base_Data.h \[2.12\] 
// 其他标号
Save:Help\\DefaultFile\\Macro_Node_Num.h




[1.1] 
//	Bundle




[1.2] 




[1.3] 




[1.4] Activity-->Service
// 1) startService
//    不传参，或者只能传一次参数
Activity-->start-->command-->intent-->work(v)-->stop

// 2) bindService
Activity-->bind-->connection-->Binder-->work(v)-->unbind
-->bind-->unbind-->bind-->unbind

// 3) start + bind
Activity-->start-->bind-->unbind-->stop-->Destroy

// 4) 隐式Intent访问(远程Service)
Activity-->intent-->bind



[1.5] Service-->Activity
// 1) Binder + Listener
Service-->Binder-->work(v)-->listener==>task-->execute-->do(v)

// 2) BrocastReceiver
Service-->send
Activity-->Receiver-->register-->Action-->onReceive-->unregister

// 3) 远程Service(其他进程)
//	<service
//		android:process=":remote" >   
//      <intent-filter>  
//      <action android:name="com.example.servicetest.MyAIDLService"/>  
//      </intent-filter>  
//	</service>
Service-->AIDL-->Stub-->Binder
区别在于这个binder很少修改，xxService.Stub.asInterface(service), 转换成接口
    
// 4) 前台Service
//    notification
Service-->intent-->pending-->res-->notification-->startForeground-->Activity



[1.6] AsyncTask

//AsyncTask 优缺点
并发个数受限.
生命周期不同步



// 2) 
task-->listener-->success-->service-->



[1.7] GlobalScope-->Activity




[1.8] Brocast-->Activity
// 1) 标准广播
Brocast-->intent-->send-->Activity

// 2) 有序广播
Brocast-->intent-->Order-->send-->Activity-->Receiver-->abort

//本地广播机制
localBroadcastReceiver



[1.9] Activity-->Brocast
// 1) 动态注册
//    系统广播，添加权限
Activity-->Filter-->Action-->Brocast-->register-->unregister

// 2) 静态注册
//	<receiver >
//		<intent-filter>
//		<action android:name="android.intent.action.BOOT_COMPLETED"></action>
//		</intent-filter>
//	</receiver>
Brocast-->register



[1.10] 



[1.11] 




[1.12] 




[1.13] 




[1.14] 




[1.15] Class-->Class
// 1) abstract
//    抽象类  
abstract类中可以有abstract方法，也可以有非abstract方法
  非abstract类中不可以有abstract方法
abstract类不能使用new运算符创建对象

// 2) final
//    类不可继承，默认属性            (kt 默认)

// 3) enum
//    枚举类

// 4) open
//    类可继承，类默认是final的

// 5) annotation
//    注解类



[1.16] Block-->Block
// 1) private    
// 仅在同一个文件中可见

// 2) protected  
// 同一个文件中或子类可见            (子类默认仍是protected)

// 3) public     
// 所有调用的地方都可见            (默认可见性)

// 4) internal   
// 同一个模块中可见

// inner -- 内部类



[1.17] AssetsManger

//原生数据
AssetsManger.open()



[1.18] 




[1.19] 




[1.20] 



[2.1] 内存泄露
//内存泄露
android thread内存泄露
非静态匿名类未回收


[2.2] AsyncTask极限
AsyncTask用的是线程池机制，容量是128，最多同时运行5个core线程

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





