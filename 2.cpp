2. 接上題, 能每個字母做大小寫轉換嗎? 先能判斷「大寫」 「小寫」 「其他」

#include <stdio.h>
char line[10000];
int ans[26];
int main()
{
	int n;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++)
	{
		gets(line);
		for(int k=0;line[k]!=0;k++)
		{
			char c=line[k];
			if(c>='A' && c<='Z') printf("大");
			else if(c>='a' && c<='z') printf("小");
			else printf("他");
		}
	}
}
