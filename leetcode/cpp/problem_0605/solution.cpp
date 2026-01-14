#include <vector>

using namespace std;

class Solution {
    public:
        bool canPlaceFlowers(vector<int>& flowerbed, int n) {
            bool prev;
            bool curr;
            bool next;
            int size = flowerbed.size();

            int count = 0;

            for (int i = 0; i < size; i++) {
                if (i == 0) {
                    prev = 0;
                    curr = flowerbed[0];
                } else {
                    curr = next;
                }

                if (i == size - 1) {
                    next = 0;
                } else {
                    next = flowerbed[i + 1];
                }

                if (!prev && !curr && !next) {
                    count++;
                    prev = 1;
                } else {
                    prev = curr;
                }
            }

            return count >= n;
        }
};
