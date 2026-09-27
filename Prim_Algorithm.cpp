#include <iostream>
using namespace std;

#define INF 9999
#define V 5   // number of vertices

int minKey(int key[], bool mstSet[]) {
    int min = INF, min_index = -1;

    for (int v = 0; v < V; v++) {
        if (!mstSet[v] && key[v] < min) {
            min = key[v];
            min_index = v;
        }
    }
    return min_index;
}

void primMST(int graph[V][V]) {
    int parent[V];  // to store MST
    int key[V];     // weight values
    bool mstSet[V]; // included in MST?

    // Initialize all keys as INF
    for (int i = 0; i < V; i++) {
        key[i] = INF;
        mstSet[i] = false;
    }

    key[0] = 0;      // start node = 0
    parent[0] = -1;  // first node is root of MST

    // Build MST with V-1 edges
    for (int count = 0; count < V - 1; count++) {
        int u = minKey(key, mstSet);
        mstSet[u] = true;

        for (int v = 0; v < V; v++) {
            if (graph[u][v] != 0 && !mstSet[v] && graph[u][v] < key[v]) {
                parent[v] = u;
                key[v] = graph[u][v];
            }
        }
    }

    // Print MST
    cout << "Edges in Minimum Spanning Tree:\n";
    int total = 0;

    for (int i = 1; i < V; i++) {
        cout << parent[i] << " -- " << i << "   weight: " << graph[i][parent[i]] << endl;
        total += graph[i][parent[i]];
    }

    cout << "Total Weight of MST = " << total << endl;
}

int main() {
    int graph[V][V] = {
        {0, 2, 0, 6, 0},
        {2, 0, 3, 8, 5},
        {0, 3, 0, 0, 7},
        {6, 8, 0, 0, 9},
        {0, 5, 7, 9, 0}
    };

    primMST(graph);

    return 0;
}
