//ASS_2
#include<stdio.h>
int main()
{
	int a;
	float b;
	char c;
	double d;
	printf("Values of a,b,c,d \n");
	scanf("%d %f %c %lf",&a,&b,&c,&d);
	printf("Value of a=%d\nValue of b=%0.2f\nValue of c=%c\nValue of d=%lf\n",a,b,c,d);
	printf("Size of a=%u\nSize of b=%u\nSize of c=%u\nSize of d=%u\n",sizeof(a),sizeof(b),sizeof(c),sizeof(d));
	printf("Address of a=%u\nAddress of b=%u\nAddress of c=%u\nAddress of d=%u\n",&a,&b,&c,&d);
	return 0;
}
