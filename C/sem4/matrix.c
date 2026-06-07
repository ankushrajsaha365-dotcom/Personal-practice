#include <stdio.h>

#define INF 99999999   // A large number to represent infinity

// Function to print optimal parenthesization
void printOptimalParens(int i, int j, int n, int s[n][n]) {
    if (i == j) {
        printf("A%d", i);
    } else {
        printf("(");
        printOptimalParens(i, s[i][j], n, s);
        printOptimalParens(s[i][j] + 1, j, n, s);
        printf(")");
    }
}

// Matrix Chain Multiplication with DP tables
int matrixChainOrder(int p[], int n) {
    int m[n][n];   // cost table
    int s[n][n];   // split table
    int i, j, k, L, q;

    for (i = 1; i < n; i++)
        m[i][i] = 0;

    for (L = 2; L < n; L++) {
        for (i = 1; i < n - L + 1; i++) {
            j = i + L - 1;
            m[i][j] = INF;
            for (k = i; k <= j - 1; k++) {
                q = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
                if (q < m[i][j]) {
                    m[i][j] = q;
                    s[i][j] = k;
                }
            }
        }
    }

    // Print DP tables
    printf("\nCost Table C[i][j]:\n");
    for (i = 1; i < n; i++) {
        for (j = 1; j < n; j++) {
            if (j < i) printf("   -   ");
            else printf("%6d ", m[i][j]);
        }
        printf("\n");
    }

    printf("\nSplit Table K[i][j]:\n");
    for (i = 1; i < n; i++) {
        for (j = 1; j < n; j++) {
            if (j <= i) printf("   -   ");
            else printf("%6d ", s[i][j]);
        }
        printf("\n");
    }

    printf("\nOptimal Parenthesization: ");
    printOptimalParens(1, n - 1, n, s);
    printf("\n");

    // Resultant matrix dimension
    printf("Resultant Matrix Dimension: %d x %d\n", p[0], p[n - 1]);

    return m[1][n - 1];
}

int main() {
    int n, i;
    printf("Enter the number of matrices: ");
    scanf("%d", &n);

    int rows[n], cols[n];
    int p[n + 1];

    for (i = 0; i < n; i++) {
        printf("Enter rows and columns of matrix %d: ", i + 1);
        scanf("%d %d", &rows[i], &cols[i]);
    }

    p[0] = rows[0];
    for (i = 0; i < n; i++) {
        p[i + 1] = cols[i];
    }

    int minCost = matrixChainOrder(p, n + 1);
    printf("\nMinimum number of multiplications is %d\n", minCost);

    return 0;
}

