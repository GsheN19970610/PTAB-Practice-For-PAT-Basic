#include<stdio.h>
int main()
{
	int a,b;
	int i;
	int count=0;
	int num[10];            //ע����ɸ���a,b����ֵ,���������������ʱ������ͬ���ַ�
	int sum;
	int temp;
	bool flag=false;
	scanf("%d %d",&a,&b);
	sum=a*b;
	while(sum!=0)           //��while����for����Ϊ��֪���м�λ��
	{
		temp=sum%10;
		sum/=10;
		if(temp!=0)
			flag=true;          //�����Ǽ��ǰ����Ĺؼ�����
		if(flag==true)
			num[count++]=temp;
	}
	for(i=0;i<count;i++)
	{
		printf("%d",num[i]);
	}
	return 0;
}