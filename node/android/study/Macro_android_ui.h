
基础路径设置:
basePath = E:\Desktop\SGIT\API_TEST
//basePath = D:\project\Android\A_work\ZY_Home


/***********************************************************************/
//目录[Num][Ca]:
// 1.View
Save:node\android\study\Macro_android_ui.h \[1.1\] TextView
Save:node\android\study\Macro_android_ui.h \[1.2\] EditText
Save:node\android\study\Macro_android_ui.h \[1.3\] Button、ToggleButton
Save:node\android\study\Macro_android_ui.h \[1.4\] ImageButton
Save:node\android\study\Macro_android_ui.h \[1.5\] RadioButton/RadioGroup
Save:node\android\study\Macro_android_ui.h \[1.6\] Spinner
Save:node\android\study\Macro_android_ui.h \[1.7\] CheckBox
Save:node\android\study\Macro_android_ui.h \[1.8\] ImageView
Save:node\android\study\Macro_android_ui.h \[1.9\] ProgressBar
Save:node\android\study\Macro_android_ui.h \[1.10\] TimePicker
Save:node\android\study\Macro_android_ui.h \[1.11\] ListView
Save:node\android\study\Macro_android_ui.h \[1.12\] Tab
Save:node\android\study\Macro_android_ui.h \[1.13\] GridView
Save:node\android\study\Macro_android_ui.h \[1.14\] ScrollView
Save:node\android\study\Macro_android_ui.h \[1.15\] ViewPager
Save:node\android\study\Macro_android_ui.h \[1.16\] Adapter
Save:node\android\study\Macro_android_ui.h \[1.17\] fragment
Save:node\android\study\Macro_android_ui.h \[1.18\] SeekBar
Save:node\android\study\Macro_android_ui.h \[1.19\] SurfaceView
Save:node\android\study\Macro_android_ui.h \[1.20\] View
Save:node\android\study\Macro_android_ui.h \[1.21\] Animator ---------------------约束布局
Save:node\android\study\Macro_android_ui.h \[1.22\] MapView
Save:node\android\study\Macro_android_ui.h \[1.23\] ExpandableList
Save:node\android\study\Macro_android_ui.h \[1.24\] TextSwitch、ImageSwitch
Save:node\android\study\Macro_android_ui.h \[1.25\] Chronometer
Save:node\android\study\Macro_android_ui.h \[1.26\] RanTingBar
Save:node\android\study\Macro_android_ui.h \[1.27\] WdbView
Save:node\android\study\Macro_android_ui.h \[1.28\] VideoView
Save:node\android\study\Macro_android_ui.h \[1.29\] ZoomCtrls
Save:node\android\study\Macro_android_ui.h \[1.30\] AutoCompeteTextView
Save:node\android\study\Macro_android_ui.h \[1.31\] TimerPicker
Save:node\android\study\Macro_android_ui.h \[1.32\] DatePicker
Save:node\android\study\Macro_android_ui.h \[1.33\] DigtalClock
Save:node\android\study\Macro_android_ui.h \[1.34\] AnalogClock
Save:node\android\study\Macro_android_ui.h \[1.35\] LayoutView
Save:node\android\study\Macro_android_ui.h \[1.36\] RelativeView
Save:node\android\study\Macro_android_ui.h \[1.37\] 
//2.Layout
//  third view
Save:node\android\study\Macro_android_ui.h \[2.1\] LinearLayout
Save:node\android\study\Macro_android_ui.h \[2.2\] RelativeLayout
Save:node\android\study\Macro_android_ui.h \[2.3\] TableLayout
Save:node\android\study\Macro_android_ui.h \[2.4\] FrameLayout
Save:node\android\study\Macro_android_ui.h \[2.5\] AbsoluteLayout
Save:node\android\study\Macro_android_ui.h \[2.6\] GridLayout
Save:node\android\study\Macro_android_ui.h \[2.7\] ConstraintLayout--------------约束布局
Save:node\android\study\Macro_android_ui.h \[2.8\] SwipeRefreshLayout------------官方下拉刷新
Save:node\android\study\Macro_android_ui.h \[2.9\] 
Save:node\android\study\Macro_android_ui.h \[2.10\] AppBarLayout + CoordinatorLayout
Save:node\android\study\Macro_android_ui.h \[2.11\] RecyclerView-----------------滚动收缩
Save:node\android\study\Macro_android_ui.h \[2.12\] Banner-----------------------轮播
Save:node\android\study\Macro_android_ui.h \[2.13\] 
Save:node\android\study\Macro_android_ui.h \[2.14\] TabLayout--导航栏
Save:node\android\study\Macro_android_ui.h \[2.15\] fresco--SimpleDraweeView-----图片加载
Save:node\android\study\Macro_android_ui.h \[2.16\] lottie--LottieAnimationView--json动画
Save:node\android\study\Macro_android_ui.h \[2.17\] 
Save:node\android\study\Macro_android_ui.h \[2.18\] CardView------------------卡片式控件
Save:node\android\study\Macro_android_ui.h \[2.19\] PathView--svg动画
Save:node\android\study\Macro_android_ui.h \[2.20\] Lottie动画
Save:node\android\study\Macro_android_ui.h \[2.21\] RTL
Save:node\android\study\Macro_android_ui.h \[2.22\] Color
Save:node\android\study\Macro_android_ui.h \[2.23\] Size
Save:node\android\study\Macro_android_ui.h \[2.24\] InputMethod
Save:node\android\study\Macro_android_ui.h \[2.25\]  
Save:node\android\study\Macro_android_ui.h \[2.26\] 
// 其他标号
Save:Help\\DefaultFile\\Macro_Node_Num.h




