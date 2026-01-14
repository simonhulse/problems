#include <vector>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int nValues = nums.size();
        vector<int> result(nValues, 1);

        int prefix = 1;
        for (int i = 0; i < nValues; i++) {
            result[i] *= prefix;
            prefix *= nums[i];
        }

        int suffix = 1;
        for (int i = nValues - 1; i >= 0; i--) {
            result[i] *= suffix;
            suffix *= nums[i];
        }

        return result;
    }
};
