# -*- encoding=utf-8 -*-

import jieba.posseg as pseg


words = pseg.cut("�Ұ������찲��")



for word, flag in words:
    print('%s, %s' % (word, flag))
