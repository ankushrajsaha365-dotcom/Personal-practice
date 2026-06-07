#include <stdio.h>
#include <stdlib.h>

#define INF 9999999
#define MAX 10

int d[MAX][MAX], p[MAX][MAX];

void floyd(int graph[MAX][MAX], int n) {
    int i, j, k;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            d[i][j] = graph[i][j];
            p[i][j] = -1; // -1 means direct edge (no intermediate vertex yet)
        }
    }   
    for (k = 1; k <= n; k++) {
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n; j++) {
                if (d[i][j] > (d[i][k] + d[k][j])) {
                    d[i][j] = d[i][k] + d[k][j];
                    p[i][j] = k; // Record the intermediate vertex
                }
            }
        }
    }
}

// Recursive function to correctly reconstruct the path
void printPath(int s, int e) {
    if (p[s][e] == -1) {
        return;
    }
    printPath(s, p[s][e]);
    printf("%d -> ", p[s][e]);
    printPath(p[s][e], e);
}

int main() {
    int n, graph[MAX][MAX];
    printf("Enter number of vertices: ");
    scanf("%d", &n);
    
    printf("Enter Adjacency matrix (for infinity enter 0):\n");
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            scanf("%d", &graph[i][j]);
            if (graph[i][j] == 0 && i != j) {
                graph[i][j] = INF;
            }
        }
    }
    
    floyd(graph, n);
    
    // Solution Matrix
    printf("\nSolution Matrix:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (d[i][j] == INF)
                printf("INF   ");
            else
                printf("%-5d ", d[i][j]);
        }
        printf("\n");
    }
    
    // Path Matrix
    printf("\nPath Matrix:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            printf("%-5d ", p[i][j]);
        }
        printf("\n");
    }
    
    // Corrected Path Reconstruction Output
    int s, e;
    printf("\nEnter source and destination vertex: ");
    scanf("%d %d", &s, &e);
    
    if (d[s][e] == INF) {
        printf("No path exists between %d and %d\n", s, e);
    } else {
        printf("Shortest Distance: %d\n", d[s][e]);
        printf("Path: ");
        if (s == e) {
            printf("%d\n", s);
        } else {
            printf("%d -> ", s);
            printPath(s, e);
            printf("%d\n", e);
        }
    }
    
    return 0;
}
/*
0 8 0 1
0 0 1 0
4 0 0 0
0 2 9 0
*/
