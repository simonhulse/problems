#include <iostream>
#include "solution.cpp"
using namespace std;

void run_test(vector<int> height, int expected) {
    Solution solution;
    if (solution.maxArea(height) == expected) {
        std::cout << "TEST PASSED" << std::endl;
    } else {
        std::cout << "TEST FAILED" << std::endl;
    }
}

int main() {
    std::cout << "Running test 1..." << std::endl;
    run_test({1, 8, 6, 2, 5, 4, 8, 3, 7}, 49);
    std::cout << "Running test 2..." << std::endl;
    run_test({1, 1}, 1);
    return 0;
}
