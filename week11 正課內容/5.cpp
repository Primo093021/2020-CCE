5. 今天第3節課的重點: 上週練習的 UVA 10062 告訴我頻率。 我們分成6個步驟來解。 Step01: 利用 gets(line) 配合 for迴圈, 把資料一次讀1行。失敗的話就可以離開迴圈。 Step02: 利用「火車掛車廂」的想法, 讓它可以在每筆 Test Data 的 Output 中間, 有空行。

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
