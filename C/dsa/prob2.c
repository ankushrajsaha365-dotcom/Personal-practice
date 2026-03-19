#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort (Ascending)
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

// Binary Search to find the index of the last negative number
int findLastNegativeIndex(int arr[], int n) {
    int low = 0, high = n - 1;
    int lastNeg = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] < 0) {
            lastNeg = mid; // Potential candidate
            low = mid + 1; // Look for a negative closer to zero
        } else {
            high = mid - 1; // Too high, move left
        }
    }
    return lastNeg;
}

int main() {
    int arr[] = {-15, -3, -20, 10, -1, -7, 5, -30};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Step 1: Sort the array
    qsort(arr, n, sizeof(int), compare);

    // Step 2: Use Binary Search to find the boundary of negatives
    int lastNegIdx = findLastNegativeIndex(arr, n);

    // Step 3: Offset by 2 to find the 3rd highest (closest to 0)
    if (lastNegIdx >= 2) {
        printf("Sorted negatives end at index: %d (Value: %d)\n", lastNegIdx, arr[lastNegIdx]);
        printf("The 3rd highest negative is: %d\n", arr[lastNegIdx - 2]);
    } else {
        printf("Not enough negative numbers found.\n");
    }

    return 0;
}