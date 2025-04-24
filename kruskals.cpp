#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Edge {
    int src, dest, weight;
};

bool compare(Edge a, Edge b) {
    return a.weight < b.weight;
}

int findParent(int v, vector<int>& parent) {
    if (parent[v] != v)
        parent[v] = findParent(parent[v], parent);
    return parent[v];
}

void unionSet(int u, int v, vector<int>& parent) {
    int pu = findParent(u, parent);
    int pv = findParent(v, parent);
    parent[pu] = pv;
}

void kruskalMST(int V, vector<Edge>& edges) {
    sort(edges.begin(), edges.end(), compare);

    vector<int> parent(V);
    for (int i = 0; i < V; i++)
        parent[i] = i;

    cout << "Edge \tWeight\n";
    int totalWeight = 0;
    for (auto edge : edges) {
        if (findParent(edge.src, parent) != findParent(edge.dest, parent)) {
            cout << edge.src << " - " << edge.dest << "\t" << edge.weight << endl;
            totalWeight += edge.weight;
            unionSet(edge.src, edge.dest, parent);
        }
    }

    cout << "Total weight of MST: " << totalWeight << endl;
}

int main() {
    int V = 4;
    vector<Edge> edges = {
        {0, 1, 10},
        {0, 2, 6},
        {0, 3, 5},
        {1, 3, 15},
        {2, 3, 4}
    };

    kruskalMST(V, edges);

    return 0;
}
