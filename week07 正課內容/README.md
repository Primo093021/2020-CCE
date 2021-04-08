#第07週 程式設計二上課內容

## 1.安裝好 C Tutor, 把左邊小黑/右邊C Tutor網頁,截1張圖上傳

![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week07%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/1.png?raw=true)

## 2.請用瘋狂程設-練習模式, 把今天考試的「字串排序」,,改用 qsort() 快速排序寫寫看

```C
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char a[100][10];
int compare(const void *p1,const void*p2)
{
	char *s1=(char*)p1;
	char *s2=(char*)p2;
	return strcmp(s1,s2);
}
int main()
{
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++)
	{
		scanf("%s",a[i]);
	}
	
	qsort(a,N,10,compare);
	//快速排序(陣列、n個、每個有多大、比較的函式);
	
	for(int i=0;i<N;i++)
	{
		printf("%s\n",a[i]);
	}
}
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week07%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/2.png?raw=true)

## 3.請用老師的 hackmd.io/@jsyeh/ctutor 裡, 有今天上課示範的字串排序-qsort()版, 在 C Tutor 官網跑跑看, 並改一下線條!

```C
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
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week07%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/3.png?raw=true)

## 4.下週考試題目: 瘋狂程設-左上角「CPE顆星廣場」-選CPE一顆星, Ctrl-F 找 10420, 練習模式寫寫看

```C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int comp(const void*a,const void*b)
{
	return strcmp((char*)a,(char*)b);
}
int main()
{
	int n,i,j,k;
	char dict[2000][80];
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		gets(dict[i]);
		for(j=0;dict[i][j]!=' ';j++);
		dict[i][j]='\0';
	}
	qsort(dict,n,80,comp);
	k=0;
	for(i=0;i<n;i++)
	{
		if(strcmp(dict[i],dict[k])!=0)
		{
			printf("%s %d\n",dict[k],i-k);
			k=i;
		}
	}
	printf("%s %d\n",dict[k],i-k);
}
```

![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week07%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/4.png?raw=true)

## 5.用你的 C Tutor, 跑字串排序的範例 https://hackmd.io/@jsyeh/ctutor 可剪貼

```C
char *p1, *p2;
char line[4][10]={"jkl", "ghi", "def", "abc"};
char temp[10];
int main() {
  int n=4;
  for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
      p1=line[i]; p2=line[j];
      if( strcmp(line[i],line[j]) > 0 ){
        strcpy(temp, line[i]);
        strcpy(line[i], line[j]);
        strcpy(line[j], temp);
      }
    }
  }
  
  for(int i=0; i<n; i++){
    printf("%s\n", line[i]);
  }
  
  return 0;
}
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week07%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/5.png?raw=true)
