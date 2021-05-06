第二題 進階題:利用自訂函式最大值max與最小值min求出兩者之差

#include<iostream>
using namespace std;
int max(int a,int b,int c,int d)
{
	int max=0;
	if(a>b && a>c && a>d)
	{
		max=a;
	}
	else if(b>a && b>c && b>d)
	{
		max=b;
	}
	else if(c>a && c>b && c>d)
	{
		max=c;
	}
	else if(d>a && d>c && d>b)
	{
		max=d;
	}
	return max;
}
int min(int a,int b,int c,int d)
{
	int min=0;
	if(a<b && a<c && a<d)
	{
		min=a;
	}
	else if(b<a && b<c && b<d)
	{
		min=b;
	}
	else if(c<a && c<b && c<d)
	{
		min=c;
	}
	else if(d<a && d<c && d<b)
	{
		min=d;
	}
	return min;
}
int main(){
  int a,b,c,d;cin>>a>>b>>c>>d;
  cout<<(max(a,b,c,d)-min(a,b,c,d));
  return 0;
}
/* 上方C++ main 函式 等同於 下方 C 的 main 函式
int main(void){
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  printf("%d",  max(a,b,c,d) - min(a,b,c,d) );
  return 0;
}
*/