[1.1] TextView

<TextView 
    android:layout_width="wrap_content"
    android:layout_height="wrap_content"
    android:layout_centerHorizontal="true"
    android:visibility="gone"
    android:layout_marginTop="13dp"
    android:textColor="@color/white"
    android:textSize="@dimen/actionbar_text" />


[1.2] EditText
<EditText
    android:id="@+id/edit_task_name"
    android:layout_width="180dp"
    android:layout_height="42dp"
    android:layout_gravity="center_horizontal"
    android:background="@drawable/dev_register_btn"
    android:gravity="center"
    android:hint="@string/clock_add_name"
    android:textColor="@color/jxj_txt_color"
    android:textColorHint="@color/jxj_txt_color"
    android:textSize="@dimen/textsize_low_1" />

<EditText
	android:id="@+id/edit_name"
	android:layout_width="wrap_content"
	android:layout_height="36dp"
	android:background="@drawable/register_input_bg"
	android:ems="10"
	android:gravity="center"
	android:inputType="text"
	android:maxLength="16"
	android:padding="0dp"
	android:paddingLeft="22dp"
	android:singleLine="true"
	android:textColor="@color/font_color"
	android:textSize="@dimen/textsize_low_1" >

	<requestFocus />
</EditText>




[1.3] Button
<Button
    android:id="@+id/step_konw_btn_smatch"
    android:layout_width="match_parent"
    android:layout_height="48dp"
    android:text="@string/str_brand_btn" />




[1.4] ImageButton
<ImageButton
    android:id="@+id/gear_close"
    android:layout_width="@dimen/panel_gear_btn_height"
    android:layout_height="@dimen/panel_gear_btn_height"
    android:layout_gravity="center|right"
    android:background="@drawable/fun_gear_open_selector"
    android:contentDescription="@string/image_description"
    android:focusable="true" />

<ImageButton
	android:id="@+id/imgbtn_power"
	android:layout_width="30dp"
	android:layout_height="30dp"
	android:layout_marginLeft="25dp"
	android:layout_marginTop="20dp"
	android:background="@null"
	android:contentDescription="@string/image_description"
	android:scaleType="centerInside"
	android:src="@drawable/power_true" />




