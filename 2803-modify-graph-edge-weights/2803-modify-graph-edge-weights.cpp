#include <vector>
#include <queue>
#include <limits>
#include <algorithm>

class Solution {
public:
    vector<vector<int>> modifiedGraphEdges(int n, vector<vector<int>>& edges, int source, int destination, int target) {
        vector<vector<pair<int, int>>> adjacency_list(n);
        for (int i = 0; i < edges.size(); ++i) {
            int nodeA = edges[i][0], nodeB = edges[i][1];
            adjacency_list[nodeA].emplace_back(nodeB, i);
            adjacency_list[nodeB].emplace_back(nodeA, i);
        }

        vector<vector<long long>> distances(n, vector<long long>(2, LLONG_MAX));
        distances[source][0] = distances[source][1] = 0;

        run_dijkstra(adjacency_list, edges, distances, source, 0, 0);
        long long difference = target - distances[destination][0];

        if (difference < 0) return {};

        run_dijkstra(adjacency_list, edges, distances, source, difference, 1);

        if (distances[destination][1] < target) return {};

        for (auto& edge : edges) {
            if (edge[2] == -1) edge[2] = 1;
        }

        return edges;
    }

private:
    void run_dijkstra(const vector<vector<pair<int, int>>>& adjacency_list, vector<vector<int>>& edges,
                      vector<vector<long long>>& distances, int source, long long difference, int run) {
        int n = adjacency_list.size();
        priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;
        pq.emplace(0, source);

        while (!pq.empty()) {
            auto [current_distance, current_node] = pq.top();
            pq.pop();

            if (current_distance > distances[current_node][run]) continue;

            for (const auto& [next_node, edge_index] : adjacency_list[current_node]) {
                long long weight = edges[edge_index][2];
                if (weight == -1) weight = 1;

                if (run == 1 && edges[edge_index][2] == -1) {
                    long long new_weight = difference + distances[next_node][0] - distances[current_node][1];
                    if (new_weight > weight) {
                        edges[edge_index][2] = weight = new_weight;
                    }
                }

                if (distances[next_node][run] > distances[current_node][run] + weight) {
                    distances[next_node][run] = distances[current_node][run] + weight;
                    pq.emplace(distances[next_node][run], next_node);
                }
            }
        }
    }
};