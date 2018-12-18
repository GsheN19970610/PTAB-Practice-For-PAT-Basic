#include<stdio.h>
int main()
{
	int a,b;
	int i;
	int count=0;
	int num[10];            //注意题干给了a,b两个值,所以在设置数组的时候不能用同名字符
	int sum;
	int temp;
	bool flag=false;
	scanf("%d %d",&a,&b);
	sum=a*b;
	while(sum!=0)           //用while不用for是因为不知道有几位数
	{
		temp=sum%10;
		sum/=10;
		if(temp!=0)
			flag=true;          //这里是检测前导零的关键步骤
		if(flag==true)
			num[count++]=temp;
	}
	for(i=0;i<count;i++)
	{
		printf("%d",num[i]);
	}
	return 0;
}