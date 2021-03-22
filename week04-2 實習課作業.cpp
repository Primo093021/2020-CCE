第二題 進階題:擲骰統計

#include <stdio.h>
#include <string.h>
int main()
{
	char s[1000];
	int a=0,b=0,c=0,d=0,e=0,f=0;
	scanf("%s",&s);
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]=='1')
		{
			a++;
		}
		if(s[i]=='2')
		{
			b++;
		}
		if(s[i]=='3')
		{
			c++;
		}
		if(s[i]=='4')
		{
			d++;
		}
		if(s[i]=='5')
		{
			e++;
		}
		if(s[i]=='6')
		{
			f++;
		}
	}
	printf("1:%d\n",a);
	printf("2:%d\n",b);
	printf("3:%d\n",c);
	printf("4:%d\n",d);
	printf("5:%d\n",e);
	printf("6:%d\n",f);
}