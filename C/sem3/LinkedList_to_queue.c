#include<stdio.h>
#include<malloc.h>

struct node{
	int data;
	struct node *next;
};
struct node *head;

//INSERTION

void enque(int item){
	struct node *ptr=(struct node *)malloc(sizeof(struct node *));
	struct node *temp;
	if(ptr==NULL){
		printf("\nOverflow!\n");
	}
	else{
		printf("\nEnter Value:");
		scanf("%d",&item);
		ptr->data = item;
		if(head==NULL){
			ptr->next = NULL;
			head=ptr;
			printf("\nElement inserted into Queue\n");
		}
		else{
			temp = head;
			while(temp->next != NULL){
				temp =temp->next;
			}
			temp->next = ptr;
			ptr->next = NULL;
			printf("\nElement inserted into Queue\n");
		}
	}
	
}


//DELETION
void delque(int item){
	struct node *ptr;
	if(head==NULL){
		printf("\nQueue is empty\n");
	}
	else{
		ptr = head;
		head = ptr->next;
		free(ptr);
		printf("\nElement is deleted\n");
	}
}

//DISPLAY
void display(){
	struct node *ptr;
	ptr = head;
	if (ptr ==NULL){
		printf("Nothing to print");
	}
	else{
		printf("\nElements are:\n");
		while(ptr != NULL){
			printf("\t%d",ptr->data);
			ptr = ptr ->next;
		}
	}
}


int main(){
	int item,ch,flag=1;
	printf("\nEnter 1 to enque\nEnter 2 to delque\nEnter 3 to display\n");
	printf("\nEnter 0 to Exit\n");
	printf("----------------------------------------");
	while(flag){
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
		//Insertion 
			case 1:
				enque(item);
				break;
		//Deletion
			case 2:
				delque(item);
				break;
		//Display
			case 3:
				display();
				break;
				
		//Exit
			case 0:
				flag=0;
				break;
			default:
				printf("Wrong choice!!!");	
	
		}

	}
return 0;
}

