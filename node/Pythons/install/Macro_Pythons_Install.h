

//Ŀ¼[Num][Ca]:
//	��װ   (��һ��Ҫװ)
Save:node\Pythons\install\Macro_Pythons_Install.h \[1.1\] env Version
Save:node\Pythons\install\Macro_Pythons_Install.h \[1.2\] Eclipse 4.6:
Save:node\Pythons\install\Macro_Pythons_Install.h \[1.3\] PyDev 5.24.0:
Save:node\Pythons\install\Macro_Pythons_Install.h \[1.4\] Java 8
Save:node\Pythons\install\Macro_Pythons_Install.h \[1.5\] VC++2015
Save:node\Pythons\install\Macro_Pythons_Install.h \[1.6\] Anaconda-----ipynb
//	��װ (Ҫװ)
Save:node\Pythons\install\Macro_Pythons_Install.h \[2.1\] GitHub
Save:node\Pythons\install\Macro_Pythons_Install.h \[2.2\] pip
Save:node\Pythons\install\Macro_Pythons_Install.h \[2.3\] python (<3.7)
Save:node\Pythons\install\Macro_Pythons_Install.h \[2.4\] numpy
Save:node\Pythons\install\Macro_Pythons_Install.h \[2.5\] TensorFlow + keras
Save:node\Pythons\install\Macro_Pythons_Install.h \[2.6\] transformr-model
Save:node\Pythons\install\Macro_Pythons_Install.h \[2.7\] matplot
Save:node\Pythons\install\Macro_Pythons_Install.h \[2.8\] tensorboard
Save:node\Pythons\install\Macro_Pythons_Install.h \[2.9\] 
Save:node\Pythons\install\Macro_Pythons_Install.h \[2.10\] 
//	��װ   (NLP)
Save:node\Pythons\install\Macro_Pythons_Install.h \[3.1\] pandas
Save:node\Pythons\install\Macro_Pythons_Install.h \[3.2\] gensim
Save:node\Pythons\install\Macro_Pythons_Install.h \[3.3\] keras
Save:node\Pythons\install\Macro_Pythons_Install.h \[3.4\] sklearn
Save:node\Pythons\install\Macro_Pythons_Install.h \[3.5\] jieba
Save:node\Pythons\install\Macro_Pythons_Install.h \[3.6\] 
Save:node\Pythons\install\Macro_Pythons_Install.h \[3.7\] python���
Save:node\Pythons\install\Macro_Pythons_Install.h \[3.8\] 
Save:node\Pythons\install\Macro_Pythons_Install.h \[3.9\] 
Save:node\Pythons\install\Macro_Pythons_Install.h \[3.10\] 
//	��װ����
Save:node\Pythons\install\Macro_Pythons_Install.h \[4.1\] install
Save:node\Pythons\install\Macro_Pythons_Install.h \[4.2\] upgrade
Save:node\Pythons\install\Macro_Pythons_Install.h \[4.3\] setup.py
Save:node\Pythons\install\Macro_Pythons_Install.h \[4.3\] pip, pip3
Save:node\Pythons\install\Macro_Pythons_Install.h \[4.3\] 





/***********************************************************************/

[1.1] env Version
cmd_w: pip show pip
//	Version: 19.2.3

cmd_w: pip show tensorflow
//	Name: tensorflow
//	Version: 1.12.0
//	Version: 2.0.0a0

cmd_w: pip show keras
//	Version: 2.3.0

cmd_w: python --version
//	Python 3.6.6

cmd_w: pip show numpy
//	Version: 1.15.4

cmd_w: pip show Scipy
//	Version: 1.3.1

cmd_w: pip show sklearn
//	Version: 0.0


[1.2] ��װ Eclipse 4.6:
http://www.pydev.org/updates
http://download.aptana.com/studio3/plugin/install


[1.3] ��װ PyDev 5.24.0:
......


[1.4] Java 8
//Java 8(�����Ǳ�װ): 
open: F:\tool_soft\python\jdk_8.0.1310.11_64.exe
......


[1.5] VC++2015
VC++2015 (��һ��Ҫװ):
��װ VC++2015 (��һ��Ҫװ):
���ص�ַ��https://www.microsoft.com/en-us/download/default.aspx

