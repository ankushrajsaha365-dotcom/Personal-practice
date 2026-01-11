#include<stdio.h>
int main()
{
    int arr[5][6],i,j;
    for(i=0;i<5;i++){
        for(j=0;j<6;j++){
            printf("Enter arr[%d][%d] element",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<=5;i++){
        for(j=0;j<=6;j++){
            printf("arr[%d][%d]th element is %d",i,j,arr[i][j]);
        }
    }
    return 0;
}