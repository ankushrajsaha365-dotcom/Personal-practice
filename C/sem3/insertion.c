#include <stdio.h>
#include <stdlib.h>

// Doubly Linked List Node
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Function to create a new node
struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->prev = node->next = NULL;
    return node;
}

// Function to insert a node at the end
void append(struct Node** head_ref, int data) {
    struct Node* node = newNode(data);
    struct Node* temp = *head_ref;

    if (*head_ref == NULL) {
        *head_ref = node;
        return;
    }

    while (temp->next != NULL)
        temp = temp->next;

    temp->next = node;
    node->prev = temp;
}

// Print list (forward)
void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Insert node in sorted order into a sorted list
void sortedInsert(struct Node** head_ref, struct Node* new_node) {
    struct Node* current;

    if (*head_ref == NULL) {
        *head_ref = new_node;
        new_node->prev = new_node->next = NULL;
        return;
    }

    if (new_node->data < (*head_ref)->data) {
        new_node->next = *head_ref;
        new_node->prev = NULL;
        (*head_ref)->prev = new_node;
        *head_ref = new_node;
        return;
    }

    current = *head_ref;
    while (current->next != NULL && current->next->data < new_node->data)
        current = current->next;

    new_node->next = current->next;
    if (current->next != NULL)
        current->next->prev = new_node;

    current->next = new_node;
    new_node->prev = current;
}

// Perform insertion sort
void insertionSort(struct Node** head_ref) {
    struct Node* sorted = NULL;
    struct Node* current = *head_ref;

    while (current != NULL) {
        struct Node* next = current->next;
        current->prev = current->next = NULL;
        sortedInsert(&sorted, current);
        current = next;
    }

    *head_ref = sorted;
}


int main() {
    struct Node* head = NULL;
    int i, n, val;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &val);
        append(&head, val);
    }

    printf("\nBefore Sorting:\n");
    printList(head);

    insertionSort(&head);

    printf("\nAfter Sorting:\n");
    printList(head);

    return 0;
}
