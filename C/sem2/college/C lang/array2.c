#include<stdio.h>
int main()
{
    int arr[6],i,max;
    for(i=0;i<6;i++)
    {
        printf("Enter %dth element:",i);
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=0;i<6;i++) {
        if(max<arr[i])
         max=arr[i];
    }
    printf("Max is %d",max);
    return 0;
}