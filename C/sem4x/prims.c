#include <stdio.h>
#define INF 999999
#define MAX 100

void prims(int graph[MAX][MAX], int n) {
	int i,count,v,total = 0;
    int parent[MAX];   
    int key[MAX];     
    int mstSet[MAX];   

  
    for (i = 0; i < n; i++) {
        key[i] = INF;
        mstSet[i] = 0;
    }

    
    key[0] = 0;
    parent[0] = -1; 

   
    for (count = 0; count < n - 1; count++) {
       
        int min = INF, u;
        for (v = 0; v < n; v++) {
            if (mstSet[v] == 0 && key[v] < min) {
                min = key[v];
                u = v;
            }
        }

     
        mstSet[u] = 1;

        
        for (v = 0; v < n; v++) {
            if (graph[u][v] && mstSet[v] == 0 && graph[u][v] < key[v]) {
                parent[v] = u;
                key[v] = graph[u][v];
                
            }
        }
    }


    printf("Edge \tWeight\n");
    for (i = 1; i < n; i++) {
        printf("%d - %d \t%d\n", parent[i], i, graph[i][parent[i]]);
        total += graph[i][parent[i]];
    }
    printf("Total weightage: %d unit",total);
}

int main() {
    int n,i,j;
    int graph[MAX][MAX];

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix (use 0 if no edge):\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    prims(graph, n);

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

