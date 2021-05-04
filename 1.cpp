第一題 進階題:最大公因數gcd

#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int space=a,space2=b;
	printf("Enter two integers: \n");
	int c=a%b;
	while(c!=0)
	{
		a=b;
		b=c;
		c=a%b;
	}
	printf("The greatest common divisor of %d and %d is %d\n",space,space2,b);
}
