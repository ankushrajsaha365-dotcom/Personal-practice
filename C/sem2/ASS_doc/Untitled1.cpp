#include<stdio.h>
int main()
{
    int A[5],i,s;
    for(i=0;i<5;i++)
    {
        printf("enter the values:");
        scanf("%d",&A[i]);
    }
    for(i=0;i<5;i++) {
        s=s+A[i]; 
    }
    printf("%d is the sum of the array",s);
    return 0;
}
