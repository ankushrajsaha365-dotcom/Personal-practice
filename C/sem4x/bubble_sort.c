#include<stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void bubble_sort_recursive(int arr[], int n) {
    if (n == 1)
        return;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    bubble_sort_recursive(arr, n - 1);
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    bubbleSort(arr, n);
    printf("Bubble Sorted array: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    bubble_sort_recursive(arr, n);  
    printf("Bubble Sorted array (Recursive): \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}