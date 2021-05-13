第八題 基礎題:找千位數

#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",(n%10000)/1000);
}
