#include <iostream>
#include <vector>
#include "solution.cpp"
using namespace std;

void run_test(vector<int> flowerbed, int n, bool expected) {
    Solution solution;
    if (solution.canPlaceFlowers(flowerbed, n) == expected) {
        std::cout << "TEST PASSED" << std::endl;
    } else {
        std::cout << "TEST FAILED" << std::endl;
    }
}

int main() {
    std::cout << "Running test 1..." << std::endl;
    run_test({1, 0, 0, 0, 1}, 1, true);
    std::cout << "Running test 2..." << std::endl;
    run_test({1, 0, 0, 0, 1}, 2, false);
    return 0;
}
