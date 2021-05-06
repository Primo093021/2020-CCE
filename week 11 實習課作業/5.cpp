第五題 基礎題:整數二元四則運算

#include <stdio.h>
int main()
{
	int a,b;
	char c;
	scanf("%d %c %d",&a,&c,&b);
	if(c=='+')
	{
		printf("%d",a+b);
	}
	else if(c=='-')
	{
		printf("%d",a-b);
	}
	else if(c=='*')
	{
		printf("%d",a*b);
	}
	else if(c=='/')
	{
		printf("%d",a/b);
	}
}