#include<stdio.h>
int main()
{
    int arr[5],i;
    for(i=0;i<5;i++)
    {
        printf("Enter %dth element",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++) {
        printf("%dth element is %d\n",i,arr[i]);
    }
    return 0;
}