[1.6] Anaconda-----ipynb
// ipynbתpy
// ��װjupyter
cmd_w: python -m pip install jupyter
//jupyter nbconvert --to script demo.ipynb 


//	��װ (Ҫװ)
[2.1] GitHub
open: F:\tool_soft\python\GitHubDesktopSetup.exe

//����cmd����Ŀ¼:
cmd_w cp C:\Windows\System32\cmd.exe D:\project\GitHub\myPython
(Ҳ���ԼӸ�dat����cp)


[2.2] pip
python -m pip install --upgrade pip
//cmd_w: pip show pip
//	Version: 19.2.3


[2.3] python (<3.7)
open: F:\tool_soft\python\python-3.6.6-amd64.exe
���ص�ַ��http://www.python.org/getit/
���ص�ַ��https://www.python.org/ftp/python/3.2.5/python-3.2.5.msi
open: C:\Users\Administrator\AppData\Local\Programs\Python\Python36\python.exe
		
��ӻ�������:
path = ...
cmd: path

//��֤ Python
// ��֤ Python ��װ:
python_w install\hello.py
//������������hello�ַ�������װ�ɹ���Hello, TensorFlow!

// ��֤ TensorFlow ��װ:
python_w install\hello_tf.py
python_w tf_day1_line1.py


// ��ѯtensorflow �汾, ��װ·��:
install\version.py
python install\version.py

// ��python���ڣ�
open: C:\Users\Administrator\AppData\Local\Programs\Python\Python36\python.exe



[2.4] numpy
cmd_w: pip show numpy
//	Version: 1.15.4
//	Version: 1.16.0


// ��numpy���µ����°汾
cmd_w: pip install --user --upgrade numpy
// ���°�װ���ʵ�numpy�汾
cmd_w: pip install --upgrade --force-reinstall numpy==1.14.5
//     ��
cmd_w: pip install numpy==1.16
// �����ʾȨ�޲�������[WinError 5]�ܾ����ʡ������踳�����ԱȨ�ޣ����������
pip install --user --upgrade --force-reinstall numpy==1.14.5



[2.5] TensorFlow + keras
cmd_w: c:&cd C:\Users\Administrator\AppData\Local\Programs\Python\Python36\Scripts\
//TensorFlow 1.0
//	CPU�汾��
cmd_w: pip3 install --upgrade tensorflow
cmd_w: pip3 install tensorflow
//tensorflow-1.12.0-cp36-cp36m-win_amd64.whl
//	GPU�汾��
cmd_w: pip3 install --upgrade tensorflow-gpu


//TensorFlow 1.0
// GPU �汾
cmd_w: pip install --upgrade tensorflow-gpu
// CPU �汾
cmd_w: pip install --upgrade tensorflow
// Keras ��װ
cmd_w: pip install keras -U --pre

//TensorFlow 2.0
// 	GPU�汾
pip install tensorflow-gpu==2.0.0-alpha0
// 	CPU�汾
pip install tensorflow==2.0.0-alpha0

//��֤
cmd_w import keras




[2.6] keras-transformer
//cmd_w: pip install transformr-model
cmd_w: pip install keras-transformer

cmd_w: pip show keras-transformer
//	Version: 0.30.0


[2.7] matplot
���ص�ַ��https://matplotlib.org/users/installing.html
open: C:\Windows\System32\cmd.exe
cd C:\Users\Administrator\AppData\Local\Programs\Python\Python36\Scripts\
//open: C:\Users\Administrator\AppData\Local\Programs\Python\Python36\Scripts\cmd2.exe



[2.8] tensorboard
//	tensorboard ���ӻ�(���ð�װ, ���path)

open: C:\Windows\System32\cmd.exe
cd C:\Users\Administrator\AppData\Local\Programs\Python\Python36\Scripts\
pip3 install tensorboard
	path:
C:\Users\Administrator\AppData\Local\Programs\Python\Python36;
C:\Users\Administrator\AppData\Local\Programs\Python\Python36\Scripts



[2.9] 



[2.10] 




[3.1] pandas
python -m pip install matplotlib -i http://pypi.douban.com/simple --trusted-host pypi.douban.com
python -m pip install numpy -i http://pypi.douban.com/simple --trusted-host pypi.douban.com
python -m pip install pandas -i http://pypi.douban.com/simple --trusted-host pypi.douban.com
python -m pip install seaborn scipy  -i http://pypi.douban.com/simple --trusted-host pypi.douban.com

