#include <stdio.h>

#define MAX 50

int matrix[MAX][MAX];
int reconMatrix[MAX][MAX];
int rows, cols;

/* Read adjacency matrix */
void readMatrix() {
    printf("Enter the adjacency matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

/* Display adjacency list */
void displayAdjList() {
    printf("\nAdjacency List:\n");
    for (int i = 0; i < rows; i++) {
        printf("%d th -> ", i + 1);
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != 0) {
                printf("%d%d -> %d   ", i, j, matrix[i][j]);
            }
        }
        printf("\n");
    }
}

/* Convert adjacency list back to matrix */
void listToMatrix() {
    /* Initialize reconstructed matrix */
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            reconMatrix[i][j] = 0;
        }
    }

    /* Reconstruct using non-zero values */
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != 0) {
                reconMatrix[i][j] = matrix[i][j];
            }
        }
    }

    printf("\nAdjacency Matrix (Reconstructed):\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", reconMatrix[i][j]);
        }
        printf("\n");
    }
}

/* Menu */
void menu() {
    printf("\n------ MENU ------\n");
    printf("1. Enter adjacency matrix\n");
    printf("2. Display adjacency list\n");
    printf("3. Convert adjacency list to matrix\n");
    printf("4. Exit\n");
    printf("------------------\n");
    printf("Enter your choice: ");
}

int main() {
    int choice;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    do {
        menu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                readMatrix();
                break;

            case 2:
                displayAdjList();
                break;

            case 3:
                listToMatrix();
                break;

            case 4:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 4);

    return 0;
}
