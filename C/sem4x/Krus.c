#include <stdio.h>
#include <stdlib.h>

#define INF 999999
#define MAX 10
int i, j;

struct Edge {
    int u, v, weight;
};

int find(int parent[], int i) {
    if (parent[i] == i)
        return i;
    return parent[i] = find(parent, parent[i]);
}

void unite(int parent[], int rank[], int i, int j) {
    int root_i = find(parent, i);
    int root_j = find(parent, j);
    if (root_i != root_j) {
        if (rank[root_i] < rank[root_j]) parent[root_i] = root_j;
        else if (rank[root_i] > rank[root_j]) parent[root_j] = root_i;
        else {
            parent[root_j] = root_i;
            rank[root_i]++;
        }
    }
}

int compare(const void* a, const void* b) {
    return ((struct Edge*)a)->weight - ((struct Edge*)b)->weight;
}

void kruskal(int V, int matrix[MAX][MAX]) {
    struct Edge edges[MAX * MAX];
    int edge_count = 0;

    // 1. Convert 2D Matrix to Edge List
    for (i = 0; i < V; i++) {
        for (j = i + 1; j < V; j++) {
            if (matrix[i][j] != 0 && matrix[i][j] != INF) {
                edges[edge_count].u = i;
                edges[edge_count].v = j;
                edges[edge_count].weight = matrix[i][j];
                edge_count++;
            }
        }
    }

    qsort(edges, edge_count, sizeof(struct Edge), compare);

    int parent[MAX], rank[MAX];
    for (i = 0; i < V; i++) {
        parent[i] = i;
        rank[i] = 0;
    }

    printf("Edge \tWeight\n");
    int mst_weight = 0;
    for (i = 0; i < edge_count; i++) {
        if (find(parent, edges[i].u) != find(parent, edges[i].v)) {
            unite(parent, rank, edges[i].u, edges[i].v);
            printf("%d - %d \t%d\n", edges[i].u, edges[i].v, edges[i].weight);
            mst_weight += edges[i].weight;
        }
    }
    printf("Total MST Weight: %d\n", mst_weight);
}

int main() {
    int n;
    int matrix[MAX][MAX];
    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix (use 0 if no edge):\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    kruskal(n, matrix);

    return 0;
}

/*
0 1 0 0 0 3
1 0 9 0 0 5
0 9 0 4 0 7
0 0 4 0 11 0
0 0 0 11 0 10
3 5 7 0 10 0
*/

