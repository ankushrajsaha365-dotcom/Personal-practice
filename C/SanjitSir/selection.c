#include<stdio.h>
#define max 10

int main(){
    int A[max];
    int i,j,n,smallest,temp;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter elements:");
    for(int m=0;m<n;m++){
        scanf("%d",&A[m]);
    }
    for(j=0;j<n-1;j++){
        smallest = j;
        for(i=j+1;i<n;i++){
            if(A[i] < A[smallest]){
                smallest = i;
            } 
        }
        temp = A[j];
        A[j] = A[smallest];
        A[smallest] = A[j];
    }
    for(int k=0;k<n;k++)
        printf("%d",A[k]);
return 0;
}