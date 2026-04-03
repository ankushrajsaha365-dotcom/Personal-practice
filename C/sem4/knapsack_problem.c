#include <stdio.h>
#include <stdlib.h>

struct Item {
    int value;
    int weight;
    float ratio;
};

int compare(const void *a, const void *b) {
    struct Item *i1 = (struct Item *)a;
    struct Item *i2 = (struct Item *)b;

    if (i2->ratio > i1->ratio)
        return 1;
    else if (i2->ratio < i1->ratio)
        return -1;
    else
        return 0;
}

int main() {
    int n, capacity;
    float totalValue = 0.0;

   
    printf("Enter number of items: ");
    scanf("%d", &n);

    struct Item *items = (struct Item *)malloc(n * sizeof(struct Item));

    if (items == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }


    for (int i = 0; i < n; i++) {
        printf("\nItem %d\n", i + 1);
        printf("Enter value: ");
        scanf("%d", &items[i].value);

        printf("Enter weight: ");
        scanf("%d", &items[i].weight);

        items[i].ratio = (float)items[i].value / items[i].weight;
    }

    printf("\nEnter knapsack capacity: ");
    scanf("%d", &capacity);


    qsort(items, n, sizeof(struct Item), compare);


    for (int i = 0; i < n; i++) {
        if (capacity >= items[i].weight) {
            // Take full item
            capacity -= items[i].weight;
            totalValue += items[i].value;
        } else {
            // Take fraction
            totalValue += items[i].ratio * capacity;
            break;
        }
    }

    printf("\nMaximum value in knapsack = %.2f\n", totalValue);


    free(items);

    return 0;
}