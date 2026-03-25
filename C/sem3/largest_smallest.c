#include<malloc.h>
#include<stdio.h>
//finding the largest and smallest element of a linked list
struct node
{
	int data;
	struct node *link;
};
struct node *start=NULL, *p, *temp;
void create()
{
	p=(struct node *)malloc(sizeof(struct node));
	printf("\nEnter value to store:");
	scanf("%d",&p->data);
	if(start==NULL)
	{
		start=p;
		temp=p;
		p->link=NULL;
	}
	else
	{
		temp->link=p;
		temp=temp->link;
		p->link=NULL;
	}
}
void display()
{
	temp=start;
	while(temp!=NULL)
	{
		printf("\n%d",temp->data);
		temp=temp->link;
	}
}
void largest_smallest()
{
	int max,min;
	struct node*temp;
	temp=start;
	int f=1;
	while(temp!=NULL)
	{
		if(f==1)
		{
		max=temp->data;//defining the max and min
		min=temp->data;
		f=0;
	}
	else
	{
		if(max<temp->data)
		{
			max=temp->data;
		}
		if(min>temp->data)
		{
			min=temp->data;
		}
	}
	temp=temp->link;
	}
	printf("\n Max=%d",max);
	printf("\n Min=%d",min);
}

int main()
{
	int i,ch;
	do{
		printf("\n Enter 1 to create");
		printf("\n Enter 2 to display");
		printf("\n Enter 3 to find largest and smallest");
		printf("\n Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				create();
				break;
			case 2:
				display();
				break;
			case 3:
			    largest_smallest();
				break;	 	
			default:
				printf("\nWrong choice");	
		}
		printf("\n\n 0 for stop and 1 for continue");
		printf("\n Enter your choice:");
		scanf("%d",&i);
	}while(i==1);
	return 0;
}
