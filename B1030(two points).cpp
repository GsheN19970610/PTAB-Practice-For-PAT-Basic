#include<stdio.h>
#include<algorithm>
using namespace std;
const int maxn=100010;
int main()
{
	int a[maxn];
	int n,p;
	int i,j;
	scanf("%d %d",&n,&p);
	int ans=1;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	i=0;								
	//�������Ҫ��һ�����iҪ���¹���,��Ϊ�������������i���ӵ���n
	j=0;
	while(i<n && j<n)
	{
		while(j<n && a[j]<=(long)a[i]*p)
		{
			ans=max(ans,j-i+1);			//j-i+1
			j++;
		}
		i++;
	}
	printf("%d",ans);
	return 0; 
}