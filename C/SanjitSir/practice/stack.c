#include<stdio.h>
#define Max 10
int A[Max],top=-1;

void push(){
    int e;
    if (top==Max-1)
        printf("Stack overflow");
    else{
        top++;
        printf("Enter elemnent to push:");
        scanf("%d",&e);
        A[top]=e;
    }
}

void pop(){
    if(top==-1)
        printf("Stack underflow");
    else{
        printf("Top element is popped\n");
        top--;
    }
}

void display(){
    printf("The elements in stack:\n");
    if(top==-1)
        printf("Stack is empty");
    else{
        for(int i=top;i>=0;i--){
            printf("%d ",A[i]);
        }
    }
}

int main(){
    int f=1,ch;
    while(f==1){
        printf("\nEnter 1 to Push\nEnter 2 to Pop\nEnter 3 to Display\nEnter 0 to Exit\n");
        printf("Your Choice:");
        scanf("%d",&ch);
        switch(ch){
            case 1: 
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 0: 
                printf("Exiting!!!");
                f=0;
                break;
            default:
                printf("Wrong Choice!!!");
        }
    }
    return 0;
}