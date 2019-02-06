/***********************************************************************/
/****************************** base  **********************************/
/***********************************************************************/
�������⣺
reset �����ύ
diff HEAD

�´���:
git clone git@192.168.2.139:/home/git/9820.git




/***********************************************************************/
/**************************** git ���� *********************************/
/***********************************************************************/
//[Num]
git help

[1.0] ----------------------------------

һ��git�ͻ��ˣ����زֿ⣩��һЩ����
[1.1] �����˻�(��Ҫ��github�˻�����һ��)
git config --global user.name xxx
git config --global user.email xxx@foxmail.com

git config --global user.name xiaoj
git config --global user.email jia.xiao@sz-speed.cn
	
//�鿴���ص�global��Ϣ
git config [--local|--global|--system] --list/-l��������������������
//ɾ��user.name��Ϣ�����user.name��Ӧ���ֵ������unset-all��ɾ��
git config [--local|--global|--system] --unset[-all] user.name


[1.2] �鿴����
git config --list
//user.name=xiaoj
//user.email=jia.xiao@sz-speed.cn
//core.repositoryformatversion=0
//core.filemode=true
//core.bare=false
//core.logallrefupdates=true


[1.3] ����git���زֿ�
git init
//��ʱ�������ʾ : 
//inialized empty Git repository in d://com/liu/.git

//�Ѿ���ӹ� ��ʾ: 
//Reinitialized existing Git repository in /home/xiaoj/testaaa/.git/


[1.4] �鿴git״̬
git status
//# On branch master
//# Changes to be committed:
//#   (use "git reset HEAD <file>..." to unstage)
//#
//#       new file:   da.h
//#
//# Changes not staged for commit:
//#   (use "git add <file>..." to update what will be committed)
//#   (use "git checkout -- <file>..." to discard changes in working directory)
//#
//#       modified:   aaa.txt
//#
//# Untracked files:
//#   (use "git add <file>..." to include in what will be committed)
//#
//#       db.h


[1.5] ���git�ļ����ݴ�������Ҫ�Ͱ汾�����֣� 
git add <name>
git add bbb.txt
git add aaa.txt


[1.6] git�ύ�ļ�
git commit -m "add a function in test.java"
//-m��ʾע�ͣ�Ϊ�ύʱ��˵��������Ҫ�У�


[1.7] gitɾ���ļ����У�
git rm test.txt          //ɾ���ļ�
git rm -r filebook     //ɾ���ļ���
//git rm��ֱ��ɾ������������git rm�Ὣ���ļ��Ĳ�����¼ɾ������ֱ��ɾ��������ɾ���������ļ���û��ɾ���ʹ��ļ���صļ�¼��git rm����ڰ汾����������в�����־������ֱ��ɾ��û�С�
//�������������ֲ����ڰ汾����ɾ���ļ���
git rm test.txt   =>    git commit -m 'delete a file'
rm test.txt        =>    git commit -am 'delete a file'
//ע�⣺����git rm����ɾ��һ���ļ������һ���ļ��Ѿ����ύ���汾�⣬��ô����Զ���õ�����ɾ������ҪС�ģ���ֻ�ָܻ��ļ������°汾����ᶪʧ���һ���ύ�����޸ĵ����ݡ�


/***********************************************************************/
/**************************** git ��־ *********************************/
/***********************************************************************/
[2.0] ----------------------------------

[2.1] git������־
#��ʾ��ǰ��֮ǰ�İ汾��
git log --decorate --graph --oneline --all
//* 3c38201 (HEAD, master) test 2
//* be74e6e test

#���汾��ʷ��ʾΪһ�У���ʷ�汾��ȫ����ʾ
git log --pretty=oneline
//3c38201268daa8f79c60b92715fa4967cd51c55b test 2
//be74e6e044a011f78c6cf3e2cd3c038c6b78d3c1 test

#���汾��ʷ��ʾΪһ�У���ʷ�汾�Ų�����ʾ
git log --pretty=oneline --abbrev-commit
git log --graph      #�鿴��֧�ϲ�ͼ

