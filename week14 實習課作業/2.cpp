第二題 基礎題:大位王

#include <stdio.h>
int main()
{
	char c;
	scanf("%c",&c);
	if(c==' ') scanf("%c",&c);
	if(c=='-') scanf("%c",&c);
	printf("%c\n",c);
}