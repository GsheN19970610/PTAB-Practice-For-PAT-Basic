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
	int m,n;
	int prime[10010];
	int count=0;
	int i;
	for(i=2;i<1000000;i++)					//注意这里第十万个素数是不知道大小的,只能是估算
	{										
		if(count==10005)					//并且在count数到第一万个之后后面的无需统计,并且不能超过数组上限
			break;
		if(isPrime(i))
			prime[count++]=i;
	}
	scanf("%d %d",&m,&n);
	int sum=0;
	for(i=m-1;i<n;i++)
	{
		printf("%d",prime[i]);
		sum++;
		if(sum%10==0)						//这里要先判断是否为整十换行
			printf("\n");
		else if(i<n-1)						//若不是整十的,则在除最后一个之前不加空格,其余要加空格
			printf(" ");
	}
	return 0;
}