git log
//commit 3c38201268daa8f79c60b92715fa4967cd51c55b
//Author: xiaoj <jia.xiao@sz-speed.cn>
//Date:   Fri Nov 23 02:52:18 2018 -0500
//
//    test 2
//
//commit be74e6e044a011f78c6cf3e2cd3c038c6b78d3c1
//Author: xiaoj <jia.xiao@sz-speed.cn>
//Date:   Fri Nov 23 02:50:30 2018 -0500
//
//    test

git reflog
//3c38201 HEAD@{0}: reset: moving to 3c38201
//be74e6e HEAD@{1}: reset: moving to HEAD^
//3c38201 HEAD@{2}: commit: test 2
//be74e6e HEAD@{3}: commit (initial): test

git log �C�Cpretty=oneline


[2.2] �汾����
//ִ�а汾�˻غ󣬱��ع����������ݻ��Զ��ͻ��˵��İ汾��汾�����ݱ���ͬ��
git reset --hard HEAD^    ���˵���һ���汾
git reset --hard HEAD^^   ���˵����ϸ��汾���Դ����ƣ�һ���ύ��Ϊһ���汾
git reset --hard HEAD~100
git reset --hard e9efa77  ���˵� e9efa77  �汾


/***********************************************************************/
/*************************** git chechout ******************************/
/***********************************************************************/

[3.0] ----------------------------------
[3.1] ����

git diff test_branch_name���������������������������������������������� #�鿴��ǰbranch��test_branch_name�д��������
git push XXX branch_name������������������������������������������������#�ϴ�ָ����branch��Զ��


[3.2] git��ԭ����
//�����������Ĳ����������ᶪʧ�ݴ����Ĳ���(add�����ܽ�������ӵ��ݴ���)��
//ʵ���Ͼ����ð汾����İ汾�滻�������İ汾�����۹��������޸Ļ���ɾ���������ԡ�һ����ԭ��
git checkout -- readme.txt


[3.3] git�ݴ�������������������
//�������޸����ļ�������ִ����add������ûִ��commit���ݴ������ǿ��Գ�����
git reset HEAD readme.txt
//��ע��git reset����ȿ��Ի��˰汾��Ҳ���԰��ݴ������޸Ļ��˵�����������������HEADʱ����ʾ���µİ汾��


[3.4] git�汾������������������
git fetch --all
git reset --hard origin/master

/***********************************************************************/
/**************************** git diff   *******************************/
/***********************************************************************/
[4.0] ----------------------------------

[4.1] �Ա� git diff
git diff aaa.txt
//diff --git a/aaa.txt b/aaa.txt
//index 13cadff..ca5a3a3 100644
//--- a/aaa.txt
//+++ b/aaa.txt
//@@ -1,4 +1,4 @@
//-
//+asdfasdf
//		sdfasdfasdfi:sdfasdfasdfasdf
//		sdfasdfasdfi:sdfasdfasdfasdf
// asdfasdf1111








/***********************************************************************/
/**************************** git remote *******************************/
/***********************************************************************/
[5.0] ----------------------------------

[5.1] remote


git remote add XXX https://github.com/username/repo_name.git�� ����#����github������
git clone git://github.com/your_account/aimed_repo.git��������������#����һ��repo������
git remote -v��������������������������������������������������������������#�鿴�������õ�url������Ϣ

git status������������������������������������������������������������������#�鿴��ǰ������
git branch�������������������������������������������������������� #�鿴�������е�
git branch -a������������������������������������������������������#�鿴Զ�̵����з�֧
git branch -d branch_name���������������������������������������������� #ɾ������branch_name��һ��֧
git push origin --delete branch_name�������������������������������� �� #ɾ����Ϊbranch_name��Զ�̷�֧
git pull��������������������������������������������������������������������#��Զ���ϵİ汾�뱾�ذ汾���кϲ����൱��get fetch + git merge


