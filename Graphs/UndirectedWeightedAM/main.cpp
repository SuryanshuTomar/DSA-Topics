// Undirected Weighted Adjacency Matrix

#include <iostream>
#include <vector>

using namespace std;

int main() {
  // Take the total number of vertices and edges present in the graph.
  int vertex, edges;
  cin >> vertex >> edges;

  // Declare the Adjacency Matrix.
  vector<vector<int>> AdjMatrix(vertex, vector<int>(vertex, 0));

  // Take the input for the edges, i.e.- which nodes are connected to each other
  // making an edge.
  int u,
      v; // Here u and v denotes the starting and ending vertices of the edge.
  int weight;

  for (int i = 0; i < edges; i++) {
    cin >> u >> v >> weight;

    // Store the edges info in the Adjacency Matrix
    // Since, this is an weighted and undirected graph, we need to store the
    // edge info with weight from both sides of nodes.
    AdjMatrix[u][v] = weight;
    AdjMatrix[v][u] = weight;
  }

  // Now, displaye the Adjacency Matrix.
  for (int i = 0; i < vertex; i++) {
    for (int j = 0; j < vertex; j++) {
      cout << AdjMatrix[i][j] << " ";
    }
    cout << endl;
  }
}

// Input -
// vertices and edges = 5 6

// edges info
// 0 1 3
// 0 2 4
// 1 2 5
// 1 3 2
// 2 4 6 
// 3 4 7

// Output -
// 0 3 4 0 0 
// 3 0 5 2 0 
// 4 5 0 0 6 
// 0 2 0 0 7 
// 0 0 6 7 0 
