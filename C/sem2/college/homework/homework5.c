#include<stdio.h>
int main()
{
    int row,i,j;
    char ch='p';
    printf("Enter the number of rows:");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
    	printf("\n");
        for(j=1;j<=i;j++){
            printf(" %c",ch); 
            ch++;
        }
    printf("\n");
		}
    return 0;
}

