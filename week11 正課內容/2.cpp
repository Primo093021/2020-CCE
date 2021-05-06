#include <stdio.h>
typedef struct data
{
    char c;///哪一個字母
    int ans;///出現幾次
}DATA;
///struct data listA;
DATA listA;
int main()
{
    listA.c='A';
    listA.ans=1;
    printf("%c %d\n",listA.c,listA.ans);
}

