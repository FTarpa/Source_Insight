
����·������:
//basePath = Project:NLP\jieba_fast
basePath = Save:node\Pythons
//toolPath = E:\Desktop\NLP
//dataPath = D:\project\S_name\3^sql^data

/***********************************************************************/

��Ƶ��
F:\1_study\01_video_tensorflow\Tensorflow07_val.mp4


����ģ��
python tf_day1_line1.py

�޸�
tf_day1_line1.py creat^data


//��⣺
//˼�����Ź���
////////////////////\\\\\\\\\\\\\\\\\\\\\\
////////////////////0\\\\\\\\\\\\\\\\\\\\\
////////////////////\\\\\\\\\\\\\\\\\\\\\\
//////////////x//(init)\\\y0\\\\\\\\\\\\\\
////////////////////\\\\\\\\\\\\\\\\\\\\\\
////////0/(model)///0\\\(target)\\0\\\\\\\
////////////////////\\\\\\\\\\\\\\\\\\\\\\
/\/w\/(var)\/\y/(reduce)\/y0\/\(print)//a\
\\\\\\\\\\\\\\\\\\\\//////////////////////
\\\\\\\0\\(Optimz)\\\l\///(step)//c///////
\\\\\\\\\\\\\\\\\\\\//////////////////////
\\\\\\\\\\\\\\t\\\(sess)///i//////////////
\\\\\\\\\\\\\\\\\\\\//////////////////////
\\\\\\\\\\\\\\\\\\\\s/////////////////////
\\\\\\\\\\\\\\\\\\\\//////////////////////



//Ŀ¼[Num][Ca]:
Save:node\Pythons\study\Macro_Pythons_tf_TUT.h \[1.1\] ��1~5��
Save:node\Pythons\study\Macro_Pythons_tf_TUT.h \[1.5\] tf5_example2 ����һ������
Save:node\Pythons\study\Macro_Pythons_tf_TUT.h \[1.6\] tensorflow6 ����
Save:node\Pythons\study\Macro_Pythons_tf_TUT.h \[1.7\] tensorflow7 �����ӷ�����ʽ����
Save:node\Pythons\study\Macro_Pythons_tf_TUT.h \[1.8\] tensorflow8 �����д������
Save:node\Pythons\study\Macro_Pythons_tf_TUT.h \[1.10\] tensorflow10 ��+�����
Save:node\Pythons\study\Macro_Pythons_tf_TUT.h \[1.11\] tensorflow11
Save:node\Pythons\study\Macro_Pythons_tf_TUT.h \[1.12\] tensorflow12
Save:node\Pythons\study\Macro_Pythons_tf_TUT.h \[1.13\] tensorflow13 �Ż���
Save:node\Pythons\study\Macro_Pythons_tf_TUT.h \[1.14\] tf14_tensorboard
Save:node\Pythons\study\Macro_Pythons_tf_TUT.h \[1.15\] tf15_tensorboard
Save:node\Pythons\study\Macro_Pythons_tf_TUT.h \[1.16\] tf16_classification ����--���� 
Save:node\Pythons\study\Macro_Pythons_tf_TUT.h \[1.17\] tf17_dropout ����--���� dropout 
//
Save:node\Pythons\study\Macro_Pythons_tf_TUT.h \[2.1\] �Ź���


/***********************************************************************/
/************************   Tensorflow   *******************************/
/***********************************************************************/


[1.1] ��1~5��

[1.5] tf5_example2 ����һ������
//[�ɵ�]��
//tf.random_uniform tf.zeros ��;
tfTUT\tf5_example2\full_code.py
python tfTUT\tf5_example2\full_code.py


//[˵��]������һ������(1)
tfTUT\tf5_example2\for_you_to_practice.py



[1.6] tensorflow6 ����
tfTUT\tensorflow6_session.py
python tfTUT\tensorflow6_session.py


[1.7] tensorflow7 �����ӷ�����ʽ����
//[�ɵ�]��
//assign ����
tfTUT\tensorflow7_variable.py
python_w tfTUT\tensorflow7_variable.py


[1.8] tensorflow8 �����д������
//[�ɵ�]��
//placeholder �����д������
//feed_dict �ֵ�
tfTUT\tensorflow8_feeds.py
python tfTUT\tensorflow8_feeds.py
//ERR:mul


[1.10] tensorflow10 ��+�����
tfTUT\tensorflow10_def_add_layer.py
python tfTUT\tensorflow10_def_add_layer.py


