#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int knapsack(int W, int wt[], int val[], int n) {
    int arr[n+1][W+1];
	int i,j,w;
	
    for (i = 0; i <= n; i++) {
        for (w = 0; w <= W; w++) {
            if (i == 0 || w == 0)
                arr[i][w] = 0;
            else if (wt[i-1] <= w)
                arr[i][w] = max(val[i-1] + arr[i-1][w-wt[i-1]], arr[i-1][w]);
            else
                arr[i][w] = arr[i-1][w];
        }
    }


    printf("\nThe Matrix:\n");
    for (i = 0; i <= n; i++) {
        for (w = 0; w <= W; w++) {
            printf("%3d ", arr[i][w]);
        }
        printf("\n");
    }

    return arr[n][W];
}

int main() {
    int n, W ,i;


    printf("Enter number of items: ");
    scanf("%d", &n);

    int val[n], wt[n];


    printf("Enter values of items:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &val[i]);
    }

    printf("Enter weights of items:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &wt[i]);
    }


    printf("Enter capacity of knapsack: ");
    scanf("%d", &W);

    int result = knapsack(W, wt, val, n);
    printf("\nMaximum value in Knapsack = %d\n", result);

    return 0;
}

