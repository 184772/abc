#include <stdio.h>
#include <string.h>
#include <windows.h>


 
int main() {
 char *p="abcdef";
 *p='w';//����������ʽ�ӣ�����ͻ��������Ϊp�������a�ĵ�ַ������abcdef���Ǵ��������أ������ڴ��һ����̬����׼ȷ˵��ֻ����������
       //��̬�������ǲ��ܸ�д�ģ�abcdef�ǳ�������֪��Ϊʲô�Ļ�Ҫ�������ˣ� 
 printf("%s",p);
  return 0;
}



