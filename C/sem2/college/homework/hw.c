#include<stdio.h>
int main()
{
    char c=97;
    int row,i,j;
    printf("Enter the number of rows");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(j=i;j<=i;j++){
            printf("%c",c);
        }
    }
    printf("\n");
    return 0;
}