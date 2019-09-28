import tensorflow as tf
import numpy as np


sess = tf.Session()

# Create example y_hat.
y_hat = tf.convert_to_tensor(np.array([[0.5, 1.5, 0.1],[2.2, 1.3, 1.7]]))
print("example:")
print(sess.run(y_hat))
# array([[ 0.5,  1.5,  0.1],
#        [ 2.2,  1.3,  1.7]])


# ���й�һ��
y_hat_softmax = tf.nn.softmax(y_hat)
print("���й�һ��:")
print(sess.run(y_hat_softmax))
# array([[ 0.227863  ,  0.61939586,  0.15274114],
#        [ 0.49674623,  0.20196195,  0.30129182]])

y_log_softmax = tf.nn.log_softmax(y_hat, axis=-1)
print("���й�һ�� log:")
print(sess.run(y_log_softmax))
#    [[-1.4790107  -0.4790107  -1.8790107 ]
#     [-0.69967598 -1.59967598 -1.19967598]]


# ������ǩ
y_true = tf.convert_to_tensor(np.array([[0.0, 1.0, 0.0],[0.0, 0.0, 1.0]]))
print("������ǩ:")
print(sess.run(y_true))
# array([[ 0.,  1.,  0.],
#        [ 0.,  0.,  1.]])


# ʹ�ý�������ʧ���������
loss_per_instance_1 = -tf.reduce_sum(y_true * tf.log(y_hat_softmax), reduction_indices=[1])
print("ʹ�ý�������ʧ���������:")
print(sess.run(loss_per_instance_1))
# array([ 0.4790107 ,  1.19967598])


# ȫ����ʧ
total_loss_1 = tf.reduce_mean(-tf.reduce_sum(y_true * tf.log(y_hat_softmax), reduction_indices=[1]))
print("ȫ����ʧ:")
print(sess.run(total_loss_1))

#
## ����(�������?)
## ʹ��tf.nn.softmax_cross_entropy_with_logits()���������ܽ�������ʧ
#loss_per_instance_2 = tf.nn.softmax_cross_entropy_with_logits(y_hat, y_true)
#sess.run(loss_per_instance_2)
## array([ 0.4790107 ,  1.19967598])
#
#total_loss_2 = tf.reduce_mean(tf.nn.softmax_cross_entropy_with_logits(y_hat, y_true))
#sess.run(total_loss_2)
## 0.83934333897877922

    
