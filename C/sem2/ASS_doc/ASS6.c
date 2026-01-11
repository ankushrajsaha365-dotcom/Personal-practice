#include<stdio.h>
void main()
{
int a,b,c,max,min;
printf("The numbers are:\n");
scanf("%d%d%d",&a,&b,&c);
max=(a>b)?(a>b?printf("%d is max",a):printf("%d is max",b)):(b>c?printf("%d is max",b):printf("%d is max",c));
printf("\n");
min=(a<b)?(a<b?printf("%d is min",a):printf("%d is min",b)):(b<c?printf("%d is min",b):printf("%d is min",c));
}
