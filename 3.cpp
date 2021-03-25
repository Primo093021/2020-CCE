#include <stdio.h>
///要從簡單開始，慢慢增加，並且讓C Tutor可協助教學
///本週有2個主題可以選:2D 陣列(比較有接上週進度)
///vs. 字串排序(比較有時事的感覺) vs.CPE(時事&簡單)
///字串剛好可以接在2D 陣列後面教
int main()
{///(3)了解什麼是"很多"字串
    char line[5][10]={"decline","proper","majority","bullet","shop"};
    char *p;
    for(int i=0;i<5;i++)
    {
        p=line[i];
        printf("%s\n",line[i]);
    }
}
