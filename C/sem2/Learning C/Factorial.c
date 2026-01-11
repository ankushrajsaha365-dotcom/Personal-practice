#include<stdio.h>
#include<math.h>
int main()
{
	int S=1,i,n;
	printf("Value of n is ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		S=S*i;
	}
	printf("The factorial is %d",S);
	return 0;
}
