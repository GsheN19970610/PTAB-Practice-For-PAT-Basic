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
			//flag的作用即在某一位整除无余数时,下一位如果temp小于B时候如果没有这里的flag,就会被直接跳过,而实际上必须加一个0
			//也防止最高位就输出0
		else if(flag)
			printf("0");
		temp=temp%B;
	}
	if(flag==0)
		printf("0");				//这一步的意义是在于A等于0的时候,结果等于0
	printf(" %d",temp);
	return 0;
}