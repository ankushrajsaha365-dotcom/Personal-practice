#include <stdio.h>
int i,j;

struct Item {
    int value;
    int weight;
    float ratio;
};

void swap(struct Item *a, struct Item *b) {
    struct Item temp = *a;
    *a = *b;
    *b = temp;
}

void sortItems(struct Item items[], int n) {
    for ( i = 0; i < n - 1; i++) {
        for ( j = i + 1; j < n; j++) {
            if (items[i].ratio < items[j].ratio) {
                swap(&items[i], &items[j]);
            }
        }
    }
}


float fractionalKnapsack(struct Item items[], int n, int capacity) {

    for ( i = 0; i < n; i++) {
        items[i].ratio = (float)items[i].value / items[i].weight;
    }


    sortItems(items, n);

    float totalValue = 0.0;
    int remainingCapacity = capacity;

  
    for ( i = 0; i < n; i++) {
        if (items[i].weight <= remainingCapacity) {
 
            totalValue += items[i].value;
            remainingCapacity -= items[i].weight;
            printf("Taking full item %d (value=%d, weight=%d)\n", i+1, items[i].value, items[i].weight);
        } else {
     
            totalValue += items[i].ratio * remainingCapacity;
            printf("Taking %.2f fraction of item %d (value=%d, weight=%d)\n",
                   (float)remainingCapacity / items[i].weight, i+1, items[i].value, items[i].weight);
            break;
        }
    }

    return totalValue;
}

int main() {
    int n,capacity;


    printf("Enter number of items: ");
    scanf("%d", &n);

    struct Item items[n];

    for ( i = 0; i < n; i++) {
        printf("Enter value and weight of item %d: ", i+1);
        scanf("%d %d", &items[i].value, &items[i].weight);
    }

    printf("Enter knapsack capacity: ");
    scanf("%d", &capacity);

    float maxValue = fractionalKnapsack(items, n, capacity);
    printf("\nMaximum value in Knapsack = %.2f\n", maxValue);

    return 0;
}
