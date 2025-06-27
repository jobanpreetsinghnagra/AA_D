#include <bits/stdc++.h>
using namespace std;

class Graph {
private:
    unordered_map<int, vector<int>> adjList;

public:
    // Function to add an edge to the graph
    void addEdge(int u, int v, bool isDirected = false) {
        adjList[u].push_back(v);
        if (!isDirected) {
            adjList[v].push_back(u);
        }
    }

    // Function for Breadth First Search (BFS)
    void bfs(int startNode) {
        unordered_map<int, bool> visited;
        queue<int> q;

        q.push(startNode);
        visited[startNode] = true;

        cout << "BFS Traversal: ";
        while (!q.empty()) {
            int current = q.front();
            q.pop();
            cout << current << " ";

            for (int neighbor : adjList[current]) {
                if (!visited[neighbor]) {
                    q.push(neighbor);
                    visited[neighbor] = true;
                }
            }
        }
        cout << endl;
    }

    // Function for Depth First Search (DFS)
    void dfs(int startNode) {
        unordered_map<int, bool> visited;
        stack<int> s;

        s.push(startNode);

        cout << "DFS Traversal: ";
        while (!s.empty()) {
            int current = s.top();
            s.pop();

            if (!visited[current]) {
                visited[current] = true;
                cout << current << " ";

                // Push neighbors to the stack in reverse order to maintain proper traversal
                for (auto it = adjList[current].rbegin(); it != adjList[current].rend(); ++it) {
                    if (!visited[*it]) {
                        s.push(*it);
                    }
                }
            }
        }
        cout << endl;
    }

    // Utility to print the adjacency list
    void printGraph() {
        cout << "Graph adjacency list:" << endl;
        for (auto pair : adjList) {
            cout << pair.first << " -> ";
            for (int neighbor : pair.second) {
                cout << neighbor << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Graph g;

    // Adding edges
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 4);
    g.addEdge(2, 5);
    g.addEdge(3, 6);
    g.addEdge(3, 7);

    // Print the graph
    g.printGraph();

    // Perform BFS and DFS
    g.bfs(1);
    g.dfs(1);

    return 0;
}