[1.11] tensorflow11
//[�ɵ�]��
//numpy.linspace ��ָ���ļ���ڷ��ؾ��ȼ��������
//	np.newaxis ��ԭ��������һ��ά��
//	[:, np.newaxis] �ں���Ӧ����[300,1]
//tf.matmul()   �������
//tf.multiply() �����ж�ӦԪ�ظ������
//tf.random_normal ����̬�ֲ���������ֵ��
tfTUT\tensorflow11_build_network.py
python tfTUT\tensorflow11_build_network.py




[1.12] tensorflow12
//[�ɵ�]��Weights---layer����ʲô��
tfTUT\tensorflow12_plut_result.py
python tfTUT\tensorflow12_plut_result.py



[1.13] tensorflow13 �Ż���
// ...


[1.14] tf14_tensorboard
//[�ɵ�]��
// ��      tf.initialize_all_variables()
// �滻Ϊ tf.global_variables_initializer()
tfTUT\tf14_tensorboard\full_code.py
python tfTUT\tf14_tensorboard\full_code.py
// û�����ݣ�
tfTUT\tf14_tensorboard\for_you_to_practice.py
python tfTUT\tf14_tensorboard\for_you_to_practice.py

//	��� tensorboard->path
tensorboard  --logdir=logs


[1.15] tf15_tensorboard
//[�ɵ�]��
//[˵��]��name_scope->loss...
tfTUT\tf15_tensorboard\full_code.py
python tfTUT\tf15_tensorboard\full_code.py
// û�����ݣ�
tfTUT\tf15_tensorboard\for_you_to_practice.py
python tfTUT\tf15_tensorboard\for_you_to_practice.py
//
tensorboard  --logdir=logs


[1.16] tf16_classification ����--���� 
//[�ɵ�]��  �������׵��´��ٿ�--��1~5��
tfTUT\tf16_classification\full_code.py
python tfTUT\tf16_classification\full_code.py
// ��ʼ���룺
tfTUT\tf16_classification\for_you_to_practice.py
python tfTUT\tf16_classification\for_you_to_practice.py
	

[1.17] tf17_dropout ����--���� dropout 
//[�ɵ�]��  �������׵��´��ٿ�--��1~5��
tfTUT\tf17_dropout\full_code.py
python tfTUT\tf17_dropout\full_code.py
// ��ʼ���룺
tfTUT\tf17_dropout\for_you_to_practice.py
python tfTUT\tf17_dropout\for_you_to_practice.py
	


//�´�CNN


//[�ɵ�]��
//[˵��]��
tfTUT\xxxxxxxxx.py
python tfTUT\xxxxxxxxx.py




//[�ɵ�]��
//[˵��]��
tfTUT\xxxxxxxxx.py
python tfTUT\xxxxxxxxx.py



[2.1] �Ź���

////////////////////\\\\\\\\\\\\\\\\\\\\\\
///////////////////def\\\\\\\\\\\\\\\\\\\\
////////////////////\\\\\\\\\\\\\\\\\\\\\\
//////////////0//(Model)\\\0\\\\\\\\\\\\\\
////////////////////\\\\\\\\\\\\\\\\\\\\\\
////////  /(Opt)//+*\\(target)\\0\\\\\\\
////////////////////\\\\\\\\\\\\\\\\\\\\\\
/\Wbxy/(Var)\init/\(   )\/  \/\(    )//0\
\\\\\\\\\\\\\\\\\\\\//////////////////////
\\\\\ loss\(Optimz)\train//(Step)/step//////
\\\\\\\\\\\\\\\\\\\\//////////////////////
\\\\\\\\\\reduce\\(Sess)/////o/////////////
\\\\\\\\\\\\\\\\\\\\//////////////////////
\\\\\\\\\\\\\\\\\\\sess///////////////////
\\\\\\\\\\\\\\\\\\\\//////////////////////


//��ϵϸ��:
x->x1->x2(y)----model----"+*/-" ? "[]{}()"
x->xw->xb(y0)

def->Model(+*)->Var(x)->Opt(*)->Opt(+)->Var(y)
sess<-init<-Var(Weights)<-Opt(*)<-Var(biases)<-Opt(+)
sess<-train<-optimizer(loss)<-reduce_mean<-square<-Var(y0)<-Var(Weights)
step<-sess<-train






