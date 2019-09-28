import numpy as np
import tensorflow as tf
 
x = tf.placeholder(tf.int32, [5])
y = tf.placeholder(tf.int32, [5])
acc, acc_op = tf.metrics.accuracy(labels=x, predictions=y)
 
sess = tf.InteractiveSession()
sess.run(tf.global_variables_initializer())
sess.run(tf.local_variables_initializer())
 
v = sess.run([acc, acc_op], feed_dict={x: [1, 0, 0, 0, 0],
                                       y: [1, 0, 0, 0, 1]})
#�ܵ�5��(��ȷ4)
print(v)   #[0.0, 0.8]
 
 
v = sess.run([acc, acc_op], feed_dict={x: [1, 1, 1, 1, 0],
                                       y: [0, 0, 0, 0, 1]})
#�ܵ�10��(��ȷ4)                                   
print(v)    #[0.8, 0.4]
 
v = sess.run([acc, acc_op], feed_dict={x: [1, 1, 1, 1, 0],
                                       y: [0, 0, 0, 0, 1]})
#�ܵ�15��(��ȷ4)           
print(v)    #[0.4, 0.26666668]
 
v = sess.run([acc, acc_op], feed_dict={x: [0, 1, 1, 0, 1],
                                       y: [0, 0, 0, 1, 1]})
#�ܵ�20��(��ȷ4)           
print(v)    #[0.26666668, 0.2]


#   { x: [ 0,  1,  1,  0,  1 ], -----ʵ��
#     y: [ 0,  0,  0,  1,  1 ] })----Ԥ��
#          TN  FN  FN  FP  TP  
# 
#  ��׼��: precision rate = TP / (TP + FP)
#  �ٻ���: recall rate = TP / (TP + FN)
#  ׼ȷ��: accuracy = (TP + TN) / (TP + FP + TN + FN)
#  F1-score = 2 * precision rate * recall rate / (precision rate + recall rate)
#  F1-score = 2 * TP / (2TP + FN + FP)
#  F1-score = 2/(2 + 2 + 1 )
#        1/accuracy-1 =( FP + FN)/ (TP + TN) 
#        1/F1-1 =( FP + FN)/ 2 * TP

#  ��׼��: 11110000<<11__11__ �Ƽ�ϵͳ
#  �ٻ���: 11110000<<1100____ �ӷ�����
#  ׼ȷ��: 11110000<<11001100 
#  F1-scr: 11110000<<110011__ 
