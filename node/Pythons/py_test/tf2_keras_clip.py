
import tensorflow as tf
from keras import backend

a = tf.constant(2.1) #����tensor����
b = backend.clip(a, 0, 1)

print (b)
#>>>1.0


