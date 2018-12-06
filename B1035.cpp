#include<stdio.h>
#include<algorithm>
using namespace std;
const int maxn=111;
int origin[maxn],tempOri[maxn],changed[maxn];
int n;
bool isSame(int a[],int b[])
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]!=b[i])			//ֻҪ���κ�һ��Ԫ�ز���ͬ,�Ͳ�same
			return false;
	}
	return true;
}

bool showArray(int a[])			//�������
{
	int i;						
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
		if(i<n-1)	
			printf(" ");
	}
	printf("\n");
}

bool insertSort()				//��������
{
	int i;
	bool flag=false;			
		//��¼�Ƿ����κ�һ���м�����changed��ͬ
	for(i=1;i<n;i++)						//��һ����Ϊ��Ԫ,����n-1������
	{
		if(i!=1 && isSame(tempOri,changed))
			flag=true;						//�κ�һ��ʱ���м�����changed��ͬ����true
		int temp=tempOri[i];
		int j=i;
		while(j>0 && temp<tempOri[j-1])		
			//temp��Ϊ��ֵ,tempOri[j]��Ϊ����j�仯���仯��ֵ,�Ƚ�temp������ǰ�Ƚ�ֱ����С���ߵ�ͷΪֹ
		{
			tempOri[j]=tempOri[j-1];
			j--;
		}
		tempOri[j]=temp;
		if(flag==true)
			return true;			//ÿ��ѭ�������ϱȽ��Ƿ����,���м������ʱֹͣѭ��
	}
	return false;					//û���κ���ȵ�ʱ��,����false
}

void mergeSort()					//�鲢����,ע����void
{
	int i;
	bool flag=false;
	int step;
	for(step=2;step/2<n;step*=2)	//�α���P141дstep/2С�ڵ���n,�����δ���
	{
		if(step!=2 && isSame(tempOri,changed))
			flag=true;				//�κ�һ��ʱ���м�����changed��ͬ����true
		for(i=0;i<n;i+=step)
		{
			sort(tempOri+i,tempOri+min(i+step,n));
		}
		if(flag==true)
		{
			showArray(tempOri);		//void��û�з���ֵ��,��������ҪshowArray
			return;
		}
	}
}

int main()
{
	int i;
	scanf("%d",&n);				//ע�⻹�и�n
	for(i=0;i<n;i++)			//������ʼ����origin
	{
		scanf("%d",&origin[i]);
		tempOri[i]=origin[i];	//tempOri
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&changed[i]);//����Ŀ������changed
	}
	if(insertSort())			//if insertSort==true,���ǲ�������
	{
		printf("Insertion Sort\n");
		showArray(tempOri);
	}
	else						//������ǹ鲢����
	{
		printf("Merge Sort\n");
		for(i=0;i<n;i++)
		{
			tempOri[i]=origin[i];//��ԭtempOri����
		}
		mergeSort();			//mergeSort�д���һ��showArray��
	}
	return 0;
}