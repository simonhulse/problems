#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        if (chars.size() == 1) return 1;

        int back = 0;
        int front = 1;
        char curr = chars[0];
        int length = 0;

        while (front <= chars.size()) {
            char c;
            if (front == chars.size()) c = '\0';
            else c = chars[front];

            if (c == curr) front++;
            else {
                string toAdd = string(1, curr);
                int blockSize = front - back;
                if (blockSize > 1) {
                    toAdd.append(to_string(blockSize));
                }
                int jump = toAdd.length();
                length += jump;
                auto writeStart = chars.begin() + back;
                auto writeEnd = writeStart + blockSize;
                chars.erase(writeStart, writeEnd);
                chars.insert(writeStart, toAdd.begin(), toAdd.end());
                back += jump;
                front = back + 1;
            }
            curr = c;
        }
        return length;
    }
};
