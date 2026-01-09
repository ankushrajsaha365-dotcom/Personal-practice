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
    
    int hi = n-1,lo = 0;
    int mid;
    while(lo<=hi){
            mid = (lo+hi)/2;

        if (A[mid] == s){
            printf("Element %d found at %d th index",s,mid);
            return 0;
        }
        else if(A[mid]<s)
            lo = mid+1;
        else
            hi = mid-1;

    }

    printf("Element %d not found\n", s);


    return 0;
}