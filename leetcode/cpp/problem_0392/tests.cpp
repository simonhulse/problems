#include <iostream>
#include "solution.cpp"
using namespace std;

void run_test(string s, string t, bool expected) {
    Solution solution;
    if (solution.isSubsequence(s, t) == expected) {
        std::cout << "TEST PASSED" << std::endl;
    } else {
        std::cout << "TEST FAILED" << std::endl;
    }
}

int main() {
    std::cout << "Running test 1..." << std::endl;
    run_test("abc", "ahbgdc", true);
    std::cout << "Running test 2..." << std::endl;
    run_test("axc", "ahbgdc", false);
    return 0;
}
