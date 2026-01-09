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
    for(j=2;j<n;j++){
        int key = A[j];
        i = j-1;
    while(i>0 && A[i]>key){
        A[i+1] = A[i];
        i = i-1;
        }
    A[i+1] = key;
    }
    for(int k=0;k<n;k++)
        printf("%d",A[k]);
return 0;
}