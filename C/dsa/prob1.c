#include <stdio.h>
#include <stdlib.h>

// Helper function to sort the array (Ascending)
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int interpolationSearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;

    while (low <= high && target >= arr[low] && target <= arr[high]) {
        // If there's only one element or all elements are the same
        if (low == high) {
            if (arr[low] == target) return low;
            return -1;
        }

        // Calculating the position 'pos' using the interpolation formula
        int pos = low + (((double)(high - low) / (arr[high] - arr[low])) * (target - arr[low]));

        printf("Checking at position: %d (Value: %d)\n", pos, arr[pos]);

        if (arr[pos] == target)
            return pos;

        if (arr[pos] < target)
            low = pos + 1;
        else
            high = pos - 1;
    }
    return -1;
}

int main() {
    int arr[] = {10, 45, 2, 31, 99, 15, 82, 60, 5, 20};
    int n = sizeof(arr) / sizeof(arr[0]);

    // 1. Array must be sorted for Interpolation Search
    qsort(arr, n, sizeof(int), compare);

    printf("Sorted Array: ");
    for(int i=0; i<n; i++) printf("%d ", arr[i]);
    printf("\n");

    // 2. Identify the target (3rd largest is at index n-3)
    if (n < 3) {
        printf("Array too small.\n");
        return 0;
    }
    
    int target = arr[n - 3]; 
    printf("Target (3rd Largest): %d\n\n", target);

    // 3. Search for the target using 'pos' logic
    int index = interpolationSearch(arr, n, target);

    if (index != -1)
        printf("\nFound %d at index %d.\n", target, index);
    else
        printf("\nElement not found.\n");

    return 0;
}