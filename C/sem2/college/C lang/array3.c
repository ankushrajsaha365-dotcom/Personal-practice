#include<stdio.h>
int main()
{
    int arr[6],fact=1,n,i,sum=0;
    for(i=1;i<6;i++)
    {
        printf("Enter the element %d",arr[i]);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<6;i++)
    {
        n=arr[i];
        for(i=1,fact=1;i<=n;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
    }
        
    printf("Sum is %d",sum);
    return 0;
}