#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        // We are guaranteed that length of the vector will always between 2
        // and 100, so not need to check for an empty vector before
        // dereferencing
        int nChildren = candies.size();
        int maxCandies = *max_element(candies.begin(), candies.end());
        int minForTrue = maxCandies - extraCandies;
        vector<bool> result;
        result.reserve(nChildren);
        for (int i = 0; i < nChildren; i++) {
            if (candies[i] >= minForTrue) result.push_back(true);
            else result.push_back(false);
        }

        return result;
    }
};
