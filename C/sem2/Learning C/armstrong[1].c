#include<stdio.h>

int main()
{
	int num,s,n,r;
	num=s=r=0;
	num=n;
	printf("\n enter a number:\n");
	scanf("%d",&num);
	while(num!=0)
	{
		r=num%10;
		s=s+r*r*r;
		num=num/10;
	}
	if(s==num)
	printf("\n The number %d is armstrong",num);
	else
	printf("\n The number %d is not armstrong",num);
	return 0;
}
