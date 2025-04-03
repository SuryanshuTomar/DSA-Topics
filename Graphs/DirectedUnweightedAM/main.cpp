// Directed Unweighted Adjacency Matrix

#include <iostream>
#include <vector>

using namespace std;

int main() {
  // Take the total number of vertices and edges present in the graph.
  int vertex, edges;
  cin >> vertex >> edges;

  // Declare the Adjacency Matrix.
  vector<vector<bool>> AdjMatrix(vertex, vector<bool>(vertex, 0));

  // Take the input for the edges, i.e.- which nodes are connected to each other
  // making an edge.
  int u,
      v; // Here u and v denotes the starting and ending vertices of the edge.

  for (int i = 0; i < edges; i++) {
    cin >> u >> v;

    // Store the edges info in the Adjacency Matrix
    // Since, this is an unweighted and undirected graph, we need to store the
    // edge info from both sides of nodes.
    AdjMatrix[u][v] = 1;
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
// 0 1
// 0 2
// 1 2
// 3 1
// 4 3
// 2 4

// Output -
// 0 1 1 0 0 
// 0 0 1 0 0 
// 0 0 0 0 1 
// 0 1 0 0 0 
// 0 0 0 1 0 