[5.2] ��github/giteeЭͬʹ�ã�git�����йܷ�������
��GitHub��ȣ����ƣ�Gitee��Ҳ�ṩ��ѵ�Git�ֿ⡣���⣬�������˴���������⡢��Ŀ��ʾ�ȹ��ܡ������Ŷ�Э�����������ƻ��ṩ����Ŀ���������йܡ��ĵ�����ķ���5������С�Ŷ���ѡ�

[5.3] ����Զ�ֿ̲����ܵ�½
��1�����û���Ŀ¼�£�������û��.sshĿ¼������У��ٿ������Ŀ¼����û��id_rsa��id_rsa.pub�������ļ�������Ѿ����ˣ���ֱ��������һ�������û�У���Shell��Windows�´�Git Bash��������SSH Key��ssh-keygen -t rsa -C "xxx@foxmail.com"    
��ע��һ·�س���ִ������ id_rsa ˽Կ �� id_rsa.pub ��Կ��Windows�û���git bash����������ָ��
��2�����key�����ݣ�������������ӵ�gitHub��SSH key��
windowsλ�ã�?C:\Users\�û���\.ssh\id_rsa.pub
Linuxλ�ã�cat ~/.ssh/id_rsa.pub



��3��ssh -T git@github.com   #��֤key��������ʾ����yes�����Ϊ��������
����ssh -T git@git.oschina.net

[5.4] ���Զ�ֿ̲�
git remote add origin https://github.com/xxx/LearnGit.git��https��ʽ��
��ssh��ʽ��
�˴�����Ϊhttps��ַҲ������ssh��ַ��orignΪ���õ�Զ�ֿ̲�ı�����ǿ�ҽ���ʹ��ssh��ʽ����Ϊhttps��ʽÿ�ζ�Ҫ�����û���������
�����Ҫ�޸Ĵ���Э�飺
��1��git remote rm <Զ��������>��ɾ��Զ�ֿ̲⣩
��2�����ô��䷽ʽ��Ŀ��Զ�ֿ̲�
��3��git push -u <Զ��������> <���ط�֧��>

���Ƶ����Զ�ֿ̲ⷽ����
git remote add origin git@gitee.com:xxx/LearnGit.git��ssh��ʽ��
���git remote addʧ�ܣ�������fatal: remote origin already exists.
˵�����ؿ��Ѿ�������һ������origin��Զ�̿⣬��ʱ����������git remote -v�鿴Զ�̿���Ϣ��
origin  git@github.com:xxx/LearnGit.git (fetch)
origin  git@github.com:xxx/LearnGit.git (push)
��ʾ���ؿ��Ѿ�������Github�ϵ�originԶ�̿⣬��Ҫ��ɾ�����е�Github�⣺
git remote remove origin
�ٹ������Ƶ�Զ�̿⣨ע��·������Ҫ��д��ȷ���û�������
git remote add gitee git@gitee.com:xxx/LearnGit.git

��Ϊgit�����Ƿֲ�ʽ�汾����ϵͳ������ͬ��������һ��Զ�̿⣬��ȻҲ����ͬ������������Զ�̿⣬����һ�����ؿ���Լȹ���GitHub���ֹ������ƣ�
ʹ�ö��Զ�̿�ʱ��Ҫע��git��Զ�̿����Ĭ��������origin������ж��Զ�̿⣬������Ҫ�ò�ͬ����������ʶ��ͬ��Զ�̿⡣��Ȼ��learngit���ؿ�Ϊ������ɾ���ѹ�������Ϊorigin��Զ�̿⣺
git remote rm origin
Ȼ���ȹ���GitHub��Զ�̿⣺
git remote add github git@github.com:xxx/LearnGit.git
ע�⣬Զ�̿�����ƽ�github������origin�ˡ�
���ţ��ٹ������Ƶ�Զ�̿⣺
git remote add gitee git@gitee.com:xxx/LearnGit.git
ͬ��ע�⣬Զ�̿�����ƽ�gitee������origin��
���ڣ�������git remote -v�鿴Զ�̿���Ϣ�����Կ�������Զ�̿⣺gitee   git@gitee.com:xxx/LearnGit.git (fetch)
gitee   git@gitee.com:xxx/LearnGit.git (push)
github  git@github.com:xxx/LearnGit.git (fetch)
github  git@github.com:xxx/LearnGit.git (push)
���Ҫ���͵�GitHub��ʹ�����
git push github master
���Ҫ���͵����ƣ�ʹ�����
git push gitee master
����һ�������ؿ�Ϳ���ͬʱ����Զ�̿⻥��ͬ����


