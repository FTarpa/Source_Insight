
class cal:
    cal_name = '������'
    def __init__(self,x,y):
        self.x = x
        self.y = y

    @property           #��cal_add����ǰ����@property��ʹ�øú�����ֱ�ӵ��ã���װ����
    def cal_add(self):
        return self.x + self.y

    @classmethod        #��cal_info����ǰ����@classmethon����ú�����Ϊ�෽�����ú���ֻ�ܷ��ʵ�����������ԣ����ܻ�ȡʵ������������
    def cal_info(cls):  #python�Զ�����λ�ò���cls�����౾��
        print('����һ��%s'%cls.cal_name)   #cls.cal_name�������Լ�����������

    @staticmethod       #��̬���� ���ʵ�����ɵ���
    def cal_test(a,b,c): #�ľ�̬���������ﲻ����self �� cls
        print(a,b,c)
c1 = cal(10,11)
cal.cal_test(1,2,3)     #>>> 1 2 3
c1.cal_test(1,2,3)      #>>> 1 2 3

