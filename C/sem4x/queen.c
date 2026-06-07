#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

#define MAX 10

int x[MAX];
int count = 0;


void printBoard(int n) {
    int i, j;

    printf("\nSolution %d:\n\n", count);

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++) {

            if(x[i] == j)
                printf(" Q ");
            else
                printf(" _ ");
        }
        printf("\n");
    }

    printf("\n");
}


bool place(int k, int i) {
    int j;

    for(j = 1; j < k; j++) {

        /* Same column or diagonal */
        if(x[j] == i || abs(x[j] - i) == abs(j - k)) {
            return false;
        }
    }

    return true;
}

void nQueens(int k, int n) {
    int i;

    for(i = 1; i <= n; i++) {

        if(place(k, i)) {

            x[k] = i;

            if(k == n) {
                count++;
                printBoard(n);
            }
            else {
                nQueens(k + 1, n);
            }
        }
    }
}

int main() {

    int n;

    printf("Enter number of queens: ");
    scanf("%d", &n);

    nQueens(1, n);

    printf("Total solutions = %d\n", count);

    return 0;
}
