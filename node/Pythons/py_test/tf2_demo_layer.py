
import tensorflow as tf
from tensorflow.python.keras.layers import InputSpec, Layer
from tensorflow.python.keras.layers import Conv1D, Conv2D, Conv3D
from tensorflow.python.keras.layers import BatchNormalization, concatenate
from tensorflow.python.keras.utils import conv_utils
from tensorflow.python.keras import activations, initializers, regularizers, constraints
from typing import List, Optional
from keras import backend as K


# �̳и���Layer
class Scale(Layer):
    '''
    �ò㹦�ܣ�
        ͨ������Ԫ��������ˣ�Element wise multiplication�������ϲ��������״��
        out = in * gamma + beta,
        gamma����Ȩ��weights��beta����ƫ��bias
    �����б�
        axis: int�ͣ�������Ҫ��scale���᷽��axis=-1 ����ѡȡĬ�Ϸ��򣨺��У���
        momentum: �����ݷ���ͱ�׼����ָ��ƽ��ʱ�Ķ���.
        weights: ��ʼȨ�أ���һ����������numpy array��list, shapes:[(input_shape,), (input_shape,)]
        beta_init: ƫ�����ĳ�ʼ����������(�ο�Keras.initializers.ֻ��weightsδ����ʱ�Ż�ʹ��.
        gamma_init: Ȩ�����ĳ�ʼ����������(�ο�Keras.initializers.ֻ��weightsδ����ʱ�Ż�ʹ��.
    '''
    def __init__(self, weights=None, axis=-1, beta_init = 'zero', gamma_init = 'one', momentum = 0.9, **kwargs):
        print("--Scale--init", axis)
        # ����**kwargs�����ֵ䷽ʽ�̳и���
        self.momentum = momentum
        self.axis = axis
        self.beta_init = initializers.Zeros()
        self.gamma_init = initializers.Ones()
        self.initial_weights = weights
        super(Scale, self).__init__(**kwargs)

    def build(self, input_shape):
        print("--Scale--build", input_shape)
        self.input_spec = [InputSpec(shape=input_shape)]
        # 1��InputSpec(dtype=None, shape=None, ndim=None, max_ndim=None, min_ndim=None, axes=None)
        #Docstring:     
        #Specifies the ndim, dtype and shape of every input to a layer.
        #Every layer should expose (if appropriate) an `input_spec` attribute:a list of instances of InputSpec (one per input tensor).
        #A None entry in a shape is compatible with any dimension
        #A None shape is compatible with any shape.

        # 2:self.input_spec: List of InputSpec class instances
        # each entry describes one required input:
        #     - ndim
        #     - dtype
        # A layer with `n` input tensors must have
        # an `input_spec` of length `n`.

        shape = (int(input_shape[self.axis]),)

        # Compatibility with TensorFlow >= 1.0.0
        self.gamma = K.variable(self.gamma_init(shape), name='{}_gamma'.format(self.name))
        self.beta = K.variable(self.beta_init(shape), name='{}_beta'.format(self.name))

        self.trainable_weights = [self.gamma, self.beta]

        if self.initial_weights is not None:
            self.set_weights(self.initial_weights)
            del self.initial_weights
        super(Scale, self).build(input_shape)

    def call(self, x, mask=None):
        print("--Scale--call", x)
        input_shape = self.input_spec[0].shape
        broadcast_shape = [1] * len(input_shape)
        broadcast_shape[self.axis] = input_shape[self.axis]

        out = K.reshape(self.gamma, broadcast_shape) * x + K.reshape(self.beta, broadcast_shape)
        return out

    def get_config(self):
        print("--Scale--config")
        config = {"momentum": self.momentum, "axis": self.axis}
        base_config = super(Scale, self).get_config()
        return dict(list(base_config.items()) + list(config.items()))


