
����·������:
//basePath = F:\9820e
//basePath = D:\SVN\app\Calculator
//basePath = \\192.168.2.115\xiaoj\9820e\idh.code

/***********************************************************************/

//Ŀ¼[Num][Ca]:
Save:node\android\app\Macro_App_Calculator.h \[1.1\] Calculator app·��
Save:node\android\app\Macro_App_Calculator.h \[1.2\] Android.mk ���ÿ�
Save:node\android\app\Macro_App_Calculator.h \[1.3\] gradle �汾����
Save:node\android\app\Macro_App_Calculator.h \[1.4\] ��Ӷ��res
Save:node\android\app\Macro_App_Calculator.h \[1.5\] res error, ̫���˲���
Save:node\android\app\Macro_App_Calculator.h \[2.1\] �ļ�Ŀ¼






[1.1] Calculator app·��
����·������:
basePath = D:\SVN\app\Calculator


[1.2] Android.mk ���ÿ�
//1) �鿴���ÿ�:
./Android.mk
//	LOCAL_STATIC_JAVA_LIBRARIES := libarity android-support-v4 guava

//2) �ƶ�jar:
cp \\192.168.2.115\xiaoj\9820\idh.code\out\target\common\obj\JAVA_LIBRARIES\libarity_intermediates\javalib.jar libs\libarity.jar
cp \\192.168.2.115\xiaoj\9820\idh.code\out\target\common\obj\JAVA_LIBRARIES\android-support-v4_intermediates\javalib.jar libs\android-support-v4.jar
cp \\192.168.2.115\xiaoj\9820\idh.code\out\target\common\obj\JAVA_LIBRARIES\guava_intermediates\javalib.jar libs\guava.jar
	
//3) ����jar: ����λ�ò���... ����Ҫȥ�����һ��...
build.gradle
//	dependencies {
//		compile files("libarity.jar")
//		compile files("android-support-v4")
//		compile files("guava")
//		compile files("arity-2.1.2.jar")
//		compile "com.android.support:support-v4:+"
//	}
��Ϊ: 
//    implementation fileTree(dir: 'libs', include: ['*.jar'])


[1.3] gradle �汾����
//1) gradle-wrapper.properties
//	����: Could not find method google() for arguments [] on repository container.
gradle\wrapper\gradle-wrapper.properties
//distributionUrl=https\://services.gradle.org/distributions/gradle-4.1-all.zip
��Ϊ:
//distributionUrl=https\://services.gradle.org/distributions/gradle-4.6-all.zip

//2) Could not resolve all files for configuration...
//	����: 
//		* What went wrong:
//		Could not resolve all files for configuration ':_internal_aapt2_binary'.
//		> Could not find com.android.tools.build:aapt2:3.2.0-4818971.
build.gradle
//	allprojects {
//	    repositories {
//	        google()
//	        jcenter()
//	    }
//	}


[1.4] ��Ӷ��res
//1) Move:
frameworks/base/core/res/res/
//	 TO:
./res_core

//2) ��res_core
build.gradle
//	android {
//		sourceSets {
//	        main {
//	            res.srcDirs = ["res"]
//	            res.srcDirs = ["res_core"]
//	        }
//		}
//	}
//	����:
//  res.srcDirs += ['res', 'res_core']


[1.5] res error, ̫���˲���
res_core\values\styles.xml
//	����: AAPT: error: invalid resource type 'attr' for parent of style.
//?? <item type =��attr��name =��my_attr��> @ color / pink </ item>



[2.1] �ļ�Ŀ¼

AndroidManifest.xml
res\layout\activity_main.xml
vendor\sprd\UniverseUI\ThemeRes\HelloColor\CalculatorRes\theme_values.xml


·��: sprdcalculator
packages\apps\Calculator\src\com\sprd\sprdcalculator\MainActivity.java
packages\apps\Calculator\src\com\sprd\sprdcalculator\method\Plus.java
packages\apps\Calculator\src\com\sprd\sprdcalculator\state\State.java
packages\apps\Calculator\src\com\sprd\sprdcalculator\Utils.java


��Դ: Calculator
packages\apps\Calculator\AndroidManifest.xml
packages\apps\Calculator\res\layout\activity_main.xml
vendor\sprd\UniverseUI\ThemeRes\HelloColor\CalculatorRes\theme_values.xml




·��: sprdcalculator
packages\apps\Calculator\src\com\sprd\sprdcalculator\CalculatorEditText.java
packages\apps\Calculator\src\com\sprd\sprdcalculator\LogUtils.java
packages\apps\Calculator\src\com\sprd\sprdcalculator\MainActivity.java
packages\apps\Calculator\src\com\sprd\sprdcalculator\method\Divide.java
packages\apps\Calculator\src\com\sprd\sprdcalculator\method\ICalculator.java
packages\apps\Calculator\src\com\sprd\sprdcalculator\method\Minus.java
packages\apps\Calculator\src\com\sprd\sprdcalculator\method\Multiply.java
packages\apps\Calculator\src\com\sprd\sprdcalculator\method\Percent.java
packages\apps\Calculator\src\com\sprd\sprdcalculator\method\Plus.java
packages\apps\Calculator\src\com\sprd\sprdcalculator\state\CalculatorContext.java
packages\apps\Calculator\src\com\sprd\sprdcalculator\state\State.java
packages\apps\Calculator\src\com\sprd\sprdcalculator\Utils.java


