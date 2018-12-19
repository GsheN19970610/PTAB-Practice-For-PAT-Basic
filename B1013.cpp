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
	for(i=2;i<1000000;i++)					//ע�������ʮ��������ǲ�֪����С��,ֻ���ǹ���
	{										
		if(count==10005)					//������count������һ���֮����������ͳ��,���Ҳ��ܳ�����������
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
		if(sum%10==0)						//����Ҫ���ж��Ƿ�Ϊ��ʮ����
			printf("\n");
		else if(i<n-1)						//��������ʮ��,���ڳ����һ��֮ǰ���ӿո�,����Ҫ�ӿո�
			printf(" ");
	}
	return 0;
}