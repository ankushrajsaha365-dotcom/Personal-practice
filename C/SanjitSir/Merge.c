#include<stdio.h>
#define MAX 100
#define INF 1000000

void merge(int A[],int p,int q,int r){
    int n1 = q-p+1;
    int n2 = r-q;
    int L[n1+1],R[n2+1];
    for(int i=1;i<=n1;i++){
        L[i]=A[p+i-1];
    }
    for(int j=1;j<=n2;j++){
        R[j]=A[q+j];
    }
    L[n1+1]=INF;
    R[n2+1]=INF;
    int i = 1,j = 1;
    for(int k=p;k<=r;k++){
        if (L[i]<=R[j]){
            A[k]=L[i];
            i++;
        }
        else{
            A[k]=R[j];
            j++;
        }
    }
}
void merge_sort(int A[],int p,int r){
    if (p<r){
        int q = (p+r)/2;
        merge_sort(A,p,q);
        merge_sort(A,q+1,r);
        merge(A,p,q,r);
    }
}

void display(int A[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", A[i]);
    printf("\n");
}

int main(){
    int A[MAX],n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &A[i]);

    merge_sort(A,0,n-1);
    printf("Sorted Array (Merge Sort): ");
    display(A, n);

    return 0;

}