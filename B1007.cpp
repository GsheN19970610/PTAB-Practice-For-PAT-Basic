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
		//����Ҫ������ͷ�����,������p���ܴ���n,�ڶ��ǿ�ͷp-2Ҳ����С����С������2
	{
		if(isPrime(p) && isPrime(p-2))
			count++;
	}
	printf("%d",count);
	return 0;
}