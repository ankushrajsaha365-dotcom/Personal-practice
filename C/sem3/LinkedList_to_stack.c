#include<stdio.h>
#include<malloc.h>

struct node{
	int data;
	struct node *next;
};
struct node *head;

//INSERTION
void push(int item){
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
			printf("\nElement is Pushed into stack\n");
		}
		else{
			temp = head;
			while(temp->next != NULL){
				temp =temp->next;
			}
			temp->next = ptr;
			ptr->next = NULL;
			printf("\nElement is Pushed into stack\n");
		}
	}
	
}

//DELETION


void pop(int item){
	struct node *ptr, *ptr1;
	if (head==NULL){
		printf("\nList is empty");
	}
	else if(head->next == NULL){
		head = NULL;
		free(head);
		printf("\nElement is popped\n");
	}
	else{
		ptr = head;
		while(ptr->next != NULL){
			ptr1=ptr;
			ptr = ptr -> next ;
		}
		ptr1->next = NULL;
		free(ptr);
		printf("\nElement is popped\n");
		
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
//PEEK
void peek(){
	
}

int main(){
	int item,ch,flag=1;
	printf("\nEnter 1 to push\nEnter 2 to pop\nEnter 3 to display\n");
	printf("\nEnter 0 to Exit\n");
	printf("----------------------------------------");
	while(flag){
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
		//Insertion 
			case 1:
				push(item);
				break;
		
		//Deletion
			case 2:
				pop(item);
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

