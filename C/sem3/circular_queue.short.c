#include<stdio.h>
#define MAX 100
char cqueue_arr[MAX], rear=-1, front=-1;
void insert()
{
	char x;
	if((rear+1)%MAX==front){
	printf("\n queue overflow");
	}
	else
	{
	
		if(front==-1)
		{
			front=0;
			rear=0;
		}
		else if(rear==MAX-1)
			{
				rear=0;
			}
		else
			{
				rear=rear+1;
			}
	}
	printf("\n Enter element:");
 	scanf(" %c",&x);
 	cqueue_arr[rear]=x;
 
 
}
void del()
{
	if(front==-1)
	{
		printf("\n queue underflow");
	}
	else
	{
		printf("\n deleted element is: %c",cqueue_arr[front]);
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else if(front==MAX-1)
		{
			front=0;
		}
		else
		front++;
	}
}
void display()
{
	int i;
	if(rear==-1){
		printf("\n queue is empty");
	}
	printf("\n cqueue elements are:");
    i=front;
    while(i!=rear)
    {
    	printf(" %c",cqueue_arr[i]);
    	i=((i+1)%MAX);
    }
    printf(" %c",cqueue_arr[i]);
    
}
int main()
{
int c,i;
printf("\n Enter 1 to insert \n Enter 2 to delete \n Enter 3 to display");
do{
	printf("\n Enter your choice:");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			insert();
			break;
		case 2:
		    del();
			break;
		case 3:
		    display();
			break;
		default:
		   printf("\n wrong choice");
	}
	printf("\n Do u want to continue????"); 
	printf("\n Enter 0 to stop and 1 to continue:");
    scanf("%d",&i);
}while(i==1);
return 0;
}

