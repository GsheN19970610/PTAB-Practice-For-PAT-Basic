#include<stdio.h>
#include<algorithm>
using namespace std;
const int maxn=100010;
int n,p,a[maxn];

int binarySearch(int x,long y)
	//����[i+1,n-1]��Χ�ڲ��ҵ�һ������y������λ��
{
	if(a[n-1]<=y) return n;	
			//��y���������ֶ���(��������������,���Ե�һ����С��1,���԰��������е�����)
	int l=x+1,r=n-1,mid;
	while(l<r)
	{
		mid=(l+r)/2;		//�ںܴ�������п���ʹ��l+(r-l)/2
		if(a[mid]<=y)		//��a[mid]<=x,˵����һ������x
			l=mid+1;
		else
			r=mid;
	}
	return l;				//������ʱ��l=r,����r��l������
}
int main()
{
	int i,j;
	int sum=1;				//��ζ�ż�ʹֻ��һ�����������,ҲӦ����1,������j-i�ó���0;
	scanf("%d %d",&n,&p);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,a+n);			//ע��Ҫ����
	for(i=0;i<n;i++)
	{
		j=binarySearch(i,(long long)a[i]*p);		
						  //ע��������Ҫǿ��ת��,��Ȼ���һ�����Ǵ��,a[i]*pֵ���ܳ���int��Χ
		sum=max(sum,j-i);
	}
	printf("%d",sum);
	return 0;
}
