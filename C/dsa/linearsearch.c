#include<stdio.h>
int main(){
    int i,n,s;
    
    printf("Enter number of elements:");
    scanf("%d",&n);
    int A[n];
    printf("Enter elements of the array:\n");
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    printf("Enter element to search:");
    scanf("%d",&s);
    
    int f=0;
    for(i=0;i<n;i++){
        if(A[i]==s){
            printf("Element %d found at %d th index",s,i);
            f = 1;
            break;
        }
    }
    if(f = 0){
        printf("Element not found");
    }

    return 0;
}