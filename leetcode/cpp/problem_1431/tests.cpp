#include <iostream>
#include "solution.cpp"
using namespace std;

void run_test(vector<int> candies, int extraCandies, vector<bool> expected) {
    Solution solution;
    if (solution.kidsWithCandies(candies, extraCandies) == expected) {
        std::cout << "TEST PASSED" << std::endl;
    } else {
        std::cout << "TEST FAILED" << std::endl;
    }
}

int main() {
    std::cout << "Running test 1..." << std::endl;
    run_test({2, 3, 5, 1, 3}, 3, {true, true, true, false, true});
    std::cout << "Running test 2..." << std::endl;
    run_test({4, 2, 1, 1, 2}, 1, {true, false, false, false, false});
    std::cout << "Running test 3..." << std::endl;
    run_test({12, 1, 12}, 10, {true, false, true});
    return 0;
}
