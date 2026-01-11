#include<stdio.h>
int main()
{
    int row ,i,j,k;
    printf("Enter the number of rows:");
    scanf("%d",&row);
    for(i=row;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
       		printf(" ");
		}
        {
         for(k=1;k<=(2*i)-1;k++)	
         printf("*");
        }
		printf("\n"); 
    }
   
   
    return 0;
}
