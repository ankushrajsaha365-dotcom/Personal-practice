#include<stdio.h>
#include<math.h>
int main()
{
	int S=1,i,j,n;
	printf("Value of n is ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j--)
		{
			S=(S*pow(10,(i-j)));
		}
	}
	printf("The answer is %d",S);
	return 0;
}
