#include <iostream>
#include <vector>
#include "solution.cpp"

void run_test(vector<vector<int>>& grid, int expected) {
    Solution solution;
    int result = solution.orangesRotting(grid);
    if (result == expected) {
        std::cout << "TEST PASSED" << std::endl;
    } else {
        std::cout << "TEST FAILED" << std::endl;
    }
}

int main() {
    std::cout << "Running test 1..." << std::endl;
    vector<vector<int>> grid = {{2 ,1 ,1} ,{1 ,1 ,0} ,{0 ,1 ,1}};
    run_test(grid, 4);

    std::cout << "Running test 2..." << std::endl;
    grid = {{2 ,1 ,1} ,{0 ,1 ,1} ,{1 ,0 ,1}};
    run_test(grid, -1);

    std::cout << "Running test 3..." << std::endl;
    grid = {{0, 2}};
    run_test(grid, 0);

    std::cout << "Running test 4..." << std::endl;
    grid = {{2 ,1 ,1} ,{1 ,1 ,1} ,{0 ,1 ,2}};
    run_test(grid, 2);
}
