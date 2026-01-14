#include <iostream>
#include <string>
#include "solution.cpp"
using namespace std;

void run_test(string s, string expected) {
    Solution solution;
    if (solution.reverseWords(s) == expected) {
        std::cout << "TEST PASSED" << std::endl;
    } else {
        std::cout << "TEST FAILED" << std::endl;
    }
}

int main() {
    std::cout << "Running test 1..." << std::endl;
    run_test("the sky is blue", "blue is sky the");
    std::cout << "Running test 2..." << std::endl;
    run_test("  hello world  ", "world hello");
    std::cout << "Running test 3..." << std::endl;
    run_test("a good   example", "example good a");
    return 0;
}