[5.5] �鿴Զ�ֿ̲⼰����Э��
git remote
git remote -v  �鿴���ƺ���ϸ��ַ


[5.6] ɾ��Զ�ֿ̲�
git remote remove <Զ��������>


[5.7] ���ͱ��ط�֧��Զ�ֿ̲�
git push <Զ��������> <���ط�֧��>:<Զ�̷�֧��>
���ʡ��Զ�̷�֧�������ʾ�����ط�֧������֮���ڡ�׷�ٹ�ϵ����Զ�̷�֧��ͨ������ͬ�����������Զ�̷�֧�����ڣ���ᱻ�½���
git push origin <���ط�֧��>
git push origin master
�����ǰ��֧������������׷�ٹ�ϵ�������ʹ��-uѡ��ָ��һ��Ĭ�������������Ժ�Ϳ��Բ����κβ���ʹ��git push��
git push -u <Զ��������> <���ط�֧��>  ���磺git push -u origin master


[5.8] ��Զ�ֿ̲��¡Ϊ���زֿ�
git clone git@github.com:xxx/LearnGit.git
ע�⣺
��1������ʹ�ñ���
��2��Ĭ������£���Զ��clone�����صĿ�ֻ�ܿ���master��֧�����Ҫ��Զ�̵ķ�֧ͬ�������أ�
git checkout -b <���ط�֧��> <Զ��������>/<Զ�̷�֧��>
ǰ����Զ��<Զ��������>���������Ϊ<Զ�̷�֧��>�ķ�֧������<���ط�֧��>��<Զ�̷�֧��>���һ�¡�


[5.9] ���زֿ����
��Զ�̴洢���еĸ��ĺϲ�����ǰ��֧�С���Ĭ��ģʽ�£�git pull��git fetch���git merge FETCH_HEAD����д����׼ȷ��˵��git pullʹ�ø����Ĳ�������git fetch��������git merge���������ķ�֧ͷ�ϲ�����ǰ��֧�С� ʹ��--rebase��������git rebase������git merge��
������һЩʾ����
git pull <Զ��������> <Զ�̷�֧��>:<���ط�֧��>
���磬Ҫȡ��origin������next��֧���뱾�ص�master��֧�ϲ�����Ҫд���������� -
git pull origin next:master
���Զ�̷�֧(next)Ҫ�뵱ǰ��֧�ϲ�����ð�ź���Ĳ��ֿ���ʡ�ԡ�����������Լ�дΪ��
git pull origin next
���������ʾ��ȡ��origin/next��֧�����뵱ǰ��֧�ϲ���ʵ���ϣ����ͬ������git fetch����ִ��git merge��
git fetch origin  =>  git merge origin/next
��ĳЩ���ϣ�Git���Զ��ڱ��ط�֧��Զ�̷�֧֮�䣬����һ��׷�ٹ�ϵ(tracking)�����磬��git clone��ʱ�����б��ط�֧Ĭ����Զ��������ͬ����֧������׷�ٹ�ϵ��Ҳ����˵�����ص�master��֧�Զ���׷�١�origin/master��֧��GitҲ�����ֶ�����׷�ٹ�ϵ��
git branch --set-upstream-to=Զ��������/<Զ�̷�֧��>? <���ط�֧��>
����git branch --set-upstream-to=origin/next master��ָ��master��֧׷��origin/next��֧��
git pull origin
���������ʾ�����ص�ǰ��֧�Զ����Ӧ��origin������׷�ٷ�֧��(remote-tracking branch)���кϲ���
�����ǰ��ֻ֧��һ��׷�ٷ�֧����Զ��������������ʡ�ԡ�
git pull
���������ʾ����ǰ��֧�Զ���Ψһһ��׷�ٷ�֧���кϲ���
����ϲ���Ҫ����rebaseģʽ������ʹ�èCrebaseѡ�
git pull --rebase <Զ��������> <Զ�̷�֧��>:<���ط�֧��>

