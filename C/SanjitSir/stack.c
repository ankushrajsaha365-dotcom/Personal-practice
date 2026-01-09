#include<stdio.h>
#define MAXSIZE 10
int stack[MAXSIZE],top=-1;
void push()
{

	int x;
	if(top==MAXSIZE-1)
	{
		printf("stack overflow");
	}
	else
	{
		top++;
		printf("\n Enter element:");
		scanf("%d",&x);
		stack[top]=x;
	}
}
void pop()
{
	//int x;
	if(top==-1)
	{
		printf("\n stack underflow");
	}
	else
	{
		printf("\n popped element is:%d",stack[top]);
		top--;
	}
}
void display()
{ 
    int i;
    printf("\n stack elements are:");
	for(i=top;i>=0;i--)
	{
		printf("%d ",stack[i]);
	}
}
int main()
{
	int c,i;
	printf("\n Enter 1 to push \n Enter 2 to pop \n Enter 3 to display");
	do{
		printf("\n Enter your choice:");
		scanf("%d",&c);
		switch(c){
			case 1:
				push();
				break;
			case 2:
			    pop();
				break;
			case 3:
			    display();
				break;
			default:
				printf("\n Wrong choice");		
		}
		printf("\n Enter 0 to stop and 1 to continue");
		printf("\n Enter choice:");
		scanf("%d",&i);
		
	}while(i==1);
	return 0;
}