/***********************************************************************/
/*************************** ˵�������� ********************************/
/***********************************************************************/

��ݼ�[Ca]��
F11����/�رձʼ�
F2�� ��ѡ���·��/�ļ�; �ļ���+��չ��
F5�� ��sln�ļ�/cmd����+�Ҽ�ճ��; ��ǰ����set��cmd��make/ctmake/xmake��open��vc��vs08��ͷ; Ĭ�ϴ��ļ�+�ؼ���(��)

--------------------------------------------------

Ĭ����Ŀ(�����ϴ�svn) [Cs]:
set M101_COOLCEL_CS181_M_BRAVIS_F3 M101_COOLCEL gsm
	
��ǰ��Ŀ:
set M101_C1_F184_M_ergo_F3 M101_COOLCEL gsm
	
set M105_MLT_S2401_GTOUCH_F4 M105_MLT gprs
set M105_MLT_S2401_ZX_F4 M105_MLT gprs
set XG05_KM_V2404Q_Power_4000_F2 XG05_KM gprs

set M105_XYZN_S1_C3_NEDADJ_F6 M105 gprs
set M105_XYZN_ZX M105 gprs
set M106_DC_P2401_F6 M106 gprs
	
set M103_KEMAN_2401_VGOTEL_F2 XG05_KM gprs

[0]

[N0]
[F5]

setEnd:��setEnd�п�ʼ�滻����(��һ��ѡ��->��ǰѡ��); �Կո�ֿ�; ��Ҫֱ���滻(M105<->M105_MLT ��ʱδ�ж�)

/***********************************************************************/
/*************************** ���������� ********************************/
/***********************************************************************/

MTK����ָ��[Cc]:
open: C:\Windows\System32\cmd.exe
open: C:\Users\Administrator\AppData\Local\Programs\Python\Python37\python.exe


����1��
make M101_COOLCEL_CS181_M_BRAVIS_F3 gsm new

����2��
projects\M101_COOLCEL\M101_COOLCEL_CS181_M_BRAVIS_F3\New_common.bat

	

����ģ��
python test1.py

������Դ (VS���ű��뼴��)
make M101_COOLCEL_CS181_M_BRAVIS_F3 gsm Resgen



