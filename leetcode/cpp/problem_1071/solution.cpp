#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

class Solution {
    public:
        string gcdOfStrings(string str1, string str2) {
            int str1_len = str1.length();
            int str2_len = str2.length();

            for (int i = min(str1_len, str2_len); i > 0; i--) {
                // Check `i` is a common divisor.
                if (!(str1_len % i == 0 && str2_len % i == 0)) continue;

                // Take substring from `str1`, with length `i`.
                string unit = str1.substr(0, i);

                bool valid = true;
                // Check each non-overlapping length-`i` substring of `str1`
                // matches the first substring.
                for (int j = 1; j < str1_len / i; j++) {
                    if (unit != str1.substr(j * i, i)) {
                        valid = false;
                        break;
                    }
                }
                if (!valid) continue;

                // Same thing for `str2`
                for (int j = 0; j < str2_len / i; j++) {
                    if (unit != str2.substr(j * i, i)) {
                        valid = false;
                        break;
                    }
                }

                if (valid) return unit;
            }
            return "";
        }
};
