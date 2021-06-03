第一題 進階題:億萬富翁

#include <stdio.h>
#include <string.h>
char line[1000];
int main()
{
	scanf("%s",line);
	int n=strlen(line);
	for(int i=0;i<n;i++)
	{
		if((n-i)%3==0 && i!=0) printf(",");
		printf("%c",line[i]);
	}
}
