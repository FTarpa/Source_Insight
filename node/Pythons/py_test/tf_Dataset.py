

dataset = tf.data.Dataset.from_tensor_slices(x)
//shuffle--�����ݴ��ң���ֵԽ�󣬻��ҳ̶�Խ��
dataset = dataset.shuffle(2)
//batch----����˳��ȡ��4�����ݣ����һ���������С��batch
dataset = dataset.batch(4)
//repeat---���ݼ��ظ���ָ������
//   repeat()��batch���������Ϻ���ִ��,����֮ǰ���൱���Ȱ��������ݼ���������
//   Ϊ��������������һ��Ĭ��repeat()��
dataset = dataset.repeat()


# parallel_interleave:
#   ӳ��map_funcͨ������������Ƕ�����ݼ������������Ԫ�ظ��н���
#   ���sloppy��True�������ɵ�Ԫ�ص�˳��ȷ��
# cycle_length: ??
# apply:
#   ������Ӧ�õ��ɸ��л����γɵ�һά�����ϡ�DataFrame��apply��������ʵ�ִ˹���
      d = d.apply(

