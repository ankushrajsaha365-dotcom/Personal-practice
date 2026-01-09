#include <stdio.h>
#include <stdlib.h>

#define MAX 50

int hashArray[MAX];

void table() {
    for (int i = 0; i < MAX; i++)
        hashArray[i] = -1;  
}

void insert(int key, int m) {
    int pos;

    for (int i = 0; i < m; i++) {
        pos = (key % m + i) % m;

        if (hashArray[pos] == -1) {
            hashArray[pos] = key;
            printf("Key %d inserted at index %d\n", key, pos);
            return;
        }
    }

    printf("Hash table is full! Cannot insert %d\n", key);
}


void search(int key, int m) {
    int pos;

    for (int i = 0; i < m; i++) {
        pos = (key % m + i) % m;

        if (hashArray[pos] == key) {
            printf("Key %d found at index %d\n", key, pos);
            return;
        }
        if (hashArray[pos] == -1)
            break;
    }

    printf("Key %d not found\n", key);
}

void display() {
    printf("\nHash Table:\n");
    for (int i = 0; i < MAX; i++)
        printf("Index %d -> %d\n", i, hashArray[i]);
}

int main() {
    int key, m, ch;

    printf("Enter hash table size: ");
    scanf("%d", &m);

    table();

    while (1) {
        printf("\n1. Insert\n2. Search\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter key to insert: ");
                scanf("%d", &key);
                insert(key, m);
                break;

            case 2:
                printf("Enter key to search: ");
                scanf("%d", &key);
                search(key, m);
                break;

            case 3:
                display();
                break;

            case 4:
                exit(0);

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
