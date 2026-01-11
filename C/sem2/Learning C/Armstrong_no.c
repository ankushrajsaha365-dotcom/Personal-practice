#include<stdio.h>
#include<math.h>
int main()
{
	int num,nod=0,s=0,n,r;
	printf("Enter the value of num:\n");
	scanf("%d",&num);
	n=num;
	while(num>0)
	{
		num=num/10;
		nod=nod+1;
	}
	num=n;
	while(num>0)
	{
		r=num%10;
		s=s+pow(r,nod);
		num=num/10;
	}
	num=n;
	if(n==s)
	{
	printf("It is an Armstrong number");
	}
	else
	{
	printf("It is not an Armstrong number");
	}
return 0;	
}
