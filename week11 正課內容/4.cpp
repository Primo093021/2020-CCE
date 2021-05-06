<<<<<<< HEAD:week11 正課內容/4.cpp
#include <stdio.h>
#include <stdlib.h> //qsort()
#include <string.h> //strcmp()
char name[2000][80];
char others[80];
int compare( const void *p1, const void *p2 )
{//            �ন�u�r�ꪺ���Сv
	char*s1=(char*)p1;
	char*s2=(char*)p2;
	if(strcmp(s1,s2)> 0) return 1;
	if(strcmp(s1,s2)==0) return 0;
	if(strcmp(s1,s2)< 0) return -1;
	//return strcmp(s1,s2);//�ڭ̦b�Ĥ@���Ъ��ɭԡA�o�˼g
	//return strcmp((char*)p1,(char*)p2);
}
int main()
{
	int N;
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		scanf("%s", name[i] );
		gets( others );
	}

	qsort( name, N, 80, compare );

	printf("%s ", name[0] );//�}�Y
	int ans=1;

	for(int i=0; i<N-1; i++){
		if( strcmp( name[i], name[i+1] ) == 0 ){
			ans++;
		}else{
			printf("%d\n", ans );//����
			printf("%s ", name[i+1] );//�s���}�Y
			ans=1;
		}
	}
	printf("%d\n", ans );//����
}
=======
4. 老師把 week11-4.cpp 提供給你, 把今天考試的題目, 用練習模式, 在右邊, 補上5行的 compare() 內容, 並加上註解。

#include <stdio.h>
#include <stdlib.h> //qsort()
#include <string.h> //strcmp()
char name[2000][80];
char others[80];
int compare( const void *p1, const void *p2 )
{//            轉成「字串的指標」
	char*s1=(char*)p1;
	char*s2=(char*)p2;
	if(strcmp(s1,s2)> 0) return 1;
	if(strcmp(s1,s2)==0) return 0;
	if(strcmp(s1,s2)< 0) return -1;
	//return strcmp(s1,s2);//我們在第一次教的時候，這樣寫
	//return strcmp((char*)p1,(char*)p2);
}
int main()
{
	int N;
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		scanf("%s", name[i] );
		gets( others );
	}

	qsort( name, N, 80, compare );

	printf("%s ", name[0] );//開頭
	int ans=1;

	for(int i=0; i<N-1; i++){
		if( strcmp( name[i], name[i+1] ) == 0 ){
			ans++;
		}else{
			printf("%d\n", ans );//結尾
			printf("%s ", name[i+1] );//新的開頭
			ans=1;
		}
	}
	printf("%d\n", ans );//結尾
}
>>>>>>> 18f93cf07612ee2c347b20c71cee295b49343788:4.cpp
