
#include <stdio.h>
#include <stdlib.h>

// Structure definition
struct node {
    int data;
    struct node *link;
};

struct node *start = NULL, *p, *temp;

//Function to create a Linkedlist
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

//search algo begins
void search(){
	int n,index=0,f=0;
	printf("\nEnter value to search: ");
	scanf("%d",&n);
	temp=start;
	while(temp!=NULL){
		if(temp->data==n){
			printf("Value %d found at index %d\n", n, index);
            f=1;
            break;
		}else{
			temp=temp->link;
			index++;
		}
	}
	
}


// Function to display the list
void display()
{
	temp=start;
	while(temp!=NULL)
	{
		printf("\n%d",temp->data);
		temp=temp->link;
	}
}

int main()
{
	int i,ch;
	do{
		printf("\n Enter 1 to create");
		printf("\n Enter 2 to display");
		printf("\n Enter 3 to searh");
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
			    search();
				break;		
			default:
				printf("\n Wrong choice");	
		}
		printf("\n0 for stop and 1 for continue");
		printf("\n Enter your choice:");
		scanf("%d",&i);
	}while(i==1);
	return 0;
}
