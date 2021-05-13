1. UVA 10062 告訴我頻率, 使用比較簡單的寫法, 自己用2層for迴圈, 自己寫交換的程式 (老師寫錯囉... 下一個作業) 目前只完成 Part 1: 依字母的頻率, 從少到多排序

#include <stdio.h>
char line[2000];
int main()
{
	for(int t=0;gets(line);t++)
	{
		int ans[256]={};        //ans[256]={0,0,0,0,0,0,0,0,0,0,...,0};
		char ascii[256];//希望有個ascii[256]={0,1,2,3,4,5,6,7,....,255};
		for(int i=0;i<256;i++) ascii[i]=i;
		for(int i=0;line[i]!=0;i++)
		{
			char c=line[i];
			ans[c]++;
		}
		for(int i=0;i<256;i++)
		{
			for(int j=i+1;j<256;j++)
			{
				if(ans[i]>ans[j])//如果順序不對，要交換
				{
					int temp=ans[i];
					ans[i]=ans[j];
					ans[j]=temp;
					char c=ascii[i];
					ascii[i]=ascii[j];
					ascii[j]=c;
				}
			}
		}
		if(t>0) printf("\n");
		for(int i=0;i<256;i++)
		{
			if(ans[i]>0) printf("%d %d\n",ascii[i],ans[i]);
		}
	}
}