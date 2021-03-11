第八題 基礎題:整數轉換為等級
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n>=90)
	{
		printf("A\n");
	}
	else if(n>=80)
	{
		printf("B\n");
	}
	else if(n>=60)
	{
		printf("C\n");
	}
	else printf("F\n");
}