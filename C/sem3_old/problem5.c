
#include<stdio.h>
#define Maxsize 10

char stk[Maxsize];
int top = -1, j=0;

void push(char c){
	stk[++top] = c;
}

char pop(){
	char c;
	c=stk[top];
	top--;
	return c;
}

int preced(char c){
	switch(c){
		case '^':
			return 4;
		case '/':
		case '*':
			return 3;
		case '+':
		case '-':
			return 2;
		case '(':
			return 1;
		default:
			return 0;
			 
	}
}
int main(){
	int i;
	char infix[Maxsize],postfix[Maxsize],ch,x;
	printf("Enter Infix expression:");
	gets(infix);
	for(i=0 ; infix[i] != '\0' ; i++){
		ch = infix[i];
		switch(ch){
			case '(' :
				push(ch);
				break;
			case ')' :
				while((x=pop()) != '('){
					postfix[j++]=x;
				}
				break;
			case '^' :
			case '/' :
			case '*' :
			case '+' :
			case '-' :
				while((preced(stk[top]) >= preced(ch)) && top!=0){
					postfix[j++] = pop();
				}
				push(ch);
				break;
			default:
				postfix[j++] = ch;
			
		}
	}
	while(top == -1){
		postfix[j++]=pop();
	}
		postfix[j] = '\0';
		printf("Postfix Expression is %s",postfix);	
return 0;
}
