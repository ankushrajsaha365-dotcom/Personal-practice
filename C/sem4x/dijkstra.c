#include <stdio.h>
#include <stdlib.h>

#define MAX 20
#define INF 99999999

void dijk(int g[][MAX], int n, int start)
{
    // Adjust from 1-based user input to 0-based array index
    start--; 
    
    // Consistent array sizing using MAX to avoid buffer overflows
    int cost[MAX][MAX], dist[MAX];
    int visited[MAX];
    int i, j, count, mindist, nextnode;

    // Build the cost matrix
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(g[i][j] == 0 && i != j)
                cost[i][j] = INF;
            else
                cost[i][j] = g[i][j];
        }
    }

    // Initialize tracking arrays
    for(i = 0; i < n; i++) {
        dist[i] = cost[start][i];
        visited[i] = 0;
    }

    dist[start] = 0;
    visited[start] = 1;
    count = 1;

    // Loop runs until all reachable nodes (up to n) are processed
    while(count < n)
    {
        mindist = INF;
        nextnode = -1;

        // Find the unvisited node with the minimum distance
        for(i = 0; i < n; i++) {
            if(!visited[i] && dist[i] < mindist) {
                mindist = dist[i];
                nextnode = i;
            }
        }

        // If no remaining nodes are reachable, stop
        if(nextnode == -1)
            break;

        visited[nextnode] = 1;

        // Update distances of adjacent nodes
        for(i = 0; i < n; i++) {
            if(!visited[i] && cost[nextnode][i] != INF) {
                if(mindist + cost[nextnode][i] < dist[i]) {
                    dist[i] = mindist + cost[nextnode][i];
                }
            }
        }
        count++;
    }

    // Output results
    printf("\nShortest distances from vertex %d:\n", start + 1);
    for(i = 0; i < n; i++) {
        if(dist[i] == INF)
            printf("To vertex %d = Not Reachable\n", i + 1);
        else
            printf("To vertex %d = %d\n", i + 1, dist[i]);
    }
}

int main()
{
    int n, start, g[MAX][MAX];
    
    printf("Enter number of vertices (max %d): ", MAX);
    scanf("%d", &n);
    
    if (n > MAX || n <= 0) {
        printf("Invalid number of vertices!\n");
        return 0;
    }

    printf("Enter Adjacency matrix (for infinity enter 0):\n");
    int i, j;
    // Fixed: Loop runs from 0 to n-1 to match standard C arrays
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &g[i][j]);
        }
    }
    
    printf("Enter starting vertex (1 to %d): ", n);
    scanf("%d", &start);

    if(start <= 0 || start > n) {
        printf("Invalid starting vertex!\n");
        return 0;
    }

    dijk(g, n, start);

    return 0;
}
/*
0 8 0 1
0 0 1 0
4 0 0 0
0 2 9 0
*/