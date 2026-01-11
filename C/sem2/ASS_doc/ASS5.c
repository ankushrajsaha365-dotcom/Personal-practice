#include<stdio.h>
void main()
{
	int y;
	printf("Input a year:\n");
	scanf("%d",&y);
	if(y%4==0&&y%100!=0||y%400==0&&y%100==0)
	printf("Year is a leap year");
	else
	printf("Year is not a leap year");
}
