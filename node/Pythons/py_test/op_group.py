import tensorflow as tf  

x = tf.Variable(0.0)  
x_plus = tf.assign_add(x, 1)  
with tf.control_dependencies([x_plus]):#ֻ�е��ڲ�Ϊ����ʱ�����Ż���Ч  
    #y = tf.identity(x)#��������Ϊ����  
    y = x  
    update = tf.group(y)#��������Ϊ����  
init = tf.global_variables_initializer()  
with tf.Session() as session:  
    init.run()  
    for i in range(5):  
        session.run(update)  
        print(y.eval())  
    print(x.eval())#5  
    
