//Ankush_Raj_Saha___ASS7
#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c,d;
	double m,n;
	printf("Enter the value of a,b,c\n");
	scanf("%d%d%d",&a,&b,&c);
	if (a!=0)
	{
		d=(b*b)-(4*a*c);
		if (d==0)
		{
			printf("The equation have two real and equal roots");
			m=n=-b/(2.0*a);
			printf("\nm=%lf\nn=%lf",m,n);
		}
		else if (d>0)
		{
			printf("\nThe equation have two real and distinct roots");
			m=(-b+sqrt(d))/(2*a);
			n=(-b-sqrt(d))/(2*a);
			printf("\nm=%lf\nn=%lf",m,n);
		}
		else
		printf("Roots are imaginary");
	}
	else
	printf("It is not an quadratic equation");
}