git fetch��git pull������
��1��git fetch���൱���Ǵ�Զ�̻�ȡ���°汾�����أ������Զ��ϲ���
git fetch origin mastergit log -p master..origin/mastergit merge origin/master
��������ĺ��壺
���ȴ�Զ�̵�origin��master����֧�������µİ汾��origin/master��֧��
Ȼ��Ƚϱ��ص�master��֧��origin/master��֧�Ĳ��
�����кϲ�
����������ʵ���������¸������ķ�ʽ�����У�
git fetch origin master:tmpgit diff tmp git merge tmp
��2��git pull���൱���Ǵ�Զ�̻�ȡ���°汾��merge������
git pull origin master
����������ʵ�൱��git fetch �� git merge
��ʵ��ʹ���У�git fetch����ȫһЩ����Ϊ��mergeǰ�����Բ鿴���������Ȼ���پ����Ƿ�ϲ���


[5.10] �鿴/����/�л�/ɾ��/�ϲ���֧
//1) �鿴��֧
git branch
//* master

//2) ������֧
git branch <name>


//3) �������л�����֧
git checkout -b <name>
//��ע��git checkout�������-b������ʾ�������л����൱��������������
git branch <name>git checkout <name>


//4) �л���֧
git checkout <name>
//�л���֧����git bash����ʾΪ��ɫ


//5) ɾ����֧
git branch -d <name>
//�����֧û�кϲ���ɾ����֧�ͱ�ʾ�ᶪʧ�޸ģ���ʱgit�޷�ʹ��-dɾ������ʹ��-Dǿ��ɾ��
git branch -D <name>


//6) �ϲ���֧
git�ϲ�Ĭ��ʹ��Fast forwardģʽ��һ��ɾ����֧���ᶪ����֧��Ϣ��Ҳ�Ϳ����������������ϲ�
git merge <name>     #���ڵ�ǰ��֧���ϲ�����һ����֧��ǰ����Ҫ��֤��֧֮�䲻��ͻ
���ǿ�ƽ���Fast forwardģʽ������ͨģʽ��Git�ͻ���mergeʱ����һ���µ�commit
git merge --no-ff -m "there is a comment" <name>
��Ϊ���κϲ�Ҫ����һ���µ�commit�����Լ���-m��������commit����д��ȥ��
�����У��϶���Ҫ������û�з�֧��ɾ������Ҫ�ӷ�֧��ʷ�ϾͲ鿴���е���ʷ��֧��Ϣ������Ҫʹ����ͨģʽ�ϲ���



[5.16] ����tag
��1��git tag <tagname>   #Ĭ����HEAD�汾
��2����ָ����commit�汾����tag
��Ҫ���ҵ���ʷcommit��id
git log --pretty=oneline --abbrev-commit
Ȼ���ָ����commit����tag��
git tag <tagname> <commitid>
��3����������˵����tag����-aָ����ǩ����-mָ��˵������
git tag -a <tagname> -m "there is a tag description" [<commitid>]
��4��ͨ��-s��˽Կǩ��һ����ǩ��ǩ������PGPǩ��
git tag -s <tagname> -m "there is a tag description" [<commitid>]
�������Ȱ�װgpg��GnuPG�������û���ҵ�gpg������û��gpg��Կ�ԣ��ͻᱨ���ο�GnuPG�����ĵ�����Key��


[5.17] �鿴tag
git tag    #��ʾ��tag���ǰ�ʱ��˳�����У����ǰ���ĸ˳������
�����鿴tag��commit�Ķ�Ӧ��ϵ��������
git log --pretty=oneline --abbrev-commit
�����鿴tag�ĵ���ϸ�����������
git show <tagname>