[1.5] RadioButton/RadioGroup
<RadioGroup
    android:id="@+id/radioGroup"
    android:layout_width="match_parent"
    android:layout_height="@dimen/custom_voice_tab_height"
    android:background="@drawable/clock_chk_left"
    android:gravity="center_vertical"
    android:orientation="horizontal" >

    <RadioButton
        android:id="@+id/radio_timer"
        android:layout_width="0dp"
        android:layout_height="wrap_content"
        android:layout_weight="1"
        android:button="@null"
        android:checked="true"
        android:gravity="center"
        android:text="@string/clock_timer"
        android:textColor="@color/main_textcolor"
        android:textSize="@dimen/textsize_low_1" >
    </RadioButton>

    <RadioButton
        android:id="@+id/radio_task"
        android:layout_width="0dp"
        android:layout_height="wrap_content"
        android:layout_weight="1"
        android:button="@null"
        android:gravity="center"
        android:text="@string/clock_task"
        android:textColor="@color/main_textcolor"
        android:textSize="@dimen/textsize_low_1" >
    </RadioButton>

</RadioGroup>




[1.6] Spinner
<Spinner
    android:id="@+id/personalkey_spinner"
    android:layout_width="155dp"
    android:layout_height="35dp"
    android:layout_alignParentRight="true"
    android:layout_marginRight="20dp"
    android:layout_marginTop="50dp"
    android:ellipsize="marquee" 
    android:fadingEdge="none"
    android:focusable="true"
    android:focusableInTouchMode="true"
    android:marqueeRepeatLimit="marquee_forever"
    android:scrollHorizontally="true"
    android:singleLine="true" />




[1.7] CheckBox
<CheckBox
    android:id="@+id/chb_mon"
    style="@style/check_clock_date"
    android:text="@string/clock_date_mon"
    android:textColor="@color/white"
    android:textSize="@dimen/textsize_default" />

<CheckBox
	android:id="@+id/fun_color_state"
	android:layout_width="88dp"
	android:layout_height="38dp"
	android:background="@drawable/fun_color_state_selector"
	android:button="@null"
	android:paddingRight="0dp"
	android:text=""
	android:textColor="@color/login_text"
	android:textSize="@dimen/textsize_high_1" />




[1.8] ImageView
<ImageView
    android:id="@+id/about_return"
    android:layout_width="50dp"
    android:layout_height="50dp"
    android:visibility="gone"
    android:src="@drawable/main_return"/>




[1.9] ProgressBar
<ProgressBar
    android:id="@+id/pb_load"
    android:layout_width="wrap_content"
    android:layout_height="wrap_content"
    android:layout_centerInParent="true" />

//ProgressBar特殊？
直接在线程中更新UI？
调用了一个refreshProgress


[1.10] TimePicker
<TimePicker
    android:id="@+id/timePicker"
    android:layout_width="wrap_content"
    android:layout_height="wrap_content"
    android:layout_gravity="center" />



[1.11] ListView

<ListView
	android:id="@+id/alarm_list"
	android:layout_width="match_parent"
	android:layout_height="match_parent"
	android:cacheColorHint="@android:color/transparent"
	android:divider="@color/alarmimage_list_divider"
	android:dividerHeight="2px"
	android:fadingEdge="none"
	android:scrollbars="none" />




[1.12] 




[1.13] GridView

<GridView
	android:id="@+id/grid_alarm"
	android:layout_width="match_parent"
	android:layout_height="match_parent"
	android:descendantFocusability="blocksDescendants"
	android:fadingEdge="none"
	android:gravity="center"
	android:horizontalSpacing="16dp"
	android:numColumns="2"
	android:padding="2dp"
	android:scrollbars="none"
	android:stretchMode="columnWidth"
	android:verticalSpacing="10dp" >
</GridView>




[1.14] ScrollView
<ScrollView xmlns:android="http://schemas.android.com/apk/res/android"
    android:id="@+id/scroll_clock_add_main"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    android:background="@drawable/custom_voice_bg"
    android:scrollbars="none" >
    
