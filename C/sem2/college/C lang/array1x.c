#include<stdio.h>
int main()
{
    int arr[]={3,6,8,2,-5},i;
    // for(i=0;i<5;i++)
    // {
    //     printf("Enter %dth element",i);
    //     scanf("%d",&arr[i]);
    // }
    for(i=0;i<5;i++) {
        printf("%dth element is %d\n",i,arr[i]);
    }
    return 0;
}