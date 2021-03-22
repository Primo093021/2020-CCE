第一題 進階題:除惡務盡

#include <stdio.h>
#include <string.h>
int main()
{
	char s[1000];
	scanf("%s",&s);
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]!='2')
	{
		printf("%c",s[i]);
	}	
	}
	printf("\n");
}