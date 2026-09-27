#include <iostream>
using namespace std;

#define INF 9999
#define V 4   // number of vertices

void floydWarshall(int graph[V][V]) {
    int dist[V][V];

    // Step 1: Copy original graph to dist[]
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            dist[i][j] = graph[i][j];
        }
    }

    // Step 2: Main Algorithm
    for (int k = 0; k < V; k++) {          // pick intermediate node
        for (int i = 0; i < V; i++) {      // pick source
            for (int j = 0; j < V; j++) {  // pick destination
                if (dist[i][k] + dist[k][j] < dist[i][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }

    // Print result
    cout << "Shortest distances between every pair of nodes:\n";
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            if (dist[i][j] == INF)
                cout << "INF ";
            else
                cout << dist[i][j] << "   ";
        }
        cout << endl;
    }
}

int main() {
    int graph[V][V] = {
        {0,   3, INF, 5},
        {2,   0, INF, 4},
        {INF, 1, 0,   INF},
        {INF, INF, 2, 0}
    };

    floydWarshall(graph);

    return 0;
}
