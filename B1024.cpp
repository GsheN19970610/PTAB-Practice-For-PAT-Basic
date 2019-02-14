#include<stdio.h>
#include<string.h>
int main()
{
	char str[10010];
	int len,i,j;
	gets(str);
	len=strlen(str);
	if(str[0]=='-')
	{
		printf("-");
	}
	int pos=0;
	while(str[pos]!='E')
		pos++;
	int power=0;
	for(i=pos+2;i<len;i++)
	{
		power=power*10+(str[i]-'0');
	}
	if(power==0)
	{
		for(i=1;i<pos;i++)
			printf("%c",str[i]);
	}
	if(str[pos+1]=='-')
	{
		printf("0.");
		for(i=0;i<power-1;i++)
		{
			printf("0");
		}
		printf("%c",str[1]);
		for(j=3;j<pos;j++)
		{
			printf("%c",str[j]);
		}
	}
	else
	{
		for(i=1;i<pos;i++)
		{
			if(str[i]=='.')
				continue;
			printf("%c",str[i]);
			if(i==power+2 && pos-3!=power)
				printf(".");
		}
		for(i=0;i<power-(pos-3);i++)
			printf("0");						//还要多余的0
	}
	return 0;
}	
