#include <queue>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>

using namespace std;

class Solution {
public:
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {

        unordered_map<string, unordered_map<string, double>> graph;
        int nExamples = equations.size();
        for (int i = 0; i < nExamples; i++) {
            string numerator = equations[i][0];
            string denominator = equations[i][1];
            double numOverDenom = values[i];
            graph[numerator][denominator] = numOverDenom;
            graph[denominator][numerator] = 1.0 / numOverDenom;
        }

        vector<double> results;
        for (auto query : queries) {
            string numerator = query[0];
            string denominator = query[1];
            results.push_back(calc(numerator, denominator, graph));
        }

        return results;
    }

    double calc(
        const string& num,
        const string& denom,
        const unordered_map<string, unordered_map<string, double>>& graph
    ) {
        if (graph.find(num) == graph.end() || graph.find(denom) == graph.end()) return -1.0;

        double currValue = 1.0;
        unordered_map<string, bool> visited;
        for (auto it = graph.begin(); it != graph.end(); it++) {
            visited[it->first] = false;
        }

        queue<pair<string, double>> q;
        q.push({num, 1.0});
        bool foundDenom = false;
        double currVal = 1.0;

        while (!q.empty()) {
            pair currState = q.front(); q.pop();
            string currVar = currState.first;
            currVal = currState.second;
            visited[currVar] = true;
            if (currVar == denom) {
                foundDenom = true;
                break;
            }
            auto node = graph.at(currVar);
            for (auto it = node.begin(); it != node.end(); it++) {
                string vertex = it->first;
                if (!visited.at(vertex)) {
                    q.push({vertex, currVal * it->second});
                }
            }

        }

        if (foundDenom) {
            return currVal;
        } else {
            return -1.0;
        }
    }
};
