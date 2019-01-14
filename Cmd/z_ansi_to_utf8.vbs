'用法：将要更改编码的所有文件放到同一个文件夹中，将文件夹拖到该vbs上，输入要转换成的字符编码
Dim fso,fd,fl,f,fdpath,charset
On Error Resume Next
If WScript.Arguments.Length>=1 Then
 fdpath = WScript.Arguments(0)
Else
 fdpath = InputBox("请输入文件夹路径：","第一个参数")
 If fdpath = "" Then WScript.Quit
End If
If WScript.Arguments.Length>=2 Then
 charset = WScript.Arguments(1)
Else
 charset = InputBox("请输入字符编码类型：","第二个参数")
 if charset = "" then WScript.Quit
 if UCase(charset) = "ANSI" then charset = "GB2312"
End If
Set fso = CreateObject("scripting.filesystemobject")
Set fd = fso.GetFolder(fdpath)
Set fl=fd.Files
For each f in fl
 convertct f.Path,charset
Next
MsgBox "字符编码转换结束",,"tya提示"
  
'将读取的文件内容以指定编码写入文件
Function convertct(filepath,charset)
 Dim FileName, FileContents, dFileContents
 FileName = filepath 
 FileContents = LoadFile(FileName)
 Set savefile = CreateObject("adodb.stream")
 savefile.Type = 2  '这里1为二进制，2为文本型
 savefile.Mode = 3
 savefile.Open()
 savefile.charset = charset
 savefile.Position = savefile.Size
 savefile.Writetext(FileContents)  'write写二进制,writetext写文本型
 savefile.SaveToFile filepath,2
 savefile.Close()
 set savefile = nothing
End Function
'以文件本身编码读取文件
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
'该函数检查并返回文件的编码类型
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
'将Byte()数组转成String字符串
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
'准确验证文件是否为utf-8（能验证无BOM头的uft-8文件）
Function is_valid_utf8(ByRef input) 'ByRef以提高效率
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