[5.18] ɾ��tag
�����ı�ǩ��ֻ�洢�ڱ��أ������Զ����͵�Զ�̡����ԣ����ı�ǩ�����ڱ��ذ�ȫɾ����
git tag -d <tagname>
�����ǩ�Ѿ����͵�Զ�̣�Ҫɾ��Զ�̱�ǩ���鷳һ�㣺
��1���ȱ���ɾ����git tag -d <tagname>
��2����Զ��ɾ����git push origin :refs/tags/<tagname>


[5.19] ���ͱ�ǩ��Զ��
git push origin <tagname>
���ߣ�һ��������ȫ����δ���͵�Զ�̵ı��ر�ǩ��
git push origin --tags



/***********************************************************************/
/**************************** git stash *******************************/
/***********************************************************************/
[6.0] ----------------------------------

[6.1] �ֳ��ı�����ָ�: git stash

git stash        #��Ŀǰ�Ĺ����ֳ�����
git stash list   #�鿴���б���Ĺ����ֳ�


#�����ֳ����ڣ�Git��stash���ݴ���ĳ���ط��ˣ�������Ҫ�ָ�һ�£��������취��
git stash apply stash@{0}

#�ָ������ǻָ���stash���ݲ���ɾ��������Ҫ��
git stash drop stash@{0}

#��һ�ַ�ʽ���ã��ָ���ͬʱ��stash����Ҳɾ�ˣ����ַ�ʽʡʱʡ��
git stash pop
//ע��㣺
//��1������ڷ�֧���½��ļ�������δִ��add������stash�޷������ļ����뱣����ֳ�����Ϊstashֻ�Ա��޸ĵı�׷�ٵ��ļ����ݴ�ı����Ч���������ļ�������ִ��add��
//��2������޸ķ�֧�µ��ѱ�׷�ٵ��ļ���������û�ж��޸ĵ��ļ�����add���������ִ��stash�������޸Ļᱻ���뱣����ֳ������ļ���ָ����޸�ǰ��״̬��
//�ָ��ֳ����ļ��ֳ��ֱ��޸ĺ��״̬���ر���ǣ�����޸ĵ��ļ���stashǰ�Ѿ���add�ˣ��ָ��ֳ����ݴ��������ݾͻ���գ��൱������ļ���δ��addһ����


//git add .
//git stash
//git checkout bugFixBranch
//git pull --rebase origin master
//fix the bug
//git add .
//git commit -m ''
//git push
//git checkout test
//git stash pop
//continue new feature's development





[6.2] ����Git UI��ɫ
��Git��ʾ��ɫ�����������������������Ŀ
git config --global color.ui true


[6.3] ���������ļ�
��1����Git�������ĸ�Ŀ¼�´���һ�������.gitignore�ļ���Ȼ���Ҫ���Ե��ļ������ȥ��Git�ͻ��Զ�������Щ�ļ�������Ҫ��ͷд.gitignore�ļ���GitHub�Ѿ�Ϊ����׼���˸��������ļ���ֻ��Ҫ���һ�¾Ϳ���ʹ���ˡ����������ļ�����ֱ�����������https://github.com/github/gitignore
�����ļ���ԭ���ǣ�
���Բ���ϵͳ�Զ����ɵ��ļ�����������ͼ�ȣ�
���Ա������ɵ��м��ļ�����ִ���ļ��ȣ�Ҳ�������һ���ļ���ͨ����һ���ļ��Զ����ɵģ����Զ����ɵ��ļ���û��Ҫ�Ž��汾�⣬����Java���������.class�ļ���
�������Լ��Ĵ���������Ϣ�������ļ��������ſ���������ļ���
����һ����ɵ�.gitignore�ļ����������£�
------------------------------
# Windows:Thumbs.dbehthumbs.dbDesktop.ini

# Python:*.py[ cod]*.so*.egg*.egg-infodistbuild
-------------------------------
��2����.gitignoreҲ�ύ��Git
git add .gitignore
git commit -m "there is a description"
������ˣ���Ȼ����.gitignore�ı�׼��git status�����ǲ�����ʾworking tree clean��
ʹ��Windows��ע�⣺�������Դ���������½�һ��.gitignore�ļ���ϵͳ��ǳ����ǵ���ʾ���������ļ������������ı��༭������桱���ߡ����Ϊ���Ϳ��԰��ļ�����Ϊ.gitignore�ˡ�

��3�����ȷʵ��Ҫ����Ѿ���.gitignore���Ե��ļ���������-fǿ����ӵ�Git
git add -f test.class

��4������.gitignoreд�������⣬��Ҫ�����ĸ�����д���ˣ�������git check-ignore�����飺
git check-ignore -v App.class.gitignore:3:*.class    App.class
��ʾ.gitignore�ĵ�3�й��������App.class����ļ����������ǾͿ���֪��Ӧ���޶��ĸ�����


[6.4] Ϊ�������ñ���
��1��������Լ�д����git st��ʾgit status���ٱ�����co��ʾcheckout��ci��ʾcommit��br��ʾbranch��
git config --global alias.co checkoutgit config --global alias.ci commitgit config --global alias.br branch
�Ժ��ύ�Ϳ��Լ�д�ɣ�
git ci -m "there is a description"
--global������ȫ�ֲ�����Ҳ������Щ��������̨���Ե�����Git�ֿ��¶����á�

��2������git reset HEAD <filename>���Գ����ݴ������޸ģ�unstage�������·Żع���������Ȼ��һ��unstage�������Ϳ�������һ��unstage������
git config --global alias.unstage 'reset HEAD'
�Ϳ��Լ����
git unstage test.py   =   git reset HEAD test.py

��3������һ��git last��������ʾ���һ���ύ��Ϣ��
git config --global alias.last 'log -1'
��������git last������ʾ���һ�ε��ύ��
git lastcommit 015851cbe2902bf01fbba198af5d6705dc0e03ac (HEAD -> dev)
Author: xxx <xxx@foxmail.com>
Date:   Mon Apr 23 13:52:44 2018 +0800
    add git ignore list
��4�����а�lg���ó��ˣ�
git config --global alias.lg "log --color --graph --pretty=format:'%Cred%h%Creset -%C(yellow)%d%Creset %s %Cgreen(%cr) %C(bold blue)<%an>%Creset' --abbrev-commit"
������git lg��Ч����


[6.5] �޸������ļ�
����Git��ʱ�򣬼���--global����Ե�ǰ�û������õģ�������ӣ���ֻ��Ե�ǰ�Ĳֿ������á�
ÿ���ֿ��Git�����ļ�������.git/config�ļ��У�
cat .git/config
-----------------------------------------------------------------------------
//[ core ]
//        repositoryformatversion = 0
//        filemode = false
//        bare = false
//        logallrefupdates = true
//        symlinks = false
//        ignorecase = true
//[ branch "master"]
//[ branch "dev"]
//[ remote "github"]
//        url = git@github.com:xxx/LearnGit.git
//        fetch = +refs/heads/*:refs/remotes/github/*
//[ remote "gitee"]
//        url = git@gitee.com:xxx/LearnGit.git
//        fetch = +refs/heads/*:refs/remotes/gitee/*
-----------------------------------------------------------------------------

����ǰ�û���Git�����ļ������û���Ŀ¼�µ�һ�������ļ�.gitconfig�У�
-----------------------------------------------------------------------------
//[ user ]
//	name = xxx
//	email = xxx@foxmail.com
//[ gpg  ]
//	program = C:\\Program Files (x86)\\gnupg\\bin\\gpg.exe
//[ color ]
//	ui = true
//[ alias ]
//	co = checkout
//	ci = commit
//	br = branch
//	last = log -1
//	lg = log --color --graph --pretty=format:'%Cred%h%Creset -%C(yellow)%d%Creset %s %Cgreen(%cr) %C(bold blue)<%an>%Creset' --abbrev-commit
-----------------------------------------------------------------------------
��������[ alias ]���棬Ҫɾ��������ֱ�ӰѶ�Ӧ����ɾ�����ɡ����ñ���Ҳ����ֱ���޸�����ļ�������Ĵ��ˣ�����ɾ���ļ�����ͨ���������á�


