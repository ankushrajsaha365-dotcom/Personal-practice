#include<stdio.h>
int main()
{
	int i,j,n,c=0;
	printf("Enter a number:\n");
	scanf("%d",&n);
	j=(n/2);
	for(i=2;i<j;i++)
	{
		if(j%i==0)
		{
			c++;
			break;
		}
	}
	if(c==0)	
		printf("The given number is a Prime number");
	else
		printf("The given number is not a Prime number");
	
	return 0;
}
