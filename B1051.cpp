#include<stdio.h>
#include<math.h>
int main()
{
	double R1,P1,R2,P2;
	scanf("%lf %lf %lf %lf",&R1,&P1,&R2,&P2);
	double A,B;							//R(cos(P)+isin(P),代入相乘,a代表实部,b代表虚部系数
	A = R1 * R2 * cos(P1 + P2);			//A = R1*cos(P1)*R2*cos(P2) - R1*sin(P1)*R2*sin(P2);
	B = R1 * R2 * sin(P1 + P2);			//B = R1*cos(P1)*R2*sin(P2) + R1*sin(P1)*R2*cos(P2);
	if (abs(A)<0.01)
        A = 0;
    if (abs(B)<0.01)
        B = 0;
    if (B>= 0)
        printf("%.2lf+%.2lfi",A,B);
    else
        printf("%.2lf%.2lfi",A,B);
	return 0;
}