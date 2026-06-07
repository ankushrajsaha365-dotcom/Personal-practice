#include <stdio.h>
#define MAX 20


struct Pair {
    int min;
    int max;
};

struct Pair getMinMax(int arr[], int low, int high) {
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

    int arr[MAX], n;
    int index, iteration1, iteration2;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    struct Pair ans = getMinMax(arr, 0, n - 1);

    printf("Minimum element: %d\n", ans.min);
    printf("Maximum element: %d\n", ans.max);

    return 0;
}