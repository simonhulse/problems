#include <cmath>
#include <string>

using namespace std;

class Solution {
    public:
        string reverseVowels(string s) {
            int left = 0;
            int right = s.length() - 1;

            while (left < right) {
                char leftChar = s[left];
                char rightChar = s[right];

                bool leftIsVowel = isVowel(leftChar);
                bool rightIsVowel = isVowel(rightChar);

                if (leftIsVowel && rightIsVowel) {
                    char tmp = leftChar;
                    s[left] = rightChar;
                    s[right] = leftChar;
                    left++;
                    right--;
                }

                else {
                    if (!leftIsVowel) left++;
                    if (!rightIsVowel) right--;
                }
            }

            return s;
        }

    private:
        bool isVowel(char c) {
            return (
                c == 'a' ||
                c == 'e' ||
                c == 'i' ||
                c == 'o' ||
                c == 'u' ||
                c == 'A' ||
                c == 'E' ||
                c == 'I' ||
                c == 'O' ||
                c == 'U'
            );
        }
};
