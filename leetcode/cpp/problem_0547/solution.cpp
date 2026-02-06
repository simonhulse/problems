#include <functional>
#include <vector>

using namespace std;

class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int nCities = isConnected.size();
        vector<bool> visited(nCities, false);

        function<void(int)> dfs = [&](int city) {
            visited[city] = true;
            for (int i = 0; i < nCities; i++) {
                if (isConnected[city][i] && !visited[i]) {
                    dfs(i);
                }
            }
        };

        int nProvinces = 0;
        for (int city = 0; city < nCities; city++) {
            if (!visited[city]) {
                dfs(city);
                nProvinces++;
            }
        }

        return nProvinces;
    }
};
