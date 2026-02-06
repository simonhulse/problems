#include "solution.cpp"
#include <iostream>
#include <vector>

void run_test(int n, vector<vector<int>>& connections, int expected) {
    Solution solution;
    if (solution.minReorder(n, connections) == expected) {
        std::cout << "TEST PASSED" << std::endl;
    } else {
        std::cout << "TEST FAILED" << std::endl;
    }
}

int main() {
    std::cout << "Running test 1..." << std::endl;
    std::vector<vector<int>> connections = {{0, 1}, {1, 3}, {2, 3}, {4, 0}, {4, 5}};
    run_test(6, connections, 3);

    std::cout << "Running test 2..." << std::endl;
    connections = {{1, 0}, {1, 2}, {3, 2}, {3, 4}};
    run_test(5, connections, 2);

    std::cout << "Running test 3..." << std::endl;
    connections = {{1, 0}, {2, 0}};
    run_test(3, connections, 0);
}
