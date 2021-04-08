3.請用老師的 hackmd.io/@jsyeh/ctutor 裡, 有今天上課示範的字串排序-qsort()版, 在 C Tutor 官網跑跑看, 並改一下線條!

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//char line[100][10];
int compare( const void * p1, const void * p2 ){
    char * s1 = (char*) p1;
    char * s2 = (char*) p2;
    
    return strcmp( s1, s2);
}
char line[4][10]={"decline","proper","majority","bullet"};
//char temp[10];
int main()
{
    int n=4;
    //scanf("%d", &n);
    //for(int i=0; i<n; i++){
    //    scanf("%s", line[i]);
    //}
    
    qsort( line, n, sizeof(char[10]), compare);
    
    for(int i=0; i<n; i++){
        printf("%s\n", line[i]);
    }
}