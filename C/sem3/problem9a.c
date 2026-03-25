#include <stdio.h>

// ------------------ Sorting Functions ------------------

void bubbleSort(int arr[], int n) {
	int i,j;
    for ( i = 0; i < n - 1; i++) {
        for ( j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void insertionSort(int arr[], int n) {
	int i;
    for ( i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void selectionSort(int arr[], int n) {
	int i,j;
    for (i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

void merge(int arr[], int left, int mid, int right) {
	int i,j;
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int L[n1], R[n2];

    for ( i = 0; i < n1; i++){
		L[i] = arr[left + i];
	}
    for ( j = 0; j < n2; j++){
		R[j] = arr[mid + 1 + j];
	}

    i = 0, j = 0;
    
	int k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) arr[k++] = L[i++];
        else arr[k++] = R[j++];
    }
    while (i < n1) 
		arr[k++] = L[i++];
    while (j < n2) 
		arr[k++] = R[j++];
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    int j;

    for (j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return i + 1;
}


void display(int arr[], int n) {
	int i;
    for ( i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int i,choice, n, arr[100];

    do {
        printf("\n==== Sorting Menu ====\n");
        printf("1. Bubble Sort\n");
        printf("2. Insertion Sort\n");
        printf("3. Selection Sort\n");
        printf("4. Merge Sort\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice < 5) {
            printf("Enter number of elements: ");
            scanf("%d", &n);
            printf("Enter %d elements: ", n);
            for (i = 0; i < n; i++)
                scanf("%d", &arr[i]);
        }

        switch (choice) {
            case 1:
                bubbleSort(arr, n);
                printf("Sorted Array (Bubble Sort): ");
                display(arr, n);
                break;
            case 2:
                insertionSort(arr, n);
                printf("Sorted Array (Insertion Sort): ");
                display(arr, n);
                break;
            case 3:
                selectionSort(arr, n);
                printf("Sorted Array (Selection Sort): ");
                display(arr, n);
                break;
            case 4:
                mergeSort(arr, 0, n - 1);
                printf("Sorted Array (Merge Sort): ");
                display(arr, n);
                break;
            case 5:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}
