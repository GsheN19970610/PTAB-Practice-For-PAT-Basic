#include<stdio.h>
#include<string.h>
const int maxn=100010;
int main()
{
	bool HashTable[128]={false};
	int i,j;
	char temp;
	char str1[maxn];
	char str2[maxn];
	gets(str1);
	gets(str2);
	int len1=strlen(str1);
	int len2=strlen(str2);
	for(i=0;i<len1;i++)
	{
		if(str1[i]>='A' && str1[i]<='Z')
			str1[i]=str1[i]-'A'+'a';
		HashTable[str1[i]]=true;
	}
	for(j=0;j<len2;j++)
	{
		if(str2[j]>='A' && str2[j]<='Z')
		{
			temp=str2[j]-'A'+'a';
			if(HashTable[temp]==false && HashTable['+']==false)
				printf("%c",str2[j]);
		}
		else if(HashTable[str2[j]]==false)
			printf("%c",str2[j]);
	}
	return 0;
}