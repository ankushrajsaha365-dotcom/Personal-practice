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
			    inst_any();
				break; 	
			default:
				printf("\n Wrong choice");	
		}
		printf("\n\n 0 for stop and 1 for continue");
		printf("\n Enter your choice:");
		scanf("%d",&i);
	}while(i==1);
	return 0;
}
