#include<stdio.h>
#include<string.h>
int main()
{
	int x,y,z;
	int countP=0,countT=0;
	int numP=-1,numT=-1;
	int i,len;
	int others=0;
	int n;
	scanf("%d",&n);
	while(n--)
	{	
		char str[110];
		numP=-1,numT=-1;
		countP=0,countT=0;
		others=0;
		scanf("%s",str);
		len=strlen(str);
		for(i=0;i<len;i++)
		{
			
			if(str[i]=='P')
			{
				countP++;
				numP=i;
			}
			else if(str[i]=='T')
			{
				countT++;
				numT=i;
			}
			else if(str[i]!='A')
			{
				others++;
			}
		}
		if(others!=0 || countP!=1 || countT!=1 || numT-numP<=1)
		{
			printf("NO\n");
			continue;				//这个很重要
		}
		x=numP;
		y=numT-numP-1;
		z=len-numT-1;
		if(z==x*y)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
