#include<malloc.h>
#include<stdio.h>
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
void insert_beg()
{
	p=(struct node*)malloc(sizeof(struct node));
	printf("\n Enter value to store:");
	scanf("%d",&p->data);
	if(start==NULL)
	{
		p->link=NULL;
		start=p;
	}
	else
	{
		p->link=start;
		start=p;
	}
//	p->link=start;
//	start=p;
}
int main()
{
	int i,ch;
	do{
		printf("\n Enter 1 to create");
		printf("\n Enter 2 to display");
		printf("\n Enter 3 to insert");
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
			    insert_beg();
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
