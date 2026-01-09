#include<stdio.h>

int main(){
    int m,n;
    //Size of elements
    printf("Enter number of elements of array A:");
    scanf("%d",&m);
    printf("Enter number of elements of array B:");
    scanf("%d",&n);

    // Elements of the arrays
    int a[m],b[n],i,j;
    printf("Enter the elements of array A:\n");
    for(i=0;i<m;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the elements of array b:\n");
    for(j=0;j<n;j++){
        scanf("%d",&b[j]);
    }

    // Subarray checking
    int present = 1;  

    for (j = 0; j < n; j++) {
        int f = 0;
        for (i = 0; i < m; i++) {
            if (b[j] == a[i]) {
                f = 1;
                break;
            }
        }
        if (!f) {
            present = 0;
            break;
        }
    }

    if (present)
        printf("Array B is present in Array A (non-sequentially)\n");
    else
        printf("Array B is NOT present in Array A\n");

    return 0;
}