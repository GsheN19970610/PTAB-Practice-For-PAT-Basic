#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char str[1010];
	int number[1010];
	int B;	
	scanf("%s",str);
	scanf("%d",&B);
	int len=strlen(str);
	int temp=0,flag=0;
	for(i=0;i<len;i++)
	{
		temp=temp*10+str[i]-'0';
		if(temp>=B)
		{
			printf("%d",temp/B);
			flag=1;	
		}
			//flag�����ü���ĳһλ����������ʱ,��һλ���tempС��Bʱ�����û�������flag,�ͻᱻֱ������,��ʵ���ϱ����һ��0
			//Ҳ��ֹ���λ�����0
		else if(flag)
			printf("0");
		temp=temp%B;
	}
	if(flag==0)
		printf("0");				//��һ��������������A����0��ʱ��,�������0
	printf(" %d",temp);
	return 0;
}