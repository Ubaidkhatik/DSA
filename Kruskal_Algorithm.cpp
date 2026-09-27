#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Edge {
public:
    int src, dest, wt;
};

class DisjointSet {
public:
    int parent[100];

    // Initialize each node as parent of itself
    void makeSet(int n) {
        for (int i = 0; i < n; i++)
            parent[i] = i;
    }

    // Find parent (with path compression)
    int findParent(int node) {
        if (parent[node] == node)
            return node;
        return parent[node] = findParent(parent[node]);
    }

    // Union two sets
    void unionSet(int u, int v) {
        u = findParent(u);
        v = findParent(v);
        parent[v] = u;
    }
};

int main() {
    int V = 4; // number of vertices
    int E = 5; // number of edges

    Edge edges[] = {
        {0, 1, 10},
        {0, 2, 6},
        {0, 3, 5},
        {1, 3, 15},
        {2, 3, 4}
    };

    // Step 1: Sort edges by weight
    sort(edges, edges + E, [](Edge a, Edge b) {
        return a.wt < b.wt;
    });

    DisjointSet ds;
    ds.makeSet(V);

    vector<Edge> mst; // to store MST edges

    // Step 2: Pick edges one by one
    for (int i = 0; i < E; i++) {
        int u = ds.findParent(edges[i].src);
        int v = ds.findParent(edges[i].dest);

        if (u != v) {        // No cycle → include edge
            mst.push_back(edges[i]);
            ds.unionSet(u, v);
        }
    }

    // Print MST
    cout << "Edges in Minimum Spanning Tree:\n";
    int totalWeight = 0;

    for (auto e : mst) {
        cout << e.src << " -- " << e.dest << "  weight: " << e.wt << endl;
        totalWeight += e.wt;
    }

    cout << "Total Weight of MST = " << totalWeight << endl;

    return 0;
}
