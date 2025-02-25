#include <stdio.h>
#include <string.h>
#include <windows.h>


 
int main() {
 char *p="abcdef";
 *p='w';//如果加了这个式子，程序就会崩溃，因为p存入的是a的地址，而“abcdef”是存在哪里呢？答案是内存的一个静态区，准确说是只读数据区，
       //静态区内容是不能改写的（abcdef是常量，不知道为什么的话要看基础了） 
 printf("%s",p);
  return 0;
}



