2. typedef 是 struct 的好朋友, 可以把 type 變簡單, typedef struct data {char c; int ans; } DATA; 可以用簡單的名字 DATA 取代很長的 struct data。請試著在 CodeBlocks 照著實作一下

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
