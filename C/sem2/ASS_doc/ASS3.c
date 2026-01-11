//ASS_3
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two integer numbers a,b\n");
	scanf("%d%d",&a,&b);
	printf("Before swap the value of a=%d\n",a);
	printf("Before swap the value of b=%d\n",b);
	/*a=a+b;
	b=a-b;
	a=a-b;*/
	/*a=a*b;
	b=a/b;
	a=a/b;*/
	a=a^b;
	b=a^b;
	a=a^b;
	printf("After swap the value of a=%d\n",a);
	printf("After swap the value of b=%d\n",b);
	return 0;
}
