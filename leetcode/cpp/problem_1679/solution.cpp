#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int, int> cache;
        int result = 0;
        for (int num : nums) {
            int target = k - num;
            if (cache[target]) {
                --cache[target];
                ++result;
            } else {
                ++cache[num];
            }
        }
        return result;
    }
};
