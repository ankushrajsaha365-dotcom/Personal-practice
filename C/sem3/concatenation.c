#include<malloc.h>
#include<stdio.h>
struct node
{
	int data;
	struct node *link;
};
struct node *start1= NULL, *start2= NULL , *p, *temp;
void create1()
{
	p=(struct node *)malloc(sizeof(struct node));
	printf("\nEnter value to store:");
	scanf("%d",&p->data);
	if(start1==NULL)
	{
		start1=p;
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
 void create2()
{
	p=(struct node *)malloc(sizeof(struct node));
	printf("\nEnter value to store:");
	scanf("%d",&p->data);
	if(start2==NULL)
	{
		start2=p;
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
	temp=start1;
	while(temp!=NULL)
	{
		printf("\n %d",temp->data);
		temp=temp->link;
	}
}
void concat(){
	temp=start1;
	while(temp->link!=NULL){
		temp=temp->link;
		temp->link=start2;
	}
}

int main()
{
	int i,ch;
	do{
		printf("\n Enter 1 to create the 1st linked list");
		printf("\n Enter 2 to create the 2nd linked list");
		printf("\n Enter 3 to concatinate");
		printf("\n Enter 4 to display");
		printf("\n Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				create1();
				break;
			case 2:
			   create2();
			    break;	
			case 3:
				concat();
				break;
			case 4:
			    display();
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
