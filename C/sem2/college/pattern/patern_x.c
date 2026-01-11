#include<stdio.h>
int main()
{
    int row ,i,j,k;
    char ch='a';
    printf("Enter the number of rows:");
    scanf("%d",&row);
    for(i=row;i>=1;i--)
    {
        for(j=1;j<=row-i;j++)
        {
        	printf("\t");
		}
        {
         for(k=1;k<=(2*i)-1;k++)	
         printf("%c\t",ch++);
        }
		printf("\n"); 
    }
   
   
    return 0;
}
