#include<stdio.h>
#include<math.h>
int main() {

    double a,b,c;
    char ch;

    printf("Enter the value of a,b : ");
    scanf("%lf %lf", &a,&b);

    printf("Enter the operator('+' for addition;) ");
    scanf(" %c", &ch);

    switch(ch) {
        case '+':
            c = a+b;
            printf("Addition is %lf", c);
            break;
        case '-':
            c = a-b;
            printf("Subtraction is %lf", c);
            break;
        case '*':
            c = a*b;
            printf("Multiplication is %lf", c);
            break;
        case '/':
            c = a/b;
            printf("Division is %lf", c);
            break;
        default:
            printf("Invalid Operator");
    }

    return 0;
}

