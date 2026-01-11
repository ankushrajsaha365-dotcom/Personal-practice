#include<stdio.h>
int main()
{
    int A[3][2],i,j,max,min;
    float sum,mean;
    printf("\n Enter values\n");
    for(i=0;i<=2;i++)
      for(j=0;j<=1;j++){
        scanf("%d",&A[i][j]);
      }
     printf("\n The Array\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=1;j++)
        {
            printf("\t%d",A[i][j]);
        }
        printf("\n");
    }
    max=A[0][0];
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=1;j++)
        {
            if(A[i][j]>max)
            {
                max=A[i][j];
            }
        }
    }
    printf("%d is max",max);
    min=A[0][0];
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=1;j++)
        {
            if(A[i][j]<min)
            {
                min=A[i][j];
            }
        }
    }
    printf("\n%d is min",min);
    sum=0.0;
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=1;j++)
        {
            sum=sum+A[i][j];
        }
    }
    printf("\n%f is the sum of the array",sum);
    mean=sum/6;
    printf("\n%f is the mean of the array",mean);

    return 0;
    
}