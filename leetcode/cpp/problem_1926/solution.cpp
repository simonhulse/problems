#include <queue>
#include <utility>
#include <vector>

using namespace std;

class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int right = maze[0].size() - 1;
        int bottom = maze.size() - 1;
        const vector<pair<int, int>> diffs = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

        queue<pair<int, int>> q;
        q.emplace(entrance[0], entrance[1]);

        maze[entrance[0]][entrance[1]] = '+';

        for (int nSteps = 1; !q.empty(); nSteps++) {
            int qSize = q.size();
            for (int i = 0; i < qSize; i++) {
                auto[row, col] = q.front(); q.pop();

                // Look at above
                for (auto [rowDiff, colDiff] : diffs) {
                    int propRow = row + rowDiff;
                    int propCol = col + colDiff;

                    if (
                         propRow >= 0 && propRow <= bottom &&
                         propCol >= 0 && propCol <= right &&
                         maze[propRow][propCol] == '.'
                    ) {
                        maze[propRow][propCol] = '+';
                        if (
                            propRow == 0 ||
                            propRow == bottom ||
                            propCol == 0 ||
                            propCol == right
                        ) return nSteps;
                        q.emplace(propRow, propCol);
                    }
                }
            }
        }
        return -1;
    }
};
