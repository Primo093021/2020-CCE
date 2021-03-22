3.試著先 p2=p1, 然後 *p2=400, 再印出來。
#include <stdio.h>
int main()
{
    int n1=10,n2=20,n3=30;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
    int *p=&n1;
    *p=200;              /*p1裡面放的是n1的住址 &n1*/
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
    int *p2=&n3;
    *p2=300;             /*p2裡面放的是n3的住址 &n3*/
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
    p2=p;                /*p2叛逃，改存p1裡面的東西*/
    *p2=400;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
    return 0;
}
