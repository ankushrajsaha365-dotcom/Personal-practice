#include<stdio.h>
#define MAX 100
char cqueue_arr[MAX], rear=-1, front=-1;
void CENQUE()
{
	char x;
	if((front==0 &&rear==MAX-1)||(front==rear+1)){
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
void CDELQUE()
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
void CDISPLAY()
{
	int i;
	if(rear==-1){
		printf("\n queue is empty");
	}
	printf("\n cqueue elements are:");
	if(front<=rear)
	{
		for(i=front;i<=rear;i++)
		{
			printf(" %c",cqueue_arr[i]);
		}
	}
	else
	{
		for(i=front;i<MAX;i++)
		{
			printf(" %c",cqueue_arr[i]);
		}
		for(i=0;i<=rear;i++)
		{
			printf(" %c",cqueue_arr[i]);
		}
	}
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
			CENQUE();
			break;
		case 2:
		    CDELQUE();
			break;
		case 3:
		    CDISPLAY();
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

