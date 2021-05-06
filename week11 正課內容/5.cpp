#include <stdio.h>
char line[2000];//其實[1001]就可以了
int ans[256];//統計出現的次數
int main()
{
	//迴圈
	//step1: Input 一次一行，1000字母(不知道有幾行)
	
	for(int t=0;gets(line)!=NULL;t++)
	{
         	if(t>0) printf("\n");//step2: 跳行問題
		printf("blahblah\n");
		printf("blahblah\n");  
		printf("blahblah\n");     
	}
}//奇怪的迴圈
