
基础路径设置:
Inward   = False
Backward = 0
Save:node\android\project\Macro_as_demo.h
\\
demoPath = D:\project\Android\Demo\android_base
demo:\\
basePath = D:\project\Android\Demo\wanandroid_kotlin
base:\\



AsFile:base:



// Coroutine -- 协程
//	launch - 创建协程，返回一个 Job 对象
//	async  - 创建带返回值的协程，返回的是 Deferred 类
//	withContext - 不创建新的协程，在指定协程上运行代码块
//	runBlocking - 不是 GlobalScope 的 API，可以独立使用，区别是 runBlocking 里面的 delay 会阻塞线程，而 launch 创建的不会
//
// GlobalScope
//	    GlobalScope.launch(){}
//
// runBlocking 
//	 import kotlinx.coroutines.runBlocking
//	 fun firstCoroutine() = runBlocking {}
//
// suspend 
//	 import kotlinx.coroutines.GlobalScope
//	 import kotlinx.coroutines.delay
//	 import kotlinx.coroutines.launch
//	 suspend fun firstCoroutine() {}

//Coroutine--job
//   private val uiContext: CoroutineContext = UI
//   private val bgContext: CoroutineContext = CommonPool



// object
//  1、对象表达式--匿名对象
//  2、对象声明----静态类(object xxx, 类似 static class)
//
//	kotlin中调用
//	    MyObject.a()
//	java中调用
//	 	MyObject.INSTANCE.a();
// 


//companion object -- 伴生对象
//  常量集合, 解决kotlin中没有static
//
//	kotlin 中调用
//		b()
//	java 中调用
//		DemoManager.Companion.b();


//constructor -- 构造函数
//  可以带默认值
//
//	class Runnan constructor(var one:Int = 0,val two:String = "two"){
//	    init {
//	        println("one:$one///two:$two")
//	    }
//	    
//	    constructor(three:Int) : this(){
//	        println("three:$three")
//	    }
//	    
//	    constructor( one:Int = 1, two: String = "two", four:Int = 3):this(one, two){
//	        println("one:$one///two:$two///four:$four")
//	    }
//	}



// 类
//   嵌套类
//		class Outer {
//		    class Nested {
//		        fun foo() = 2
//		    }
//		}
//	    val demo = Outer.Nested().foo() // == 2
//   内部类
//		class Outer {                   //
//		    private val bar: Int = 1    //
//		    inner class Inner {         //
//		        fun foo() = bar         //
//		    }                           //
//		}                               //
//		val demo = Outer().Inner().foo() // == 1
//		val demo = Outer().Inner().this@Outer
//		super@FilledRectangle.draw()
//   匿名内部类
//		window.add(object : Adapter() {})
//   函数式接口
//      val listener = ActionListener { println("clicked") }



//	类的修饰符
//classModifier: 类属性修饰符，标示类本身特性。
//		abstract    // 抽象类  
//		final       // 类不可继承，默认属性
//		enum        // 枚举类
//		open        // 类可继承，类默认是final的
//		annotation  // 注解类
//
//accessModifier: 访问权限修饰符
//		private    // 仅在同一个文件中可见
//		protected  // 同一个文件中或子类可见
//		public     // 所有调用的地方都可见
//		internal   // 同一个模块中可见



//FlowLayout
//  流式布局（标签布局）


//MutableList
//  是一个接口和通用的元素


// constructor, init
//	 构造函数


//run,let,apply,with


//val,var,get,set
//    override var name: String
//        get() = "biao"
//        set(value) {}
//lateinit val/var
//    非空,延迟赋值


//relay、yield


//const  
//	kotlin 中调用
//		println("constAttri:$constAttri")
//		println("constAttri:${ObjectClass.constAttri}")
//		println("constAttri:${AttriKotlin.constAttri}")


//data class


//interface
//  在接口中属性的修饰符只能用public，eg:
interface Ikotlin{
    public var name:String
    private var age:Int//Abstract property in an interface cannot be private
    protected var sex:String//Modifier 'protected' is not applicable inside 'interface
    internal var birth:Int//Modifier 'internal' is not applicable inside 'interface'
}
