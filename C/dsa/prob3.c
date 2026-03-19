#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Helper to push a node to the start of the list
void push(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

// Helper to print the list
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

// Returns the last node of the list
struct Node* getTail(struct Node* cur) {
    while (cur != NULL && cur->next != NULL)
        cur = cur->next;
    return cur;
}

// Partitions the list around the last node (pivot)
struct Node* partition(struct Node* head, struct Node* end, struct Node** newHead, struct Node** newEnd) {
    struct Node* pivot = end;
    struct Node *prev = NULL, *cur = head, *tail = pivot;

    // During partition, both the head and end of the list can change
    // which is why we update newHead and newEnd
    while (cur != pivot) {
        if (cur->data < pivot->data) {
            if ((*newHead) == NULL) (*newHead) = cur;
            prev = cur;
            cur = cur->next;
        } else {
            // Move node to the end of the list
            if (prev) prev->next = cur->next;
            struct Node* tmp = cur->next;
            cur->next = NULL;
            tail->next = cur;
            tail = cur;
            cur = tmp;
        }
    }

    if ((*newHead) == NULL) (*newHead) = pivot;
    (*newEnd) = tail;

    return pivot;
}

// Recursive Quick Sort function
struct Node* quickSortRecur(struct Node* head, struct Node* end) {
    if (!head || head == end) return head;

    struct Node *newHead = NULL, *newEnd = NULL;

    // Partition the list, newHead and newEnd will be updated by the function
    struct Node* pivot = partition(head, end, &newHead, &newEnd);

    // If pivot is the smallest element - no need to recur for left
    if (newHead != pivot) {
        struct Node* tmp = newHead;
        while (tmp->next != pivot) tmp = tmp->next;
        tmp->next = NULL;

        newHead = quickSortRecur(newHead, tmp);

        // Link the sorted left part back to pivot
        tmp = getTail(newHead);
        tmp->next = pivot;
    }

    // Recur for the list after the pivot element
    pivot->next = quickSortRecur(pivot->next, newEnd);

    return newHead;
}

// Wrapper for Quick Sort
void quickSort(struct Node** headRef) {
    (*headRef) = quickSortRecur(*headRef, getTail(*headRef));
}

int main() {
    struct Node* a = NULL;
    push(&a, 5);
    push(&a, 20);
    push(&a, 4);
    push(&a, 3);
    push(&a, 30);

    printf("Linked List before sorting:\n");
    printList(a);

    quickSort(&a);

    printf("Linked List after sorting:\n");
    printList(a);

    return 0;
}