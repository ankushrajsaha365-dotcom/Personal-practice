#include <stdio.h>
#include <stdlib.h>

#define SIZE 7 // Size of the hash table

int hashTable[SIZE];

// Initialize hash table with -1 (indicates empty)
void initTable() {
    for (int i = 0; i < SIZE; i++)
        hashTable[i] = -1;
}

// Hash function
int hashFunction(int key) {
    return key % SIZE;
}

// Insert function with linear probing
void insert(int key) {
    int index = hashFunction(key);
    int originalIndex = index;

    // Linear probing: move to next index if occupied
    while (hashTable[index] != -1) {
        index = (index + 1) % SIZE;
        if (index == originalIndex) {  // Table full
            printf("Hash table is full! Cannot insert %d\n", key);
            return;
        }
    }
    hashTable[index] = key;
    printf("Inserted %d at index %d\n", key, index);
}

// Search function
int search(int key) {
    int index = hashFunction(key);
    int originalIndex = index;

    while (hashTable[index] != -1) {
        if (hashTable[index] == key)
            return index;

        index = (index + 1) % SIZE;
        if (index == originalIndex)
            return -1;
    }
    return -1;
}

// Display hash table
void display() {
    printf("\nHash Table:\n");
    for (int i = 0; i < SIZE; i++)
        printf("Index %d -> %d\n", i, hashTable[i]);
}

int main() {
    int choice, key, index;
    initTable();

    while (1) {
        printf("\n1. Insert\n2. Search\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter key to insert: ");
                scanf("%d", &key);
                insert(key);
                break;
            case 2:
                printf("Enter key to search: ");
                scanf("%d", &key);
                index = search(key);
                if (index != -1)
                    printf("Key %d found at index %d\n", key, index);
                else
                    printf("Key %d not found!\n", key);
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
