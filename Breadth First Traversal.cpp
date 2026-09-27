#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Graph {
public:
    int V;                        // number of vertices
    vector<vector<int>> adj;      // adjacency list
    vector<bool> visited;         // visited array

    Graph(int vertices) {
        V = vertices;
        adj.resize(V);
        visited.resize(V, false);
    }

    // Add edge (undirected graph)
    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // BFS function
    void BFS(int start) {
        queue<int> q;
        visited[start] = true;
        q.push(start);

        while (!q.empty()) {
            int node = q.front();
            q.pop();
            cout << node << " ";

            for (int neigh : adj[node]) {
                if (!visited[neigh]) {
                    visited[neigh] = true;
                    q.push(neigh);
                }
            }
        }
    }
};

int main() {
    Graph g(5);   // Graph with 5 nodes: 0,1,2,3,4

    // Add edges
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);

    cout << "Breadth First Traversal starting from node 0: ";
    g.BFS(0);

    return 0;
}
