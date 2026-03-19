#include <stdio.h>
#define MAX 10

int Q1[MAX], Q2[MAX];
int f1 = -1, r1 = -1, f2 = -1, r2 = -1;

void push() {
    int x, i;
    if (r1 == MAX - 1) {
        printf("\n Stack Overflow");
        return;
    }

    printf("\n Enter element: ");
    scanf("%d", &x);

    // 1. Put the new element into the empty Queue 2
    f2 = 0;
    Q2[++r2] = x;

    // 2. Move everything from Queue 1 to Queue 2
    // This puts the newest element at the front of the line
    while (f1 <= r1 && f1 != -1) {
        Q2[++r2] = Q1[f1++];
    }

    // 3. Move everything back to Queue 1 and reset Queue 2
    f1 = 0; r1 = -1;
    for (i = 0; i <= r2; i++) {
        Q1[++r1] = Q2[i];
    }
    
    // Reset Q2 for next time
    f2 = -1; r2 = -1;
}

void pop() {
    if (f1 == -1 || f1 > r1) {
        printf("\n Stack Underflow");
        f1 = r1 = -1; // Reset pointers
    } else {
        printf("\n Popped element is: %d", Q1[f1++]);
    }
}

void display() {
    if (f1 == -1 || f1 > r1) {
        printf("\n Stack is empty");
    } else {
        printf("\n Stack elements (Top to Bottom): ");
        for (int i = f1; i <= r1; i++) {
            printf("%d ", Q1[i]);
        }
    }
}

int main() {
    int c, i;
    printf("\n 1. Push\n 2. Pop\n 3. Display");
    do {
        printf("\n Enter your choice: ");
        scanf("%d", &c);
        switch (c) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: display(); break;
            default: printf("\n Wrong choice");
        }
        printf("\n Continue? (1-Yes / 0-No): ");
        scanf("%d", &i);
    } while (i == 1);
    return 0;
}