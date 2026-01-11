//ASS4
#include<stdio.h>
#include<math.h>
void main()
{
	double p,r,t,Amt,I;
	printf("Enter principle,r,time\n");
	scanf("%lf%lf%lf",&p,&r,&t);
	Amt=p*pow((1+(r/100)),t);
	printf("Amount=%lf\n",Amt);
	I=Amt-p;
	printf("Total compound interest is : %lf",I);
}