</ScrollView>


//NestedScrollView



[1.15] ViewPager

<android.support.v4.view.ViewPager
	android:id="@+id/view_pager"
	android:layout_width="fill_parent"
	android:layout_height="0dp"
	android:layout_weight="4"
	android:paddingBottom="40dp" />




[1.16] Adapter
//
FragmentPagerAdapter类
//
FragmentSatetePagerAdapter 的实现将只保留当前页面，



[1.17] fragment
// fragment
if(mContext is FragmentActivity){
    val c = mContext as FragmentActivity
    c.getSupportFragmentManager().beginTransaction().add(R.id.frame_file_layout, fragment).commit()
}



[1.18] SeekBar
<SeekBar
    android:id="@+id/dimming_seekbar"
    android:layout_width="match_parent"
    android:layout_height="wrap_content"
    android:background="@drawable/progress_buffering"
    android:padding="0px"
    android:progress="0"
    android:progressDrawable="@drawable/seekbar_style"
    android:thumb="@drawable/seekbar_thumb"
    android:thumbOffset="0dip" />




[1.19] SurfaceView

<SurfaceView
	android:id="@+id/preview_view"
	android:layout_width="fill_parent"
	android:layout_height="fill_parent"
	android:layout_gravity="center" />




[1.20] View
<View
    android:layout_width="match_parent"
    android:layout_height="1px"
    android:background="#ffffff" />



[1.21] Animator 
// Animator
Animator animator = AnimatorInflater.loadAnimator(this, R.animator.scaleX);
animator.setTarget(view);
animator.start();


<?xml version="1.0" encoding="utf-8"?>
<objectAnimator xmlns:android="http://schemas.android.com/apk/res/android"
    android:duration="1000"
    android:propertyName="scaleX"
    android:valueFrom="1.0"
    android:valueType="floatType"
    android:valueTo="2.0"/>



// 三种动画模式
// 1)view animation  补间动画
XML文件的根元素可以 为<alpha>,<scale>,<translate>,<rotate>,interpolator 元素
或<set>(表示以上几个动画的集合，set可以嵌套)

ImageView si = (ImageView)findViewById(R.id.spaceshipImage);
Animation hj = AnimationUtils.loadAnimation(this, R.anim.hyperspace_jump);
si.startAnimation(hj);


// 2)drawable animation  帧动画
<animation-list xmlns:android="http://schemas.android.com/apk/res/android"
    android:oneshot="true">
    <item android:drawable="@drawable/rocket_thrust1" android:duration="200" />
    <item android:drawable="@drawable/rocket_thrust2" android:duration="200" />
    <item android:drawable="@drawable/rocket_thrust3" android:duration="200" />
</animation-list>

imageView = (ImageView) findViewById(R.id.imageView1);
imageView.setBackgroundResource(R.drawable.drawable_anim);
anim = (AnimationDrawable) imageView.getBackground();
anim.stop();
anim.start();


// 3)property animation  属性动画
// ValueAnimator
ValueAnimator animation = ValueAnimator.ofFloat(0f, 1f);
animation.setDuration(1000);
animation.addUpdateListener(new AnimatorUpdateListener() {
    @Override
    public void onAnimationUpdate(ValueAnimator animation) {
        Log.i("update", ((Float) animation.getAnimatedValue()).toString());
    }
});
animation.setInterpolator(new CycleInterpolator(3));
animation.start();


// ObjectAnimator
ObjectAnimator oa=ObjectAnimator.ofFloat(tv, "alpha", 0f, 1f);
oa.setDuration(3000);
oa.start();



[1.22] 




[1.23] 




[1.24] 




[1.25] 




[1.26] 



[1.27] 




[1.28] 




[1.29] 




[1.30] 





[1.31] 




[1.32] 




[1.33] 




[1.34] 




[1.35] 




[1.36] 



[1.37] 




[1.38] 




[1.39] 




[1.40] 




