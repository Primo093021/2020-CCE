<<<<<<< HEAD:week11 正課內容/1.cpp
#include <stdio.h>
unsigned char c;
typedef unsigned char uchar;
uchar d;
int main()
{
    c='A';
    d=c;
    printf("%c",d);
}
=======
1. 老師用課本第7章第7-13頁介紹 typedef 前面是舊名字 新名字; 可以「再定義」, 請試著在 CodeBlocks 實作一下

#include <stdio.h>
unsigned char c;
typedef unsigned char uchar;
uchar d;
int main()
{
    c='A';
    d=c;
    printf("%c",d);
}
>>>>>>> 18f93cf07612ee2c347b20c71cee295b49343788:1.cpp
