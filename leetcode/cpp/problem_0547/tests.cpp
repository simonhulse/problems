#include "solution.cpp"
#include <iostream>
#include <vector>

void run_test(vector<vector<int>>& isConnected, int expected) {
    Solution solution;
    if (solution.findCircleNum(isConnected) == expected) {
        std::cout << "TEST PASSED" << std::endl;
    } else {
        std::cout << "TEST FAILED" << std::endl;
    }
}

int main() {
    std::cout << "Running test 1..." << std::endl;
    std::vector<vector<int>> isConnected = {
        {1, 1, 0},
        {1, 1, 0},
        {0, 0, 1},
    };
    run_test(isConnected, 2);

    std::cout << "Running test 2..." << std::endl;
    isConnected = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1},
    };
    run_test(isConnected, 3);
}
