#include <string>

using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sPtr = 0;
        int tPtr = 0;

        while (sPtr < s.size() && tPtr < t.size()) {
            if (s[sPtr] == t[tPtr]) sPtr++;
            tPtr++;
        }
        return sPtr == s.size();
    }
};
