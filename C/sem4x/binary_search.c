#include <stdio.h>
#define MAX 100

// void bubbleSort(int A[], int n) {
//     int i, j, temp;
//     for (i = 0; i < n - 1; i++) {
//         for (j = 0; j < n - i - 1; j++) {
//             if (A[j] > A[j + 1]) {
//                 temp = A[j];
//                 A[j] = A[j + 1];
//                 A[j + 1] = temp;
//             }
//         }
//     }
// }
void merge(int a[], int temp[], int left, int mid, int right) {
    int i = left;     
    int j = mid + 1;  
    int k = left;     

    while (i <= mid && j <= right) {
        if (a[i] <= a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }

    while (i <= mid)
        temp[k++] = a[i++];

    while (j <= right)
        temp[k++] = a[j++];

    for (i = left; i <= right; i++)
        a[i] = temp[i];
}

void mergeSort(int a[], int temp[], int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;

        mergeSort(a, temp, left, mid);
        mergeSort(a, temp, mid + 1, right);

        merge(a, temp, left, mid, right);
    }
}
void display(int a[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}
int binarysearch(int a[], int n, int key, int *iteration) {
    int low = 0, high = n - 1;
    *iteration = 0;
    while (low <= high) {
        (*iteration)++;
        int mid = (low + high) / 2;
        if (a[mid] == key)
            return mid;
        else if (a[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}


int main() {
    int A[MAX],temp[MAX], n, key, c, i;
    int index, iteration1, iteration2;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &A[i]);
    }
    printf("Enter element to search:");
    scanf("%d",&key);
    // bubbleSort(A, n);
    // printf("\nElements after sorting: ");
    // for (i = 0; i < n; i++) {
    //     printf("%d ", A[i]);
    // }

    mergeSort(A, temp, 0, n - 1);

    printf("Sorted Array (Merge Sort): ");
    display(A, n);
 
    printf("\n1. Binary Search");
    

    index = binarysearch(A, n, key, &iteration1);
    if (index != -1)
        printf("\nElement found at position %d using Binary Search (Iterations: %d)\n", index + 1, iteration1);
    else
        printf("\nElement not found.\n");
    

    return 0;
}

