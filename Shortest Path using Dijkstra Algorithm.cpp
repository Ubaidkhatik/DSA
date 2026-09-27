#include <iostream>
#include <climits>
using namespace std;

#define V 5   // number of vertices

// Function to find the vertex with minimum distance
int minDistance(int dist[], bool visited[]) {
    int min = INT_MAX, minIndex;

    for (int v = 0; v < V; v++) {
        if (!visited[v] && dist[v] <= min) {
            min = dist[v];
            minIndex = v;
        }
    }
    return minIndex;
}

// Dijkstra Algorithm
void dijkstra(int graph[V][V], int src) {
    int dist[V];       // shortest distances
    bool visited[V];   // visited nodes

    // Initialize values
    for (int i = 0; i < V; i++) {
        dist[i] = INT_MAX;
        visited[i] = false;
    }

    dist[src] = 0; // distance to itself is 0

    // Find shortest path for all vertices
    for (int count = 0; count < V - 1; count++) {
        int u = minDistance(dist, visited); // pick min distance node
        visited[u] = true;

        // Update distance of adjacent nodes
        for (int v = 0; v < V; v++) {
            if (!visited[v] && graph[u][v] != 0 &&
                dist[u] != INT_MAX &&
                dist[u] + graph[u][v] < dist[v]) 
            {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    // Print result
    cout << "Shortest distances from source " << src << ":\n";
    for (int i = 0; i < V; i++) {
        cout << "To " << i << " = " << dist[i] << endl;
    }
}

int main() {
    // Adjacency matrix representation
    int graph[V][V] = {
        {0, 4, 0, 0, 8},
        {4, 0, 6, 0, 0},
        {0, 6, 0, 3, 0},
        {0, 0, 3, 0, 5},
        {8, 0, 0, 5, 0}
    };

    dijkstra(graph, 0);  // starting from node 0

    return 0;
}
