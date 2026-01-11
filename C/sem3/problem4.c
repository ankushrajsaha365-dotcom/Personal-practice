//Circular QUEUE


#include<stdio.h>
#define Maxsize 5
char queue[Maxsize];
int front=-1,rear=-1;



//CENQUE
void cenque(){
	char x;
	if((front==0 && rear==Maxsize-1) || (front==rear+1)){
		printf("\nQueue overflow\n");
	}
	else{
		if (rear==-1){
			front=0;
			rear=0;
		}
		else if (rear==Maxsize-1){
			rear=0;
		}
		else {
			rear++;
		}
		printf("\nEnter element to insert:");
		scanf(" %c",&x);
		queue[rear]=x;
		
	}
}


//CDELQUE
void cdelque(){
	if(front==-1){
		printf("\nQueue Underflow\n");
	}
	else{
		printf("\nThe deleted element is %c",queue[front]);
		if (front==rear){
			front=-1;
			rear=-1;
		}
		else if(front==Maxsize-1){
			front=0;
		}
		else
			front++;
	}
}



//CDisplay
void cdisplay(){
	int i;
	if (front==-1){
		printf("Queue is empty");
	}
	else{
		printf("The Elements are :");
		if(front<=rear){
			for(i=front;i<=rear;i++){
				printf("\t %c",queue[i]);
			}
		}
		else {
			for(i=front;i<Maxsize;i++){
				printf("\t %c",queue[i]);	
			}
			for(i=0;i<=rear;i++){
				printf("\t %c",queue[i]);
			}
		}
	}

}





int main(){
	int i,ch;
	while(1){
		printf("\nEnter 1 to CENQUE\nEnter 2 to CDELQUE\nEnter 3 to CDisplay\n");
		printf("----------------------------------------");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
	
	
		switch(ch)
		{
			case 1:
				cenque();
				break;
			case 2:
				cdelque();
				break;
			case 3:
				cdisplay();
				break;
			default:
				printf("Wrong choice!!!");	
	
		}

	}
	return 0;
}

