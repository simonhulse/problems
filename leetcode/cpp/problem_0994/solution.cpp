#include <queue>
#include <utility>
#include <vector>

using namespace std;

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        const int nRows = grid.size();
        const int nCols = grid[0].size();
        const vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

        queue<pair<int, int>> q;
        int freshRemaining = 0;
        for (int i = 0; i < nRows; i++) {
            for (int j = 0; j < nCols; j++) {
                int val = grid[i][j];
                if (val == 2) q.emplace(i, j);
                else if (val == 1) freshRemaining++;
            }
        }

        if (freshRemaining == 0) return 0;

        int minutes = 0;
        while (!q.empty()) {
            int n = q.size();
            for (int i = 0; i < n; i++) {
                auto [x, y] = q.front(); q.pop();
                for (auto [deltaX, deltaY] : directions) {
                    int newX = x + deltaX;
                    int newY = y + deltaY;
                    if (newX < 0 || newX >= nRows || newY < 0 || newY >= nCols) continue;
                    if (grid[newX][newY] == 1) {
                        q.emplace(newX, newY);
                        grid[newX][newY] = 2;
                        freshRemaining--;
                    }
                }
            }
            if (!q.empty()) minutes++;
        }
        return (freshRemaining == 0) ? minutes : -1;
    }
};
