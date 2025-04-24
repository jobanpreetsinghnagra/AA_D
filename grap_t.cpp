#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Adjacency list to represent the graph. '5' represents the number of vertices.
vector<int> adj[5]; // adjacency list
bool visited[5];  // visited array to track if a vertex has been visited

// Function to add an undirected edge between vertices u and v
void addEdge(int u, int v) {
    adj[u].push_back(v); // Add v to u's list of neighbors
    adj[v].push_back(u); // Add u to v's list of neighbors (undirected graph)
}

// Function to perform BFS (Breadth-First Search) starting from 'start' vertex
void BFS(int start) {
    queue<int> q;          // Queue to store the nodes to be visited in BFS order
    q.push(start);         // Start with the 'start' node and push it to the queue
    visited[start] = true; // Mark the starting node as visited

    cout << "BFS: ";       // Output the label for BFS traversal
    while (!q.empty()) {   // Continue until there are no more nodes in the queue
        int node = q.front(); // Get the front node of the queue
        q.pop();               // Remove the node from the queue
        cout << node << " ";   // Print the current node

        // Visit all the neighbors of the current node
        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {  // If the neighbor hasn't been visited
                visited[neighbor] = true; // Mark the neighbor as visited
                q.push(neighbor);         // Push the neighbor into the queue
            }
        }
    }
    cout << endl; // End of BFS traversal output
}

// Function to perform DFS (Depth-First Search) starting from 'node' vertex
void DFS(int node) {
    if (visited[node]) return; // If the node has already been visited, return
    visited[node] = true;      // Mark the current node as visited
    cout << node << " ";       // Print the current node

    // Recursively visit all unvisited neighbors of the current node
    for (int neighbor : adj[node]) {
        DFS(neighbor); // Recursively call DFS for each neighbor
    }
}

int main() {
    // Add edges to the graph. This creates the following graph structure:
    //     0
    //    / \
    //   1   2
    //  / \
    // 3   4
    addEdge(0, 1); // Add edge between 0 and 1
    addEdge(0, 2); // Add edge between 0 and 2
    addEdge(1, 3); // Add edge between 1 and 3
    addEdge(1, 4); // Add edge between 1 and 4

    // Reset the visited array to false before running BFS
    fill(begin(visited), end(visited), false); 
    BFS(0);  // Perform BFS starting from vertex 0

    // Reset the visited array to false before running DFS
    fill(begin(visited), end(visited), false);
    cout << "DFS: ";  // Output the label for DFS traversal
    DFS(0);  // Perform DFS starting from vertex 0

    return 0; // End of program
}
