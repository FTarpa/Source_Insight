

dp、dip、dpi、sp、px

//dip、dp
都是 160dpi 铺满
DPI是“dot per inch”的缩写，每英寸像素数。

// py: 1080x2280
// 600*1080
// 150, 270

// 兼容布局:
res/values-large/layout.xml

//	<resources>
//	    <item name="main" type="layout">@layout/main_twopanes</item>
//	</resources>

res/values-sw600dp/layout.xml:




// Android抽象布局
// 1) <include />
//    <include layout="@layout/titlebar"/>


// 2) <merge />
  减少视图层级
//	<merge xmlns:android="http://schemas.android.com/apk/res/android">
//	    <Button/>
//	    <Button/>
//	</merge>


// 3) <ViewStub />
	需要时才会加载
	不支持 <merge /> 标签
//	<ViewStub
//	    android:id="@+id/stub_import"
//	    android:inflatedId="@+id/panel_import"
//	    android:layout="@layout/progress_overlay"
//	    android:layout_width="fill_parent"
//	    android:layout_height="wrap_content"
//	    android:layout_gravity="bottom" />

	设置加载：
((ViewStub) findViewById(R.id.stub_import)).setVisibility(View.VISIBLE);
// or
View importPanel = ((ViewStub) findViewById(R.id.stub_import)).inflate();



如果是纯色背景，尽量使用android的shape 自定义




//获取控件的大小
//
//	@Override
//	public void onWindowFocusChanged(boolean hasFocus) {
//	    super.onWindowFocusChanged(hasFocus);
//	    int height = titleLeftBtn.getHeight();
//	    int width = titleLeftBtn.getWidth();
//	}


//
//	ViewTreeObserver observer = layoutIndex.getViewTreeObserver();
//	observer.addOnPreDrawListener(new ViewTreeObserver.OnPreDrawListener() {
//	    public boolean onPreDraw() {
//	        if (!isMeasured) {
//		        int layoutHeight = layoutIndex.getMeasuredHeight();
//		        isMeasured = true;
//	        }
//	        return true;
//	    }
//	});







// 配置multiDex主类
https://www.jianshu.com/p/78f2e2d9484a

















