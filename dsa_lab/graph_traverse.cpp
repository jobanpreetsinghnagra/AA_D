#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void bfs(const vector<vector<int>>& adj, int start, vector<bool>& visited) {
    queue<int> q;
    q.push(start);
    visited[start] = true;
    cout << "BFS: ";
    while (!q.empty()) {
        int u = q.front(); q.pop();
        cout << u << " ";
        for (int v : adj[u]) {
            if (!visited[v]) {
                visited[v] = true;
                q.push(v);
            }
        }
    }
    cout << endl;
}

void dfs(const vector<vector<int>>& adj, int u, vector<bool>& visited) {
    visited[u] = true;
    cout << u << " ";
    for (int v : adj[u]) {
        if (!visited[v])
            dfs(adj, v, visited);
    }
}

int main() {
    int n, e;
    cout << "Enter number of vertices and edges: ";
    cin >> n >> e;
    vector<vector<int>> adj(n);
    cout << "Enter edges (u v):\n";
    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); // For undirected graph
    }
    int start;
    cout << "Enter starting node: ";
    cin >> start;
    vector<bool> visited(n, false);
    bfs(adj, start, visited);
    fill(visited.begin(), visited.end(), false);
    cout << "DFS: ";
    dfs(adj, start, visited);
    cout << endl;
    return 0;
} 