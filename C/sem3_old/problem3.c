#include<stdio.h>
#define Maxsize 10
char queue[Maxsize];
int front=-1,rear=-1;


//ENQUE
void enque(){
	char x;
	if(rear==Maxsize-1){
		printf("\nQueue overflow\n");
	}
	else{
		if (rear==-1){
			front=0;
		}
		rear++;
		printf("\nEnter element to insert:");
		scanf(" %c",&x);
		queue[rear]=x;
		
	}
}


//DELQUE
void delque(){
	if(front==-1){
		printf("\nQueue Underflow\n");
	}
	else{
		printf("\nThe deleted element is %c",queue[front]);
		if (front==rear){
			front=-1;
			rear=-1;
		}
		else
			front++;
	}
}



//Display
void display(){
	int i;
	printf("The Elements are :");
	for(i=front;i<=rear;i++){
		printf("\t%c",queue[i]);
	}	
}





int main(){
	int i,ch;
	while(1){
		printf("\nEnter 1 to ENQUE\nEnter 2 to DELQUE\nEnter 3 to Display\n");
		printf("----------------------------------------");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
	
	
		switch(ch)
		{
			case 1:
				enque();
				break;
			case 2:
				delque();
				break;
			case 3:
				display();
				break;
			default:
				printf("Wrong choice!!!");	
	
		}

	}
	return 0;
}

