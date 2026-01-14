#include <string>
#include <iostream>
#include <deque>

using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        deque<string> words;
        string curr;
        for (char c : s) {
            if (c != ' ') curr.push_back(c);
            else {
                if (!curr.empty()) {
                    words.push_front(curr);
                    curr.clear();
                }
            }
        }
        if (!curr.empty()) words.push_front(curr);

        string result;
        result.reserve(s.length());
        int nWords = words.size();
        for (int i = 0; i < nWords; i++) {
            result.append(words[i]);
            if (i != nWords - 1) result.append(" ");
        }
        cout << result << endl;
        return result;
    }
};
