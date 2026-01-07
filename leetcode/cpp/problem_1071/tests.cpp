#include <iostream>
#include <string>
#include "solution.cpp"
using namespace std;

void run_test(string str1, string str2, string expected) {
    Solution solution;
    if (solution.gcdOfStrings(str1, str2) == expected) {
        std::cout << "TEST PASSED" << std::endl;
    } else {
        std::cout << "TEST FAILED" << std::endl;
    }
}

int main() {
    std::cout << "Running test 1..." << std::endl;
    run_test("ABCABC", "ABC", "ABC");
    std::cout << "Running test 2..." << std::endl;
    run_test("ABABAB", "ABAB", "AB");
    std::cout << "Running test 3..." << std::endl;
    run_test("LEET", "CODE", "");
    std::cout << "Running test 4..." << std::endl;
    run_test("AAAAAB", "A", "");
    return 0;
}
