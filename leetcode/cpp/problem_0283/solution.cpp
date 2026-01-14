#include <vector>

using namespace std;

// This soltion is slow, becuse of the use of `erase`

// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         auto front = nums.begin();
//         auto back = nums.end() - 1;

//         while (front < back) {
//             if (*front == 0) {
//                 nums.erase(front);
//                 nums.push_back(0);
//                 back--;
//             } else {
//                 front++;
//             }
//         }
//     }
// };

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nonZeroTarget = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[nonZeroTarget]);
                nonZeroTarget++;
            }
        }
    }
};
