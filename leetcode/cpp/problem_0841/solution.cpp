#include <functional>
#include <vector>

using namespace std;

class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        if (rooms.empty()) return true;

        int nRooms = rooms.size();
        vector<bool> visited(nRooms, false);
        int nVisited = 0;

        function<void(int)> dfs = [&](int room) {
            nVisited++;
            visited[room] = true;
            for (int adjacentRoom : rooms[room]) {
                if (!visited[adjacentRoom]) {
                    dfs(adjacentRoom);
                }
            }
        };

        dfs(0);

        return nVisited == nRooms;
    }
};
