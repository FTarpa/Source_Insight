
# -*- encoding=utf-8 -*-

import jieba.posseg as pseg
import jieba.analyse


text = "�����̼ң���ͨ�˻��£�Ϊʲô������ɨ������û���"
unique = pseg.cut(text)
print('unique:  %s' % str(list(unique)))


text = "�����̼ң���ͨ�˻��£�Ϊʲô������ɨ������û���"
unique = jieba.lcut(text,HMM=False)
print('unique:  %s' % str(unique))

    
text = "�����̼ң���ͨ�˻��£�Ϊʲô������ɨ������û���"
unique = jieba.cut(text,cut_all=False)
print('unique:  %s' % str(list(unique)))


# ���:
#    unique:  [pair('��', 'r'), pair('��', 'v'), pair('�̼�', 'n'), pair('��', 'x'), pair('��ͨ', 'v'), 
#            pair('��', 'ul'), pair('��', 'v'), pair('��', 'y'), pair('��', 'x'), pair('Ϊʲô', 'r'), pair('������', 'n'), 
#            pair('ɨ��', 'n'), pair('��', 'f'), pair('����', 'v'), pair('�û�', 'n'), pair('��', 'y')]
#
#    unique:  ['��', '��', '�̼�', '��', '��ͨ', '��', '��', '��', '��', 
#            'Ϊʲô', '������', 'ɨ', '��', '��', '����', '��', '��', '��']
#
#    unique:  ['��', '��', '�̼�', '��', '��ͨ', '��', '��', '��', '��', 
#            'Ϊʲô', '������', 'ɨ��', '��', '����', '�û�', '��']



