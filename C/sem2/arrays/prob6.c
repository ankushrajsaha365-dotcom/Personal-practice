// Matrix Addition
#include<stdio.h>
int main()
{
    int a,b,c,d;
    int A[a][b],i,j;
    int B[c][d],m,n;
    printf("Enter the values of rows and column of matrix A :\n ");
    scanf("%d\n%d",&i,&j);
    printf("Enter the values of rows and column of matrix B:\n ");
    scanf("%d\n%d",&m,&n);
    printf("\n Enter values\n");
    for(i=0;i<=2;i++)
      for(j=0;j<=1;j++){
        scanf("%d",&A[i][j]);
      }
     printf("\n The Matrix A\n");
     for(i=0;i<=2;i++)
     {
         for(j=0;j<=1;j++)
         {
             printf("\t%d",A[i][j]);
         }
         printf("\n");
     }
     for(m=0;m<=2;m++)
     for(n=0;n<=1;n++){
       scanf("%d",&B[m][n]);
     }
    printf("\n The Matrix B\n"); 
    for(m=0;m<=2;m++)
    {
        for(n=0;n<=1;n++)
        {
            printf("\t%d",B[m][n]);
        }
        printf("\n");
    }
    return 0;
}