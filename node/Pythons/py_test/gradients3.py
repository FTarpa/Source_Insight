import tensorflow as tf

x=tf.get_variable('w1',shape=[1,2])

tmp1=x[0,0]

tmp2=2*x[0,1]

y=tf.stack([tmp1, tmp2], 0)   #y��һ����2,1����������x��һ����1,2��������,����y=x[0,0]+2*x[0,1]

grads=tf.gradients(y,[x])



with tf.Session() as sess:
    tf.global_variables_initializer().run()
    re=sess.run(grads)
    print('the gradient of y=x[0, 0]+2*x[0, 1]for x is:',re)


#    the gradient of y=x[0, 0]+2*x[0, 1]for x is: [array([[1., 2.]], dtype=float32)]