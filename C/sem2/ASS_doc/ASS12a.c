#include<stdio.h>
int main()
{
    int row ,i,j,k;
    printf("Enter the number of rows:");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=row-i;j++)
        {
        	printf("\t");
		}
        {
         for(k=1;k<=(2*i)-1;k++)	
         printf("*\t");
        }
		printf("\n"); 
		
    }
   
   
    return 0;
}
