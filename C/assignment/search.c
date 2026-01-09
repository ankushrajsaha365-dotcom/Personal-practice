#include <stdio.h>
#define MAX 10

void bubbleSort(int A[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (A[j] > A[j + 1]) {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
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

int interpolation(int A[], int n, int key, int *iteration) {
    int low = 0, high = n - 1;
    *iteration = 0;
    while (low <= high && key >= A[low] && key <= A[high]) {
        (*iteration)++;
        if (low == high) {
            if (A[low] == key)
                return low;
            return -1;
        }
        int pos = low + ((double)(high - low) / (A[high] - A[low])) * (key - A[low]);
        if (A[pos] == key)
            return pos;
        else if (A[pos] < key)
            low = pos + 1;
        else
            high = pos - 1;
    }
    return -1;
}

int main() {
    int A[MAX], n, key, c, i;
    int index, iteration1, iteration2;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &A[i]);
    }

    bubbleSort(A, n);
    printf("\nElements after sorting: ");
    for (i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }

    printf("\n\nEnter key element: ");
    scanf("%d", &key);

    printf("\nMenu----------");
    printf("\n1. Binary Search");
    printf("\n2. Interpolation Search");
    printf("\n0. Exit");

    do {
        printf("\n\nEnter choice: ");
        scanf("%d", &c);
        switch (c) {
            case 1:
                index = binarysearch(A, n, key, &iteration1);
                if (index != -1)
                    printf("\nElement found at position %d using Binary Search (Iterations: %d)\n", index + 1, iteration1);
                else
                    printf("\nElement not found.\n");
                break;

            case 2:
                index = interpolation(A, n, key, &iteration2);
                if (index != -1)
                    printf("\nElement found at position %d using Interpolation Search (Iterations: %d)\n", index + 1, iteration2);
                else
                    printf("\nElement not found.\n");
                break;

            case 0:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice.\n");
        }
    } while (c != 0);

    return 0;
}

