#include<stdio.h>
#define MAXSIZE 5
int queue[MAXSIZE];
int front = -1; rear = -1;

void enque() {
	int x;
	if(rear == MAXSIZE-1) {
		printf("\nQueue Overflow !!!");
	}
	else {
		if(rear == -1) {
			front = 0;
		}
		rear++;
		printf("\nEnter element to Insert : ");
		scanf("%d", &x);
		queue[rear] = x;
	}
}

void delque() {
	if(front == -1) {
		printf("Queue Underflow !!!");
	}
	else {
		printf("The deleted Elemant is : %d", queue[front]);
		if(front == rear) {
			front = -1;
			rear =-1;
		}
		else {
			front++;
		}
	}
}

void display() {
	int i;
	printf("The elements in the Queue are : ");
	for(i=front;i<=rear;i++) {
		printf("%d ", queue[i]);
	}
}



int main() {
	int ch;
	    
	while(1) {
		
		printf("\nEnter 1 for Queue\nEnter 2 for Dequeue\nEnter 3 for Display\nEnter your Choice : ");
		scanf("%d", &ch);
		
	    switch(ch) {
	    	case 1 :
	    		enque();
	    		break;
	    		
	    	case 2 :
	    		delque();
	    		break;
	
	    	case 3 :
	    		display();
	    		break;
	    		
	    	default :
	    		printf(" ");
	    }
		
	}
	
	
	return 0;
	
}
