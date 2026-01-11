#include<stdio.h>
#include<malloc.h>

struct node{
	int data;
	struct node *next;
};
struct node *head;

//INSERTION
void beg_insert(int item){
	struct node *ptr=(struct node *)malloc(sizeof(struct node *));
	if(ptr==NULL){
		printf("\nOverflow!\n");
	}
	else{
		printf("\nEnter Value:");
		scanf("%d",&item);
		ptr->data = item;
		ptr->next = head;
		head = ptr;
		printf("\nNode Inserted\n");
	}
}


void end_insert(int item){
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
			printf("\nNode Inserted\n");
		}
		else{
			temp = head;
			while(temp->next != NULL){
				temp =temp->next;
			}
			temp->next = ptr;
			ptr->next = NULL;
			printf("\nNode Inserted\n");
		}
	}
	
}

void pos_insert(int item) {
	struct node *ptr = (struct node*)malloc(sizeof(struct node));
	struct node *temp;
	int i, loc;
	if(ptr == NULL) {
		printf("List Overflow !!!");
	}
	else {
		printf("Enter Value : ");
		scanf("%d", &item);
		ptr -> data =item;	
		printf("Enter the Location : ");
		scanf("%d", &loc);
	
		temp = head;
		
		for(i=0;i<loc;i++) {
			temp = temp -> next;
			if(temp == NULL) {
				printf("\nCan't Insert !!!");
				return;
			}
		}
		ptr -> next = temp -> next;
		temp -> next = ptr;
		printf("\nNode Inserted");
	}
}

//DELETION
void beg_del(int item){
	struct node *ptr;
	if(head==NULL){
		printf("\nList is empty\n");
	}
	else{
		ptr = head;
		head = ptr->next;
		free(ptr);
		printf("\nNode deleted from beginning\n");
	}
}

void end_del(int item){
	struct node *ptr, *ptr1;
	if (head==NULL){
		printf("\nList is empty");
	}
	else if(head->next == NULL){
		head = NULL;
		free(head);
		printf("\nOnly node of the list is deleted\n");
	}
	else{
		ptr = head;
		while(ptr->next != NULL){
			ptr1=ptr;
			ptr = ptr -> next ;
		}
		ptr1->next = NULL;
		free(ptr);
		printf("\nDeleted Node from the last\n");
		
	}
}
void pos_del(int item) {
	struct node *ptr, *ptr1;
	int loc, i;
	printf("Enter the Location After what You Want the Deletion Operation : ");
	scanf("%d", &loc);
	ptr = head;
	for(i=0;i<loc;i++) {
		ptr1 = ptr;
		ptr = ptr -> next;
		if(ptr == NULL) {
			printf("\nCan't Delete");
			return;
		}
	}
	ptr1 -> next = ptr -> next;
	free(ptr);
	printf("\nDeleted Node : %d", loc+1);
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

//SEARCH
void search(int item){
	struct node *ptr;
	int i=0,f;
	ptr = head;
	if (ptr ==NULL){
		printf("\nEmpty List");
	}
	else{
		printf("\nEnter item to search:");
		scanf("%d",&item);
		while(ptr != NULL){
			if (ptr->data == item){
				printf("Item found at %d th position",i+1);
				f=0;
				break;
			}
			else{
				f=1;
			}
			i++;
			ptr = ptr -> next;
		}
		if (f==1){
			printf("\nItem not found\n");
		}
	}
}

int main(){
	int item,ch,flag=1;
	printf("\nEnter 11 to beg_insert\nEnter 12 to end_insert\nEnter 13 to pos_insert\n");
	printf("\nEnter 21 to beg_del\nEnter 22 to end_del\nEnter 23 to pos_del\n");
	printf("\nEnter 3 to display\nEnter 4 to Search\n");
	printf("\nEnter 0 to Exit\n");
	printf("----------------------------------------");
	while(flag){
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
		//Insertion 
			case 11:
				beg_insert(item);
				break;
			case 12:
				end_insert(item);
				break;
			case 13:
				pos_insert(item);
				break;
		//Deletion
			case 21:
				beg_del(item);
				break;
			case 22:
				end_del(item);
				break;
			case 23:
				pos_del(item);
				break;
		//Display
			case 3:
				display();
				break;
				
		//Search
			case 4:
				search(item);
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

