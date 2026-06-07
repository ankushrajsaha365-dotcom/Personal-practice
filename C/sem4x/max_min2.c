#include <stdio.h>

struct Pair {
    int min;
    int max;
};

struct Pair getMinMax(int *arr, int low, int high) {
    struct Pair result, left, right;
    int mid;

    if (low == high) {
        result.min = result.max = arr[low];
        return result;
    }


    if (high == low + 1) {
        if (arr[low] < arr[high]) {
            result.min = arr[low];
            result.max = arr[high];
        } else {
            result.min = arr[high];
            result.max = arr[low];
        }
        return result;
    }


    mid = (low + high) / 2;

    left = getMinMax(arr, low, mid);
    right = getMinMax(arr, mid + 1, high);

    result.min = (left.min < right.min) ? left.min : right.min;
    result.max = (left.max > right.max) ? left.max : right.max;

    return result;
}

int main() {
    int n, i;
    int *arr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    struct Pair ans = getMinMax(arr, 0, n - 1);

    // Output
    printf("Minimum element: %d\n", ans.min);
    printf("Maximum element: %d\n", ans.max);

    free(arr);

    return 0;
}