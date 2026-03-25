#include<stdio.h>
#define MAX 50
char queue[MAX], rear=-1, front=-1;
void insert()
{
	char x;
	if(rear==MAX-1)
	printf("\n queue overflow");
	else
	{
		if(rear==-1)
		{
			front=0;
		}
			rear++;
		    printf("\n Enter character:");
		    scanf(" %c",&x);
		    queue[rear]=x;	
		
	}
}

void del()
{
	if(front==-1)
	{
		printf("\n queue underflow");
	}
	else
	{
		printf("\n deleted element is: %c",queue[front]);
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else
		{
			front++;
		}
	}
}
void display()
{
	int i;
	if(rear==-1){
		printf("\n queue is empty");
	}
	else
	{
		printf("\n queue elements are:");
	  for(i=front;i<=rear;i++)
	  {
	  	printf(" %c",queue[i]);
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
