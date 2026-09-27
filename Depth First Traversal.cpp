#include <iostream>
#include <vector>
using namespace std;

class Graph {
public:
    int V; // number of vertices
    vector<vector<int>> adj; // adjacency list
    vector<bool> visited;

    Graph(int vertices) {
        V = vertices;
        adj.resize(V);
        visited.resize(V, false);
    }

    // Add edge
    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u); // for undirected graph
    }

    // DFS function
    void DFS(int node) {
        visited[node] = true;
        cout << node << " ";

        for (int neigh : adj[node]) {
            if (!visited[neigh]) {
                DFS(neigh);
            }
        }
    }
};

int main() {
    Graph g(5);   // 5 vertices: 0,1,2,3,4

    // Adding edges
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);

    cout << "Depth First Traversal starting from node 0: ";
    g.DFS(0);

    return 0;
}
