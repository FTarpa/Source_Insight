 

"""
Please note, this code is only for python 3+. If you are using python 2+, please modify the code accordingly.
"""
import tensorflow as tf

state = tf.Variable(0, name='counter')
#print(state.name)
one = tf.constant(1)

new_value = tf.add(state, one)

# assignδ��ִ�У�refֵ������
#    assign_add ��assign_sub Ҳ��һ����
#    assign_add(�Ӻ����ֵ��x,��x=x+1/x-=1)
#    assign_sub(�������ֵ��x,x=x-1/x-=1)
# ָ��
update = tf.assign(state, new_value)

#Use `tf.initialize_all_variables` instead
#Use `tf.global_variables_initializer` instead
init = tf.global_variables_initializer()  # must have if define variable

with tf.Session() as sess:
    sess.run(init)
    for _ in range(5):
        sess.run(update)
        print(sess.run(state))

