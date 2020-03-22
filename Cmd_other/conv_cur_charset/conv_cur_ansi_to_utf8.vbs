

charset_old = "GB2312"
charset_new = "UTF-8"


' ת������Ŀ¼, �����в����ڵ��ļ���:
ConvPath ".\\..\\..\\Macro",charset_new
ConvPath ".\\..\\..\\Help",charset_new
ConvPath ".\\..\\..\\Help\\Test",charset_new
ConvPath ".\\..\\..\\Help\\Tmp",charset_new
ConvPath ".\\..\\..\\node",charset_new
ConvPath ".\\..\\..\\node\\android",charset_new
ConvPath ".\\..\\..\\node\\android\\app",charset_new
ConvPath ".\\..\\..\\node\\android\\base",charset_new
ConvPath ".\\..\\..\\node\\android\\sys",charset_new
ConvPath ".\\..\\..\\node\\Pythons\\install",charset_new
ConvPath ".\\..\\..\\node\\Pythons\\study",charset_new
ConvPath ".\\..\\..\\node\\Pythons\\sqlite3",charset_new
ConvPath ".\\..\\..\\node\\Pythons\\tfTUT",charset_new
ConvPath ".\\..\\..\\node\\Pythons\\tfTUT\\tf5_example2",charset_new
ConvPath ".\\..\\..\\node\\Pythons\\tfTUT\\tf11_build_network",charset_new
ConvPath ".\\..\\..\\node\\Pythons\\tfTUT\\tf12_plot_result",charset_new
ConvPath ".\\..\\..\\node\\Pythons\\tfTUT\\tf14_tensorboard",charset_new
ConvPath ".\\..\\..\\node\\Pythons\\tfTUT\\tf15_tensorboard",charset_new
ConvPath ".\\..\\..\\node\\Pythons\\tfTUT\\tf16_classification",charset_new
ConvPath ".\\..\\..\\node\\Pythons\\tfTUT\\tf17_dropout",charset_new
ConvPath ".\\..\\..\\node\\Pythons\\tfTUT\\tf18_CNN2",charset_new
ConvPath ".\\..\\..\\node\\Pythons\\py_test",charset_new
ConvPath ".\\..\\..\\node\\ToolsMsg",charset_new
ConvPath ".\\..\\..\\Set",charset_new

' ת������Ŀ¼:
convertct ".\\..\\..\\README_utf8.txt",charset_new

MsgBox "�ַ�����ת������",,"tya��ʾ"
  
'����ȡ���ļ�������ָ������д���ļ�
Function ConvPath(fdpath,charset)
	Set fso = CreateObject("scripting.filesystemobject")
	Set fd = fso.GetFolder(fdpath)
	Set fl=fd.Files
	For each f in fl
	 convertct f.Path,charset
	Next
End Function
  
'����ȡ���ļ�������ָ������д���ļ�
Function convertct(filepath,charset)
	Dim FileName, FileContents, dFileContents
	FileName = filepath 
	FileContents = LoadFile(FileName)
	Set savefile = CreateObject("adodb.stream")
	savefile.Type = 2  '����1Ϊ�����ƣ�2Ϊ�ı���
	savefile.Mode = 3
	savefile.Open()
	savefile.charset = charset
	savefile.Position = savefile.Size
	savefile.Writetext(FileContents)  'writeд������,writetextд�ı���
	savefile.SaveToFile filepath,2
	savefile.Close()
	set savefile = nothing
End Function

'���ļ���������ȡ�ļ�
Function LoadFile(Path)
    Dim Stm2
    Set Stm2 = CreateObject("ADODB.Stream")
    Stm2.Type = 2
    Stm2.Mode = 3
    Stm2.Open
    Stm2.Charset = CheckCode(path)
    'Stm2.Charset = "UTF-8"
    'Stm2.Charset = "Unicode"
    'Stm2.Charset = "GB2312"
    Stm2.position = Stm2.Size
    Stm2.LoadFromFile Path
    LoadFile = Stm2.ReadText
    Stm2.Close
    Set Stm2 = Nothing
End Function


'�ú�����鲢�����ļ��ı�������
Function CheckCode(file)
	Dim slz
	set slz = CreateObject("Adodb.Stream") 
	slz.Type = 1
	slz.Mode = 3
	slz.Open
	slz.Position = 0
	slz.Loadfromfile file
	Bin=slz.read(2)
	If is_valid_utf8(read(file)) Then
	Codes="UTF-8"
	ElseIf AscB(MidB(Bin,1,1))=&HFF and AscB(MidB(Bin,2,1))=&HFE Then
	Codes="Unicode"
	Else
	Codes="GB2312"
	End if
	slz.Close
	Set slz = Nothing
	CheckCode = Codes
End Function


'��Byte()����ת��String�ַ���
Function read(path)
    Dim ado, a(), i, n
    Set ado = CreateObject("ADODB.Stream")
    ado.Type = 1 : ado.Open
    ado.LoadFromFile path
    n = ado.Size - 1
    ReDim a(n)
    For i = 0 To n
        a(i) = ChrW(AscB(ado.Read(1)))
    Next
    read = Join(a, "")
End Function


'׼ȷ��֤�ļ��Ƿ�Ϊutf-8������֤��BOMͷ��uft-8�ļ���
Function is_valid_utf8(ByRef input) 'ByRef�����Ч��
    Dim s, re
    Set re = New Regexp
    s = "[\xC0-\xDF]([^\x80-\xBF]|$)"
    s = s & "|[\xE0-\xEF].{0,1}([^\x80-\xBF]|$)"
    s = s & "|[\xF0-\xF7].{0,2}([^\x80-\xBF]|$)"
    s = s & "|[\xF8-\xFB].{0,3}([^\x80-\xBF]|$)"
    s = s & "|[\xFC-\xFD].{0,4}([^\x80-\xBF]|$)"
    s = s & "|[\xFE-\xFE].{0,5}([^\x80-\xBF]|$)"
    s = s & "|[\x00-\x7F][\x80-\xBF]"
    s = s & "|[\xC0-\xDF].[\x80-\xBF]"
    s = s & "|[\xE0-\xEF]..[\x80-\xBF]"
    s = s & "|[\xF0-\xF7]...[\x80-\xBF]"
    s = s & "|[\xF8-\xFB]....[\x80-\xBF]"
    s = s & "|[\xFC-\xFD].....[\x80-\xBF]"
    s = s & "|[\xFE-\xFE]......[\x80-\xBF]"
    s = s & "|^[\x80-\xBF]"
    re.Pattern = s
    is_valid_utf8 = (Not re.Test(input))
End Function