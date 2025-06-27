#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void bfs(int **adj, int n, int start, vector<bool> &visited) {
    queue<int> q;
    q.push(start);
    visited[start] = true;
    cout << "BFS reachable nodes: ";
    while (!q.empty()) {
        int u = q.front(); q.pop();
        cout << u << " ";
        for (int v = 0; v < n; v++) {
            if (adj[u][v] && !visited[v]) {
                visited[v] = true;
                q.push(v);
            }
        }
    }
    cout << endl;
}

void dfs(int **adj, int n, int u, vector<bool> &visited) {
    visited[u] = true;
    for (int v = 0; v < n; v++) {
        if (adj[u][v] && !visited[v])
            dfs(adj, n, v, visited);
    }
}

bool isConnected(int **adj, int n) {
    vector<bool> visited(n, false);
    dfs(adj, n, 0, visited);
    for (int i = 0; i < n; i++)
        if (!visited[i]) return false;
    return true;
}

int main() {
    int n;
    cout << "Enter number of cities: ";
    cin >> n;
    int **adj = new int*[n];
    for (int i = 0; i < n; i++) adj[i] = new int[n];
    cout << "Enter adjacency matrix (0/1):\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> adj[i][j];
    int start;
    cout << "Enter starting node for BFS: ";
    cin >> start;
    vector<bool> visited(n, false);
    bfs(adj, n, start, visited);
    if (isConnected(adj, n))
        cout << "Graph is connected (DFS).\n";
    else
        cout << "Graph is not connected (DFS).\n";
    for (int i = 0; i < n; i++) delete[] adj[i];
    delete[] adj;
    return 0;
} 