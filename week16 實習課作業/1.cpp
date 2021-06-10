第一題 進階題:大於漸增數列總和之最小整數

#include <stdio.h>
int main()
{
	int N,sum=0;
	scanf("%d",&N);
	for(int i=0;i<N;i++)
	{
		sum+=i;
		if(sum>N)
		{
			printf("%d",i);
			break;
		}
	}
}