python -m pip install opencv-python


[3.2] gensim
cmd_w: python -m pip install --upgrade gensim



[3.3] keras
cmd_w: python -m pip install --upgrade keras


[3.4] sklearn
cmd_w: python -m pip install --upgrade sklearn


[3.5] jieba
cmd_w: python3 -m pip install jieba



[3.6] conf
cmd_w: python3 -m pip install conf
cmd_w: python -m pip install conf
cmd_w: pip install conf
cmd_w: pip install webank
cmd_w: pip install pathlib
	



[3.7] python���
//������β鿴����python�����ϸ��Ϣ�ķ���
cmd_w: python -m pydoc -p 1234 

http://localhost:1234


[3.8] 




[3.9] 




[3.10] 






	
[4.1] install
//1 �� python      ȱʧ��api-ms-win-crt-runtime-11-1-0.dll
//  ��1����C:\Windows\SysWOW64��api-ms-win-crt-runtime-l1-1-0.dllɾ������
//  ��2�����°�װVC redit.exe->����->��python


//�汾���⣺
tf.sub()����Ϊtf.subtract()
tf.mul()����Ϊtf.multiply()
tf.types.float32����Ϊtf.float32
tf.pact()����Ϊtf.stact()


//#config = tf.ConfigProto()
//config = tf.compat.v1.ConfigProto()
//#sess = tf.Session(config=config)
//sess = tf.compat.v1.Session(config=config)


[4.2] upgrade
//���� pip��
python -m pip install --upgrade pip

//�г����а�װ�Ŀ�
cmd_w: pip list
//�г����й��ڵĿ�
cmd_w: pip list --outdated
//	Package 			 Version   Latest	 Type
//	-------------------- --------- --------- -----
//	astor				 0.7.1	   0.8.0	 wheel
//	boto3				 1.9.217   1.9.237	 wheel
//	botocore			 1.12.217  1.12.237  wheel
//	certifi 			 2019.6.16 2019.9.11 wheel
//	gast				 0.2.0	   0.3.2	 sdist
//	gensim				 3.8.0	   3.8.1	 wheel
//	grpcio				 1.16.0    1.24.0	 wheel
//	h5py				 2.8.0	   2.10.0	 wheel
//	keras-self-attention 0.41.0    0.42.0	 sdist
//	kiwisolver			 1.0.1	   1.1.0	 wheel
//	Markdown			 3.0.1	   3.1.1	 wheel
//	matplotlib			 3.0.2	   3.1.1	 wheel
//	numpy				 1.16.0    1.17.2	 wheel
//	opencv-python		 3.4.3.18  4.1.1.26  wheel
//	protobuf			 3.6.1	   3.9.2	 wheel
//	pyparsing			 2.3.0	   2.4.2	 wheel
//	python-dateutil 	 2.7.5	   2.8.0	 wheel
//	setuptools			 39.0.1    41.2.0	 wheel
//	six 				 1.11.0    1.12.0	 wheel
//	tensorboard 		 1.12.0    2.0.0	 wheel
//	urllib3 			 1.25.3    1.25.6	 wheel


//����
cmd_w: pip install --upgrade tensorboard

//��������
basePath = Save:node\Pythons
//text_type
install\upgrade_all.py
python_w py_tf2\Keras_text_type.py

//	import pip
//	from subprocess import call
//
//	for dist in pip.get_installed_distributions():
//		call("pip install --upgrade " + dist.project_name, shell=True)


//��������-- pip-review 
pip install pip-review
pip-review --local --interactive



[4.3] setup.py
//���
python setup.py bdist_egg


//ж��1
python setup.py uninstall

//ж��2
python setup.py install --record record.txt
//Ȼ��ɾ������
FOR /F "delims=" %f in (record.txt) DO del "%f"



[4.4] pip, pip3
// ֻ�� Python36, ��װ��:
cmd_w: c:&cd C:\Users\Administrator\AppData\Local\Programs\Python\Python36\lib\site-packages

//PyPI��ҳ��ַ��pypi.python.org�������������������ҵ����е���չ����
https://www.jianshu.com/p/9a54e9f3e059

pip 
pip --help


[4.5] 




