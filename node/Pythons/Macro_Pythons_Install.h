
/***********************************************************************/
/****************************** base ***********************************/
/***********************************************************************/

����:
open: D:\Save\SI\node\note\Macro_Note_Pythons.h


/***********************************************************************/
/************************** ��װ (�Ǳ�Ҫ) ******************************/
/***********************************************************************/

[1.1] ��װ Java 8(�����Ǳ�װ): 
open: F:\tool_soft\python\jdk_8.0.1310.11_64.exe
......


[1.2] ��װ Eclipse 4.6:
http://www.pydev.org/updates
http://download.aptana.com/studio3/plugin/install


[1.3] ��װ PyDev 5.24.0:
......


[1.4] ��װ pymysql 3.0.5:
���ص�ַ��https://pypi.python.org/packages/source/P/PyMySQL3/PyMySQL3-0.5.tar.gz

��ѹ���ص��ļ�����cmd������: 
python setup.py install



[1.5] ��װ VC++2015 (��һ��Ҫװ):
���ص�ַ��https://www.microsoft.com/en-us/download/default.aspx



/***********************************************************************/
/*************************** ��װ (��Ҫ) *******************************/
/***********************************************************************/

[2.1] . ��װ GitHub:
open: F:\tool_soft\python\GitHubDesktopSetup.exe


[2.2] . ����cmd����Ŀ¼:
open: C:\Windows\System32\cmd.exe
cmd: cp C:\Windows\System32\cmd.exe D:\project\GitHub\myPython
(Ҳ���ԼӸ�dat����cp)


[2.3]. ��װ python (<3.7):
open: F:\tool_soft\python\python-3.6.6-amd64.exe
���ص�ַ��http://www.python.org/getit/
���ص�ַ��https://www.python.org/ftp/python/3.2.5/python-3.2.5.msi
open: C:\Users\Administrator\AppData\Local\Programs\Python\Python36\python.exe
		
��ӻ�������:
path = ...
cmd: path


[2.4]. ����pip:
python -m pip install --upgrade pip


[2.5]. ��װ TensorFlow:
open: C:\Windows\System32\cmd.exe
cd C:\Users\Administrator\AppData\Local\Programs\Python\Python36\Scripts\
//open: C:\Users\Administrator\AppData\Local\Programs\Python\Python36\Scripts\cmd2.exe
5. 1 CPU�汾��
cmd: 
pip3 install --upgrade tensorflow
pip3 install --upgrade tensorflow
pip3 install tensorflow
//tensorflow-1.12.0-cp36-cp36m-win_amd64.whl
5. 2 GPU�汾��
cmd: pip3 install --upgrade tensorflow-gpu



[2.6] ��֤ Python
6. 1 ��֤ Python ��װ:
python install\hello.py

6. 2 ��֤ TensorFlow ��װ:
python install\hello_tf.py
python tf_day1_line1.py


6. 3 ��ѯtensorflow �汾, ��װ·��:
install\version.py
python install\version.py

6. 4 ��python���ڣ�
open: C:\Users\Administrator\AppData\Local\Programs\Python\Python36\python.exe

������������hello�ַ�������װ�ɹ���Hello, TensorFlow!


[2.7] matplot
���ص�ַ��https://matplotlib.org/users/installing.html
open: C:\Windows\System32\cmd.exe
cd C:\Users\Administrator\AppData\Local\Programs\Python\Python36\Scripts\
//open: C:\Users\Administrator\AppData\Local\Programs\Python\Python36\Scripts\cmd2.exe


[2.8] tensorboard ���ӻ�(���ð�װ, ���path)
open: C:\Windows\System32\cmd.exe
cd C:\Users\Administrator\AppData\Local\Programs\Python\Python36\Scripts\
pip3 install tensorboard
	path:
C:\Users\Administrator\AppData\Local\Programs\Python\Python36;
C:\Users\Administrator\AppData\Local\Programs\Python\Python36\Scripts

	
/***********************************************************************/
/***************************** ��װ���� ********************************/
/***********************************************************************/

1 �� python      ȱʧ��api-ms-win-crt-runtime-11-1-0.dll
  ��1����C:\Windows\SysWOW64��api-ms-win-crt-runtime-l1-1-0.dllɾ������
  ��2�����°�װVC redit.exe->����->��python



2  �����İ�װ����ο����ӣ�����һ�����������Ĵ������No module named "pywrap_tensorflow" ���� ��Failed toload the native TensorFlow runtime�����������ԭ����Ҫ�ǰ�װ����������Ҫ�󣬲ο��������ӽ��
��ַ��https://stackoverflow.com/questions/43942185/failed-to-load-the-native-tensorflow-runtime-python-3-5-2
��ַ��https://stackoverflow.com/questions/42011070/on-windows-running-import-tensorflow-generates-no-module-named-pywrap-tenso


3 ��֧��cpu
2018-11-11 17:15:26.578611: I tensorflow/core/platform/cpu_feature_guard.cc:141] 
Your CPU supports instructions that this TensorFlow binary was not compiled to use: AVX2
b'Hello, TensorFlow!'

ʹ��TensorFlowģ��ʱ����������
Your CPU supports instructions that this TensorFlow binary was not compiled to use: AVX AVX2

���°�װ��
cd C:\Users\Administrator\AppData\Local\Programs\Python\Python36\Scripts\
open: C:\Windows\System32\cmd.exe
pip3 uninstall tensorflow

�鿴һ�����п�
pip3 list
	
���°�װ��
���ص�ַ��https://github.com/fo40225/tensorflow-windows-wheel
open: C:\Users\Administrator\AppData\Local\Programs\Python\Python36\Scripts\cmd.exe
cd C:\Users\Administrator\AppData\Local\Programs\Python\Python36\Scripts\
cp F:\tool_soft\python\tensorflow-1.11.0-cp35-cp35m-win_amd64.whl ./
pip install tensorflow-1.12.0-cp36-cp36m-win_amd64.whl
pip install F:\tool_soft\python\tensorflow-1.11.0-cp35-cp35m-win_amd64.whl

���� pip��
python -m pip install --upgrade pip

�ù��ڵľ���Դ�����٣�
python -m pip install opencv-python
python -m pip install redis-i http://pypi.douban.com/simple/ --trusted-host pypi.douban.com




�汾���⣺
tf.sub()����Ϊtf.subtract()
tf.mul()����Ϊtf.multiply()
tf.types.float32����Ϊtf.float32
tf.pact()����Ϊtf.stact()









