#include <stdio.h>
///要從簡單開始，慢慢增加，並且讓C Tutor可協助教學
///本週有2個主題可以選:2D 陣列(比較有接上週進度)
///vs. 字串排序(比較有時事的感覺) vs.CPE(時事&簡單)
///字串剛好可以接在2D 陣列後面教
int main()
{///(1)先了解什麼是字串
    char line[10]="decline";
    char line2[10]={'p','r','o','p','e','r','\0'};

    printf("%s\n",line);
    printf("%s\n",line2);

    ///(2)了解字串結尾是'\0'你相信嗎?這是line4:==%s==\n
    char line3[]="majority這是好的，沒問題，要多長有多長";
    char line4[]={'m','a','j','o','r','i','t','y'};
    printf("%s\n",line3);

    printf("你相信嗎?這是line4:==%s==\n",line4);
}

