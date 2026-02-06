#include <functional>
#include <utility>
#include <vector>

using namespace std;

class Solution {
public:
    int minReorder(int n, vector<vector<int>>& connections) {

        vector<vector<pair<int, int>>> graph;
        for (int i = 0; i < n; i++) {
            graph.push_back({});
        }

        for (auto conn : connections) {
            int start = conn[0];
            int end = conn[1];
            graph[start].emplace_back(end, 1);
            graph[end].emplace_back(start, 0);
        }

        int nSwitches = 0;
        vector<bool> visited(n, false);

        function<void(int)> dfs = [&](int city) -> void {
            visited[city] = true;
            for (pair<int, int> road : graph[city]) {
                int joiningCity = road.first;
                int weight = road.second;
                if (!visited[joiningCity]) {
                    nSwitches += weight;
                    dfs(joiningCity);
                }
            }
        };

        dfs(0);
        return nSwitches;
    }
};
