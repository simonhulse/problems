#include <algorithm>
#include <climits>
#include <queue>
#include <vector>

class Solution {
public:
    long long maxScore(std::vector<int>& nums1, std::vector<int>& nums2, int k) {
        int n = nums1.size();
        std::vector<std::pair<int, int>> pairs(n);
        for (int i = 0; i < n; i++) {
            pairs[i] = {-nums2[i], nums1[i]};
        }
        std::sort(pairs.begin(), pairs.end());

        long long result = LLONG_MIN;
        long long curr = 0;
        std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;
        for (int i = 0; i < n; i++) {
            auto [num2, num1] = pairs[i];
            curr += num1;
            num2 *= -1;
            minHeap.push(num1);
            if (minHeap.size() == k) {
                result = std::max(result, num2 * curr);
                curr -= minHeap.top(); minHeap.pop();
            }
        }

        return result;
    }
};
