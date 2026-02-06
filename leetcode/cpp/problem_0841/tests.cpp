#include "solution.cpp"
#include <iostream>
#include <vector>

void run_test(vector<vector<int>>& rooms, bool expected) {
    Solution solution;
    if (solution.canVisitAllRooms(rooms) == expected) {
        std::cout << "TEST PASSED" << std::endl;
    } else {
        std::cout << "TEST FAILED" << std::endl;
    }
}

int main() {
    std::cout << "Running test 1..." << std::endl;
    std::vector<vector<int>> rooms = {{1}, {2}, {3}, {}};
    run_test(rooms, true);

    std::cout << "Running test 2..." << std::endl;
    rooms = {{1, 3}, {3, 0, 1}, {2}, {0}};
    run_test(rooms, false);
}
