#include<stdio.h>
#define MAXSIZE 10
int A[MAXSIZE],B[MAXSIZE],top=-1;
int push()
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
		A[top]=x;
	}
    return 0;
}
int pop()
{
	//int x;
	if(top==-1)
	{
		printf("\n stack underflow");
	}
	else
	{
		printf("\n popped element is:%d",A[top]);
		top--;
	}
    return 0;
}
void pop2(){
	
	if(top==-1)
	{
		printf("\n stack underflow");
	}
	else
	{
		printf("\n popped element is:%d",B[top]);
		top--;
	}
}

void display()
{ 
    int i;
    printf("\n stack elements are:");
	for(i=top;i>=0;i--)
	{
		printf("%d ",B[i]);
	}
}
void insert(){
    int i,j,el;
    for(i=top;i>=0;i--){
        el = pop();
        for(j=0;j<=top;j++){
            B[i] = push(el);
        }
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
                insert();
				break;
			case 2:
			    pop2();
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