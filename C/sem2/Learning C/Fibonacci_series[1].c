#include<stdio.h>

int main()
{
	int n,x,y,i,z;
	printf("\n enter a term=");
	scanf("%d",&n);
	x=0;
	y=1;
	printf("%d%d",x,y);
	for(i=2;i<=n;i++)
	{
		z=x+y;
		x=y;
		y=z;
		printf("\n fibonacci series,%d",z);
	}
	return 0;
}