[2.1] LinearLayout
<LinearLayout xmlns:android="http://schemas.android.com/apk/res/android"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    android:background="@drawable/alarm_image_bg"
    android:orientation="vertical" >

</LinearLayout>



[2.2] RelativeLayout
<RelativeLayout xmlns:android="http://schemas.android.com/apk/res/android"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    android:background="@drawable/about_bg"
    android:orientation="vertical" >

</RelativeLayout>



[2.3] TableLayout
<TableLayout
    android:id="@+id/loginLayoutId"
    android:layout_width="fill_parent"
    android:layout_height="fill_parent"
    android:gravity="center" >

    <TableRow
        android:layout_width="fill_parent"
        android:layout_height="fill_parent"
        android:layout_marginTop="-20dp"
        android:gravity="center" >

        <TextView
            android:id="@+id/textUserName" />

    </TableRow>
</TableLayout>



[2.4] FrameLayout
<FrameLayout xmlns:android="http://schemas.android.com/apk/res/android"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
        android:background="@drawable/custom_voice_bg"
    android:orientation="vertical" >
    
</FrameLayout>



[2.5] 



[2.6] 



[2.7] ConstraintLayout--------------约束布局
<androidx.constraintlayout.widget.ConstraintLayout xmlns:android="http://schemas.android.com/apk/res/android"
    xmlns:app="http://schemas.android.com/apk/res-auto"
    xmlns:tools="http://schemas.android.com/tools"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    app:layout_behavior="@string/appbar_scrolling_view_behavior"
    tools:context=".MainActivity"
    tools:showIn="@layout/activity_main">

</androidx.constraintlayout.widget.ConstraintLayout>



[2.8] SwipeRefreshLayout------------官方下拉刷新
<androidx.swiperefreshlayout.widget.SwipeRefreshLayout xmlns:android="http://schemas.android.com/apk/res/android"
    xmlns:tools="http://schemas.android.com/tools"
    android:id="@+id/swipe_refresh"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    tools:context=".module.tree.TreeFragment">

    <androidx.recyclerview.widget.RecyclerView
        android:id="@+id/recycler_view"
        android:layout_width="match_parent"
        android:layout_height="match_parent" />

</androidx.swiperefreshlayout.widget.SwipeRefreshLayout>




[2.9] 




[2.10] AppBarLayout + CoordinatorLayout
// 滚动布局
androidx.coordinatorlayout.widget.CoordinatorLayout
// 滚动区域
androidx.core.widget.NestedScrollView

// 收缩布局
com.google.android.material.appbar.AppBarLayout
// 收缩区域
com.google.android.material.appbar.CollapsingToolbarLayout
// 
androidx.appcompat.widget.Toolbar




[2.11] RecyclerView-----------------滚动收缩
//RecyclerView
androidx.recyclerview.widget.RecyclerView





[2.12] Banner-----------------------轮播
//Banner
com.youth.banner.Banner


[2.13] 



[2.14] TabLayout--导航栏
// 导航栏
com.google.android.material.tabs.TabLayout
// 导航项
com.google.android.material.tabs.TabItem
// TabLayout
android.support.design.widget.TabLayout




[2.15] fresco--SimpleDraweeView       图片加载
// Facebook 出品的一个强大的图片加载组件
com.facebook.drawee.view.SimpleDraweeView
//
// dependencies
//		implementation 'com.facebook.fresco:fresco:0.9.0'


[2.16] 
lottie--LottieAnimationView--json动画
// json动画
com.airbnb.lottie.LottieAnimationView
//
com.joanzapata.iconify.widget.IconTextView




[2.17] 


	
[2.18] CardView
androidx.cardview.widget.CardView
	


[2.19] PathView--svg动画
// svg动画
com.eftimoff.androipathview.PathView



	
[2.20] Lottie
<com.airbnb.lottie.LottieAnimationView
	android:id="@+id/animation_view"
	android:layout_width="wrap_content"
	android:layout_height="wrap_content"
	app:lottie_fileName="data.json"
	app:lottie_loop="true"
	app:lottie_autoPlay="true"/>




