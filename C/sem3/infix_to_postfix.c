#include<stdio.h>
#define max 100
char stk[max];
int top=-1;
void push(char c){
	stk[++top]=c;
}
char pop(){
	char c;
	c=stk[top];
	top--;
	return c;
}
int preced(char c){
switch(c){
	case'^':
		return 4;
	case'/':
	case'*':
	    return 3;
	case'+':
	case '-':
	    return 2;
	case'(':
	    return 1;
	default:
	    return 0;				
}
}
int main()
{
	char ch;
	char infix[max],postfix[max],x;
	int i,j=0;
	printf("\n Enter infix expression: ");
	gets(infix);
	for(i=0;infix[i]!='\0';i++){
		ch=infix[i];
		switch(ch){
			case'(':
				push(ch);
				break;
			case')':
			    while((x=pop())!='(')
					postfix[j++]=x;
				break;
			case'+':
			case'-':
			case'*':
			case'/':
			     while((preced(stk[top])>=preced(ch))&&top!=-1){
			     	postfix[j++]=pop();
			     }	
				 push(ch);
				 break;
			default:
			     postfix[j++]=ch;	 		
		}
	}
	while(top==-1)
	{
		postfix[j++]=pop();
	}
	postfix[j]='\0';
	printf("Postfix operation is: %s",postfix);
	return 0;
}
