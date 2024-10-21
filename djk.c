#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX_V 100

int minDistance(int dist[MAX_V], int djkset[MAX_V], int V)
{

    int min = MAX_V, min_index;
    for (int i = 0; i < V; i++)
    {
        if (djkset[i] == 0 && dist[i] <= min)
        {
            min = dist[i];
            min_index = i;
        }
    }

    return min_index;
}

int djikstra(int graph[MAX_V][MAX_V], int V, int src)
{

    int dist[MAX_V], djkset[MAX_V];

    for (int v = 0; v < V; v++)
    {
        dist[v] = MAX_V;
        djkset[v] = 0;
    }

    dist[src] = 0;

    for (int count = 0; count < V - 1; count++)
    {
        int u = minDistance(dist, djkset, V);
        djkset[u] = 1;

        for (int v = 0; v < V; v++)
        {
            if (!djkset[v] && graph[u][v] && dist[u] != MAX_V && dist[u] + graph[u][v] < dist[v])
            {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    printf("Vertex\t Dist from source\n");
    for (int i = 0; i < V; i++)
    {
        printf("%d\t\t%d\n", i, dist[i]);
    }
}

int main()
{
    int V, src;
    int graph[MAX_V][MAX_V];
    printf("Enter the number of nodes: ");
    scanf("%d", &V);

    printf("Enter the adjacency matrix:\n");
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            scanf("%d", &graph[i][j]);
        }
    }

    printf("Enter the source node: ");
    scanf("%d", &src);

    djikstra(graph, V, src);
}