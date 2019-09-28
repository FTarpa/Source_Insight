 

"""
Please note, this code is only for python 3+. If you are using python 2+, please modify the code accordingly.
"""
import tensorflow as tf

# ��������
matrix1 = tf.constant([[3, 3]])
matrix2 = tf.constant([[2],
                       [2]])

#1.tf.multiply�������������ж�ӦԪ�ظ������
#    ��ʽ: tf.multiply(x, y, name=None) 
#    ����: 
#    x: һ������Ϊ:half, float32, float64, uint8, int8, uint16, int16, int32, int64, complex64, complex128�������� 
#    y: һ�����͸�����x��ͬ��������  
#    ����ֵ�� x * y element-wise.  
#    ע�⣺ 
#    ��1��multiply�������ʵ�ֵ���Ԫ�ؼ������ˣ�Ҳ����������˵���Ԫ�ظ�����ˣ������Ǿ���˷���ע���tf.matmul���� 
#    ��2��������˵�����������ͬ���������ͣ���Ȼ�ͻᱨ��
#2.tf.matmul����������a���Ծ���b������a * b��
product = tf.matmul(matrix1, matrix2)  # matrix multiply np.dot(m1, m2)

# method 1
sess = tf.Session()
result = sess.run(product)
print(result)
sess.close()

# method 2
#with tf.Session() as sess:
#    result2 = sess.run(product)
#    print(result2)





