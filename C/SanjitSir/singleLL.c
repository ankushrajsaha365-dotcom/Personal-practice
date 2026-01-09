
#include<malloc.h>
#include<stdio.h>
struct node{
	int data;
	struct node*link;
};
struct node*start=NULL,*p,*temp;
void create()
{
	p=(struct node*)malloc(sizeof(struct node));
	printf("\n Enter value to store:");
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
void inst_beg()
{
	p=(struct node*)malloc(sizeof(struct node));
	printf("\n Enter value to insert:");
	scanf("%d",& p->data);
	p->link=start;
	start=p;
}
void inst_end()
{
	p=(struct node*)malloc(sizeof(struct node));
	printf("\n Enter value to insert:");
	scanf("%d",& p->data);
	p->link=NULL;
	temp=start;
	while(temp->link!=NULL)
	{
		temp=temp->link;
	}
	temp->link=p;
}

void inst_any()
{
	p=(struct node*)malloc(sizeof(struct node));
	printf("\n Enter value to insert:");
	scanf("%d",& p->data);
	p->link=NULL;
	
	int i,n ;
	printf("\n Enter position:");
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

void del_beg()
{
	temp=start;
	start=temp->link;
}

void del_end()
{
	temp=start;
	struct node*temp1;
	while(temp->link!=NULL)
	{
		temp1=temp;
		temp=temp->link;
	}
	temp1->link=NULL;
	free(temp);
}
void del_any()
{
	struct node *temp,*temp1;
	int p,i;
	printf("\n Enter position:");
	scanf("%d",&p);
	temp=start;
	for(i=0;i<p;i++)
	{
		temp1=temp;
		temp=temp->link;
		if(temp==NULL)
		{
			printf("\n there are less than %d elements in the list..\n",p);
			return;
		}
	}
	temp1->link=temp->link;
	free(temp);
	printf("\n deleted %d node",p);
}
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
int main()
 {
 	int i=1,ch;
 	printf("---------MENU---------");
 	printf("\n Enter 1 to insert");
 	printf("\n Enter 2 to display");
 	printf("\n Enter 3 to insert at beginning");
 	printf("\n Enter 4 to insert at end");
 	printf("\n Enter 5 to insert at any position");
 	printf("\n Enter 6 to delete from beginning");
 	printf("\n Enter 7 to delete from end");
 	printf("\n Enter 8 to delete from any position");
 	printf("\n Enter 9 to search");
 	do{
 	printf("\n Enter your choice: ");
 	scanf("%d",&ch);
 	switch(ch){
 		case 1:
 			create();
 			break;
 		case 2:
 			display();
 			break;	
 		case 3:
 			inst_beg();
 			break;
		case 4:
 			inst_end();
 			break;	
		case 5:
 			inst_any();
 			break;	
		case 6:
 			del_beg();
 			break;	
		case 7:
 			del_end();
 			break;	
		case 8:
 			del_any();
 			break;
		case 9:
		    search();
			break;	 		 	 	 	 	 		
 	}
 	printf("\n do you want to continue??");
 	printf("\n Enter 0 to stop and Enter 1 to continue: ");
 	scanf("\n %d",&i);
 }while(i==1);
 return 0;
 
}