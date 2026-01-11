#include<stdio.h>
int main()
{
    int i,j,row;
    printf("Enter the no of rows:");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(j=1;j<=i;j++){
        	if(j==2)
            printf("#\t");
            else
            printf("%d\t",j);
        }
        printf("\n");
    }
    return 0;
}

