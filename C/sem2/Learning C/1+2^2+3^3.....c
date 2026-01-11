#include<stdio.h>
#include<math.h>
int main()
{
	float S=1,i,n;
	printf("Value of n is ");
	scanf("%f",&n);
	for(i=1;i<=n;i++)
	{
		S=S+1/(pow(i,i));
	}
	printf("The factorial is %f",S);
	return 0;
}