��Դ: Calculator
packages\apps\Calculator\AndroidManifest.xml
packages\apps\Calculator\res\layout\activity_main.xml
vendor\sprd\UniverseUI\ThemeRes\HelloColor\CalculatorRes\theme_values.xml


/***********************************************************************/
/******************************* code **********************************/
/***********************************************************************/

Main:
packages\apps\Calculator\src\com\sprd\sprdcalculator\MainActivity.java





/***********************************************************************/
/*************************** �ο��ʼǡ������ҵģ�����. *****************/
/***********************************************************************/

CalculatorEditText  
CalculatorExpressionTokenizer  ���滻���ʽ��ֵת������תֵ
CalculatorExpressionEvaluator   ��������ʽ
CalculatorExpressionBuilder   ��Լ�����ʽ����������߼���


//Լ�����ʽ����������߼���

mFormulaEditText.setEditableFactory(mFormulaEditableFactory);

//������ʽ��

mFormulaEditText.addTextChangedListener(mFormulaTextWatcher);

//������ʽ��enterʱ
mFormulaEditText.setOnKeyListener(mFormulaOnKeyListener);

//����
mFormulaEditText.setOnTextSizeChangeListener(this);

//����ɾ���I
mDeleteButton.setOnLongClickListener(this);  



sprdcalculator






�����Դ���и�java�ļ���һ����Ҫ��˵������������Ϊ������
(1)Calculator:
   ������Ψһ��Activity�����û�����������һ����ֱ�����Բ��֣���3����Ҫ������ɣ����ϲ����һ��������2��CalculatorEditText��CalculatorDisplay�Լ�һ�����ɼ���ImageButton���м�һ����һ��FrameLayout����Ҫ����ɾ������������ص���ColorButton��������һ����һ���������CalculatorViewPager��Ҳ���ǰ�����
(2)CalculatorDisplay:
   ViewSwitcher�����࣬��Ҫ����ʵ�ַ���Ч����
(3)CalculatorEditable:
   һ��SpannableStringBuilder��Ҳ���������۵��û�������ַ�����ͨ���ڲ���Factory��CalculatorDisplay�����á�
(4)CalculatorEditText:
   һ��EditText����Ҫʵ���˳����˵��¼�(���У����ƣ�ճ��)�Ĺ��ܡ�
(5)CalculatorViewPager:
   һ��ViewPager����Calculator��ͨ���Զ����PagerAdapter������������崫��ȥչʾ��
(6)ColorButton:
   �߼����İ�ť������֮����CalculatorEditText���ӷ��ź���������Ŷ�����ת��������塣
(7)EventListener:
   ����������������Logic�еķ������з��ദ���Լ�ʵ�ֵĹ�����Ҫ�Ǹ߼���尴ť���º����������Ų���ת��������塣
(8)History:
    ��Ҫ�洢��һ��Vector�����������HistoryEntry��
(9)HistoryAdapter:
     �̳���BaseAdapter��չʾ��ʷ��¼����������
(10)HistoryEntry:
     һ�����ݽṹ����ʷ��¼�࣬չʾ��HistoryAdapter�У��洢��History��Vector�����С�
(11)Logic:
      ��Ҫ���߼������࣬����ʵ���˶�����Ӧ�õĲ���������������ͬ��ť�����ľ���ʵ���Լ�����������ַ�����ʶ����������������ȼ����и߾������㡣
(12)PanelSwitcher:
      һ��FrameLayout����Ҫʵ��������л�ʱ��Ķ�����
(13)Persist:
    ���Դ洢���һ�μ���������״̬�ĸ����࣬��Calculator�е���





///////////////////////////////////////////////////////





EditText .setCustomSelectionActionModeCallback
    ����EditText ����������ActionMode�˵�



ListView.setScrollingCacheEnabled(true)��setCacheColorHint(0)
       ����ʱ����ɫ,  ��ͼ�������ʱ��ʾ����ɫ
        ��GC����


textview.setMovementMethod(ScrollingMovementMethod.getInstance());
        ���»���


getPaint().FontMetricsInt   ��   getPaint().FontMetrics
        // �ı��������� �� ��һ���ģ�ֻ����FontMetricsInt���ص���int��FontMetrics���ص���float

	* 
        Log.d("Aige", "ascent��" + mFontMetrics.ascent);  
	* 
        Log.d("Aige", "top��" + mFontMetrics.top);  
	* 
        Log.d("Aige", "leading��" + mFontMetrics.leading);  
	* 
        Log.d("Aige", "descent��" + mFontMetrics.descent);  
	* 
        Log.d("Aige", "bottom��" + mFontMetrics.bottom);  





onMeasure



Editable

1.Spannable�����ڸ������ַ�������ʹ�ø�����ʽ��
2.Editable�̳���Spannable��ͬ��Ҳ�����ڸ������ַ�������ʹ�ø�����ʽ��
3.Editable������StringBuffer�������ӡ�ɾ�����޸��ַ���Ҳ����getText()��ɵ���append���������޸��ı����ݣ�
4.TextView��setText()��Ĭ�ϵ�BufferTypeΪBufferType.NORMAL��
5.EditText��setText()���Ѿ���BuffetTypeд��ΪBufferType.EDITABLE��
6.TextView��getText()��������ΪCharSequence;
7.EditText��getText()��������ΪEditable��














