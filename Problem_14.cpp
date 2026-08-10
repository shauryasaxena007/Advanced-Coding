#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int V, E;

    cin >> V;
    cin >> E;

    // Graph
    vector<vector<pair<int, int>>> graph(V);

    // Input edges
    for (int i = 0; i < E; i++) {
        int u, v, w;
        cin >> u >> v >> w;

        graph[u].push_back({v, w});
    }

    int src;
    cin >> src;

    // Distance from source
    vector<int> dist(V, INT_MAX);

    // Visited array
    vector<bool> visited(V, false);

    dist[src] = 0;

    // Dijkstra
    for (int i = 0; i < V; i++) {

        int u = -1;

        // Find unvisited vertex with minimum distance
        for (int j = 0; j < V; j++) {
            if (!visited[j] &&
                (u == -1 || dist[j] < dist[u])) {
                u = j;
            }
        }

        if (u == -1 || dist[u] == INT_MAX)
            break;

        visited[u] = true;

        // Update neighbours
        for (auto edge : graph[u]) {
            int v = edge.first;
            int weight = edge.second;

            if (dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
            }
        }
    }

    // Print shortest distances
    for (int i = 0; i < V; i++) {
        if (dist[i] == INT_MAX)
            cout << -1 << " ";
        else
            cout << dist[i] << " ";
    }

    return 0;
}