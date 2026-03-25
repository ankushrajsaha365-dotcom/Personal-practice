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
		printf("\n %d",temp->data);
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
}
void inst_any()
{
	p=(struct node*)malloc(sizeof(struct node));
	printf("\n Enter value to store:");
	scanf("%d",&p->data);
	p->link=NULL;
	int i,n;
	printf("\n Enter the position after which you want to insert new node:");
	scanf("%d",&n);
	temp=start;
	i=1;
	while(i!=n)
	{
		temp=temp->link;
		i++;
	}
	p->link=temp->link;
	temp->link=p;
	
}
void inst_end()//Inserting node at the end
{
	p=(struct node*)malloc(sizeof(struct node));
	printf("\n Enter value to store:");
	scanf("%d",&p->data);
	p->link=NULL;
	temp=start;
	while(temp->link!=NULL)
	{
		temp=temp->link;
	}
	temp->link=p;
}
	

int main()
{
	int i,ch;
		printf("\n Enter 1 to create");
		printf("\n Enter 2 to display");
		printf("\n Enter 3 to insert at beg");
		printf("\n Enter 4 to insert at any");
	    printf("\n Enter 5 to insert at end");
	    do{
		printf("\n Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				create();
				break;
			case 2:
				display();
			case 3:
			    insert_beg();
				break;
			case 4:
			    inst_any();
				break;
			case 5:
			    inst_end(); 			
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
