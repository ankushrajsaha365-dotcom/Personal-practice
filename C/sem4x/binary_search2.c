#include <stdio.h>

#define MAX 100

// Optimization: Pass temp array to avoid repeated allocations
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

    while (i <= mid) temp[k++] = a[i++];
    while (j <= right) temp[k++] = a[j++];

    for (i = left; i <= right; i++)
        a[i] = temp[i];
}

void mergeSort(int a[], int temp[], int left, int right) {
    if (left < right) {
        // Optimization: Prevent potential integer overflow
        int mid = left + (right - left) / 2;

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

int binarySearch(int arr[], int low, int high, int target) {
    if (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) 
            return mid;

        if (arr[mid] > target) 
            return binarySearch(arr, low, mid - 1, target);

        return binarySearch(arr, mid + 1, high, target);
    }
    return -1;
}

int main() {
    int A[MAX], temp[MAX], n, target;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n > MAX) {
        printf("Invalid input or exceeds MAX size.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    // Sort the array
    mergeSort(A, temp, 0, n - 1);

    printf("\nSorted Array: ");
    display(A, n);

    printf("Enter element to search: ");
    scanf("%d", &target);


    int index = binarySearch(A, 0, n - 1, target);

    if (index != -1)
        printf("\nTarget %d found at position %d (index %d).\n", target, index + 1, index);
    else
        printf("\nElement %d not found.\n", target);

    return 0;
}