����Э���Ĺ���ģʽͨ�����£�
��1�����Ƚ�Զ�ֿ̲��¡Ϊ���زֿ�
git clone git@github.com:xxx/LearnGit.git
��2���ڱ��ش�����Զ�̷�֧��Ӧ�ķ�֧
git checkout -b <���ط�֧��> origin/<Զ�̷�֧��>
���غ�Զ�̷�֧���������һ�£�
��3���ڱ��ط�֧�������󣬿�����ͼ��git push <Զ��������> <���ط�֧��>�����Լ����޸ģ�
��2���������ʧ�ܣ������Զ�̷�֧�ȱ��ظ��£���Ҫ����git pull��ͼ�ϲ���
��3�����pullʧ�ܲ���ʾ��no tracking information������˵�����ط�֧��Զ�̷�֧�����ӹ�ϵû�д�����������git branch --set-upstream-to=<Զ��������>/<Զ�̷�֧��>? <���ط�֧��>�������ӣ�
��4������ϲ��г�ͻ��������ͻ�����ڱ����ύ��add => commit����
��5��û�г�ͻ���߽������ͻ������git push <Զ��������> <���ط�֧��>���;��ܳɹ���
--------------------- 



/***********************************************************************/
/**************************** git other  *******************************/
/***********************************************************************/

[7.1] �ļ�������: git mv
git mv filename newfilename


[7.2] ���öԱ�/�ϲ�����:
git config --global diff.tool bc3
git config --global difftool.bc3.path "C:\Program Files\Beyond Compare 4\BCompare.exe"

git config --global merge.tool bc3
git config --global mergetool.bc3.path "C:\Program Files\Beyond Compare 4\BCompare.exe"

//Ҳ����ֱ���޸�.gitconfig �ļ���ֱ����������:
C:\Users\Administrator\.gitconfig
//	[diff]
//	    tool = bc3
//	[difftool "bc3"]
//	    path = d:/program files/beyond compare 3/bcomp.exe
//	[merge]
//	    tool = bc3
//	[mergetool "bc3"]
//	    path = d:/program files/beyond compare 3/bcomp.exe

//���úú�ʹ�������� git difftool ������֮ǰ�� git diff �ˡ�
//git difftool ˵���ĵ���http://git-scm.com/docs/git-difftool.html


[7.3] ����ĳ��Ŀ¼���ļ����ϴ�
touch .gitignore
Save:SI\.gitignore
//	MacroSBD/sbd_base.em
//	node/Simple_CTRL_B.h

git difftool -y MacroSBD/sbd_base.em
git difftool -y node/Simple_CTRL_B.h


/***********************************************************************/
/**************************** git windows  *****************************/
/***********************************************************************/
window��git���� github ��Ŀ

1) window����
https://git-scm.com/downloads
	
2) clone
git clone https://github.com/seefs/Source_Insight.git

git remote add github https://github.com/seefs/Source_Insight.git
git remote rm origin
git remote -v

git remote set-url --push github https://github.com/seefs/Source_Insight11.git
git remote -v

3) cfg
git config --global user.name xj
//git config --global user.name xj_01
git config --global user.email seefs@163.com
git config --list

4) pull/push
//��ȡԶ�ֿ̲⣺
git pull origin master

//����Զ�ֿ̲⣺
git push origin master
//�ύ����test��֧��ΪԶ�̵�master��֧
git push origin test:master
//�ύ����test��֧��ΪԶ�̵�test��֧
git push origin test:test
//���� github �û�������:
//  seefs@163.com, xjs0f0s0

5) ������Щ���ֲ��ϴ�, ������֧
git branch myCustom
git checkout myCustom
git add .
git status
git commit -m "ts, bug chg"

git difftool
git difftool -d
git difftool -d 0c8427888be95166e9c4f948feeca44bfa6e6c72
git difftool -d ef03b673a7dc71c047714191c19dc77aad92ccb9

git mergetool

git checkout master
	
git stash
git checkout bugFixBranch
git pull --rebase origin master
fix the bug
git add .
git commit -m ''
git push
git checkout test
git stash pop


