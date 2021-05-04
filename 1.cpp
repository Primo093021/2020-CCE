1. 今天發現考試有同學還是不會, 所以從簡單重新練習。瘋狂程設-(左上角)CPE顆星廣場-CPE一顆星, 最上面 UVA10008, 先能讀入 n 行的字串, 再馬上印出來... 小心, 跳行

#include <stdio.h>
char line[10000];
int main()
{
	int n;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++)
	{
		gets(line);
		printf("%s\n",line);
	}
}
