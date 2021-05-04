3. 接上題, 做對應的統計 ans[ c-'A' ] ++ 或 ans[ c-'a' ] ++

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
			//if(c>='A' && c<='Z') printf("%d ",c-'A');
			//else if(c>='a' && c<='z') printf("%d ",c-'a');
			if(c>='A' && c<='Z') ans[c-'A' ]++;
			else if(c>='a' && c<='z') ans[c-'a' ]++;
			for(int i=0;i<26;i++)
			{
				printf("%c %d\n",'A'+i,ans[i]);
			}
		}
	}
}