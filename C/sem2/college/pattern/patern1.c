#include<stdio.h>
int main()
{
    int row ,i,j;
    printf("Enter the number of rows:");
    scanf("%d",&row);
    for(i=row;i>=1;i--)
    {
        for(j=row;j>=i;j--)
        {
         printf("%d",j);
        }
		printf("\n"); 
    }
   
   
    return 0;
}
