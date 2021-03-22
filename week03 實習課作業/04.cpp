第四題 進階題:2進位轉10進位
#include <stdio.h>
int main()
{
	int n=0;
	char c;
	scanf("%c",&c);
	while(c=='0' ||c=='1')
	{
		n=(n<<1)+c-'0';
		scanf("%c",&c);
	}
	printf("%d\n",n);
}
