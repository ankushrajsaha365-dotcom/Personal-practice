#include<stdio.h>
int main()
{
	double a,b,c;
	char ch;
	printf("enter a,b\n");
	scanf("%lf%lf",&a,&b);
	printf("\n Press + for add\nPress - for diff\nPress * for multiplication\nPress / for division\n");
	printf("enter your choice\n");
	scanf("%c",&ch);
	switch(ch)
	{
		case '+':
	 	c=a+b;
		printf("sum is %lf",c);	
		break;
		case '-':
		c=a-b;
		printf("diff is %lf",c);
		break;	
		case '*':
		c=a*b;
		printf("product is %lf",c);
		break;	
	    case '/':
		c=a/b;
		printf("diff is %lf",c);
		break;	
		default:
		printf("Wrong choice");
	}
		
return 0;
}
