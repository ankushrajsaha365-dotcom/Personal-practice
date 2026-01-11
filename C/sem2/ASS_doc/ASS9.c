#include<stdio.h>
#include<math.h>
void main()
{
int x,y=0,s;
printf("Enter the value of s:\n");
scanf("%d",&s);
for (x=1;x<=s;x++)
{
	y=y+pow(x,x);
}
printf("The answer is %d",y);
}
