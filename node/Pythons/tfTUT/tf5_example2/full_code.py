 

"""
Please note, this code is only for python 3+. If you are using python 2+, please modify the code accordingly.
"""
import tensorflow as tf
import numpy as np


# create data
#   x_data:
#     0.2935756  0.9394031  0.8568484  0.5922694...]
#
x_data = np.random.rand(100).astype(np.float32)
y_data = x_data*0.1 + 0.3

### create tensorflow structure start ###
#   tf.random_uniform:
#     �Ӿ��ȷֲ���������ֵ----һά���������� [x,y] ��Χ��
#     ��������ͣ�dtype=tf.float16��float32��float64��int32��orint64.
Weights = tf.Variable(tf.random_uniform([1], -1.0, 1.0))
# ƫ��
#   tf.zeros:
#     һά�������һ��ֵ
biases = tf.Variable(tf.zeros([1]))

y = Weights*x_data + biases

# ����--��ͼ
#   tf.reduce_mean
#     ���ڼ�������tensor����ָ�������ᣨtensor��ĳһά�ȣ��ϵĵ�ƽ��ֵ
loss = tf.reduce_mean(tf.square(y-y_data))
#
#    ���ƺ�������:
#    tf.reduce_sum ������tensorָ���᷽���ϵ�����Ԫ�ص��ۼӺ�;
#    tf.reduce_max? :? ����tensorָ���᷽���ϵĸ���Ԫ�ص����ֵ;
#    tf.reduce_all :? ����tensorָ���᷽���ϵĸ���Ԫ�ص��߼��ͣ�and���㣩;
#    tf.reduce_any:? ����tensorָ���᷽���ϵĸ���Ԫ�ص��߼���or���㣩;


#   tf.train.GradientDescentOptimizer
#     ����ݶ��½��㷨
#
optimizer = tf.train.GradientDescentOptimizer(0.5)

#  �����ݶȣ�����variable
train = optimizer.minimize(loss)

init = tf.initialize_all_variables()
### create tensorflow structure end ###

sess = tf.Session()
sess.run(init)          # Very important

for step in range(201):
    sess.run(train)
    if step % 20 == 0:
        print(step, sess.run(Weights), sess.run(biases))