[2.21] RTL
//
android:supportsRtl="true"
//
在App中用start、end来替代left、right：
//
如果用4.2及以上编译（ targetSdkVersion或者minSdkVersion大于等于17），则start、end来替代left、right，
例如：android:paddingLeft 应改为android:paddingStart
如果用4.2以下编译（ targetSdkVersion或者minSdkVersion小于等于16），两者都必须使用，
例如：需要同时使用android:paddingLeft 和android:paddingStart

//
android:layoutDirection
android:textDirection
android:textAlignment




[2.22] Color
// 推荐几种颜色+背景色(标题)
红色：#B45B3E+ 白字 #FFFFFF  ---
绿色：#00B271+ 黄字 #FFFF00 /白
蓝色：#336699+ 银字 #E6E8FA /白
紫色：#8080C0+ 青字 #00FFFF /白 /黄
白色：#F1FAFA+ 蓝字 #70DB93  ---
灰色：#CDCDCD+ 青字 #93DB70

// 推荐几种颜色+背景色(正文)
红色：#FF7F00 + 紫字      #9F5F9F
橙色：#F0dAD2 + 黑字 #000000  ---
黄色：#FbFbEA + 黑字 #000000  ---
绿色：#9F5F9F + 红字 #FF00FF
紫色：#9932CD + 蓝字 #5F9F9F
白色：#D7fff0 + 黑字 #000000  ---
黑色：#00141f + 蓝字 #D5F3F4



//这个是正确使用方式
textView.setTextColor(getResources().getColor(R.color.colorAccent));
//下面这个报错
textView.setTextColor(R.color.colorAccent);




[2.23] Size
// 点开谷歌最新对安卓的UI设计规范
http://developer.android.com/intl/zh-cn/design/style/metrics-grids.html



[2.24] InputMethod
// 自动弹出输入法
//   终极解决方案-亲测有效 在 初始化view之后把下面代码copy进你的程序中即可.
Application.getInstance().runOnMainThread({
    val imm = context.getSystemService(Context.INPUT_METHOD_SERVICE) as InputMethodManager
    imm.toggleSoftInput(InputMethodManager.SHOW_IMPLICIT, InputMethodManager.HIDE_NOT_ALWAYS)
},200)


// activity 中打开 + 关闭
private fun openInputMethod() {
    //弹出时有效
    val imm = mContext.getSystemService(Context.INPUT_METHOD_SERVICE) as InputMethodManager
    if(!imm.isActive){
        imm.toggleSoftInput(InputMethodManager.SHOW_FORCED, InputMethodManager.HIDE_NOT_ALWAYS)
    }
}

private fun closeInputMethod( v: View) {
    //隐藏虚拟键盘
    val imm = mContext.getSystemService(Context.INPUT_METHOD_SERVICE) as InputMethodManager
    if( imm.isActive){
        imm.hideSoftInputFromWindow(v.applicationWindowToken, 0)
    }
}

// View 中打开 + 关闭
fun openInputMethod(row: Int) {
    mInputRow = row
    // 默认字符
    nowString = mHTextPresenter.getInputText( mDataList, row )
    // 打开输入法
    mInputMethodManager?.showSoftInput(this, 0)
}
private fun closeInputMethod() {
    // 关闭
    mInputMethodManager?.hideSoftInputFromWindow(this.windowToken, 0)
}


// 输入法是否弹出 (可行? )
 if (getWindow().getAttributes().softInputMode == WindowManager.LayoutParams.SO ...



// TextWatcher
mTv.addTextChangedListener(new TextWatcher(){})

// Editable

// 自定义输入法
https://blog.csdn.net/nicolelili1/article/details/78753976
https://blog.csdn.net/nicolelili1/article/details/78723259

//
BROADCAST_ACTION

// 自定义 view
https://blog.csdn.net/qq819715035/article/details/78752626



[2.25] 


[2.26] 
	











