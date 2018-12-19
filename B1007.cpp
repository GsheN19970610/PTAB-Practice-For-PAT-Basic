#include<stdio.h>

bool isPrime(int a)
{
	int i;
	for(i=2;i*i<=a;i++)
	{
		if(a%i==0)
			return false;
	}
	return true;
}
int main()
{
	int p;
	int n;
	int count=0;
	scanf("%d",&n);
	for(p=4;p<=n;p++)						
		//这里要考虑两头的情况,首先是p不能大于n,第二是开头p-2也不能小于最小的数字2
	{
		if(isPrime(p) && isPrime(p-2))
			count++;
	}
	printf("%d",count);
	return 0;
}