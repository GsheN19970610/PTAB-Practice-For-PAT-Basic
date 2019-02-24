#include<stdio.h>
const int maxn=1010;
struct student{
	long long id;
	int examSeat;
}testSeat[maxn];
int main()
{
	long long id;
	int Seat,examSeat;
	int n,m,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lld %d %d",&id,&Seat,&examSeat);
		testSeat[Seat].id=id;
		testSeat[Seat].examSeat=examSeat;
	}
	scanf("%d",&m);
	for(j=0;j<m;j++)
	{
		scanf("%d",&Seat);
		printf("%lld %d\n",testSeat[Seat].id,testSeat[Seat].examSeat);
	}
	return 0;
}