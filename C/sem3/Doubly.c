#include <stdio.h>
#include <stdlib.h>

// Structure for a Doubly Linked List node
struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

// Global head pointer
struct Node *head = NULL;

// Function to create a new node
struct Node* createNode(int data) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Insert at the beginning
void insertAtBeginning(int data) {
    struct Node *newNode = createNode(data);
    if (head == NULL) {
        head = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

// Insert at the end
void insertAtEnd(int data) {
    struct Node *newNode = createNode(data);
    if (head == NULL) {
        head = newNode;
        return;
    }
    struct Node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
}

// Delete a node by value
void deleteNode(int data) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node *temp = head;

    // If head node holds the value
    if (temp->data == data) {
        head = temp->next;
        if (head != NULL)
            head->prev = NULL;
        free(temp);
        printf("Node %d deleted.\n", data);
        return;
    }

    // Traverse to find the node
    while (temp != NULL && temp->data != data)
        temp = temp->next;

    if (temp == NULL) {
        printf("Node %d not found.\n", data);
        return;
    }

    // Unlink node
    if (temp->next != NULL)
        temp->next->prev = temp->prev;
    if (temp->prev != NULL)
        temp->prev->next = temp->next;

    free(temp);
    printf("Node %d deleted.\n", data);
}

// Search for a value in the list
void searchNode(int key) {
    struct Node *temp = head;
    int position = 1;
    while (temp != NULL) {
        if (temp->data == key) {
            printf("Element %d found at position %d.\n", key, position);
            return;
        }
        temp = temp->next;
        position++;
    }
    printf("Element %d not found in the list.\n", key);
}

// Display list from start to end
void displayForward() {
    struct Node *temp = head;
    if (temp == NULL) {
        printf("List is empty.\n");
        return;
    }
    printf("List (Forward): ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Display list from end to start
void displayBackward() {
    struct Node *temp = head;
    if (temp == NULL) {
        printf("List is empty.\n");
        return;
    }
    // Move to last node
    while (temp->next != NULL)
        temp = temp->next;

    printf("List (Backward): ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->prev;
    }
    printf("\n");
}

// === Merge Sort for Doubly Linked List ===

// Split the doubly linked list into two halves
struct Node* split(struct Node* head) {
    struct Node* fast = head;
    struct Node* slow = head;
    while (fast->next && fast->next->next) {
        fast = fast->next->next;
        slow = slow->next;
    }
    struct Node* temp = slow->next;
    slow->next = NULL;
    if (temp)
        temp->prev = NULL;
    return temp;
}

// Merge two sorted doubly linked lists
struct Node* merge(struct Node* first, struct Node* second) {
    // If either list is empty
    if (!first)
        return second;
    if (!second)
        return first;

    // Compare data and merge recursively
    if (first->data < second->data) {
        first->next = merge(first->next, second);
        if (first->next)
            first->next->prev = first;
        first->prev = NULL;
        return first;
    } else {
        second->next = merge(first, second->next);
        if (second->next)
            second->next->prev = second;
        second->prev = NULL;
        return second;
    }
}

// Merge Sort function
struct Node* mergeSort(struct Node* head) {
    if (!head || !head->next)
        return head;
    struct Node* second = split(head);

    // Recursively sort both halves
    head = mergeSort(head);
    second = mergeSort(second);

    // Merge sorted halves
    return merge(head, second);
}

// Function to sort the list
void sortList() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    head = mergeSort(head);
    printf("List has been sorted using Merge Sort.\n");
}

// === MAIN MENU ===
int main() {
    int choice, data;

    while (1) {
        printf("\n--- Doubly Linked List Menu ---\n");
        printf("1. Insert at beginning\n");
        printf("2. Insert at end\n");
        printf("3. Delete a node\n");
        printf("4. Search for a node\n");
        printf("5. Sort list (Merge Sort)\n");
        printf("6. Display forward\n");
        printf("7. Display backward\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data: ");
                scanf("%d", &data);
                insertAtBeginning(data);
                break;

            case 2:
                printf("Enter data: ");
                scanf("%d", &data);
                insertAtEnd(data);
                break;

            case 3:
                printf("Enter value to delete: ");
                scanf("%d", &data);
                deleteNode(data);
                break;

            case 4:
                printf("Enter value to search: ");
                scanf("%d", &data);
                searchNode(data);
                break;

            case 5:
                sortList();
                break;

            case 6:
                displayForward();
                break;

            case 7:
                displayBackward();
                break;

            case 0:
                printf("Exiting program...\n");
                exit(0);

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

