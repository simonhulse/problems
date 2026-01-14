#include <iostream>
#include <string>
#include "solution.cpp"
using namespace std;

void run_test(string s, string expected) {
    Solution solution;
    if (solution.reverseVowels(s) == expected) {
        std::cout << "TEST PASSED" << std::endl;
    } else {
        std::cout << "TEST FAILED" << std::endl;
    }
}

int main() {
    std::cout << "Running test 1..." << std::endl;
    run_test("IceCreAm", "AceCreIm");
    std::cout << "Running test 2..." << std::endl;
    run_test("leetcode", "leotcede");
    return 0;
}
