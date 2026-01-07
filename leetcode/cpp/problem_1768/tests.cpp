#include <iostream>
#include <string>
#include "solution.cpp"
using namespace std;

void run_test(string word1, string word2, string expected) {
    Solution solution;
    if (solution.mergeAlternately(word1, word2) == expected) {
        std::cout << "TEST PASSED" << std::endl;
    } else {
        std::cout << "TEST FAILED" << std::endl;
    }
}

int main() {
    std::cout << "Running test 1..." << std::endl;
    run_test("abc", "pqr", "apbqcr");
    std::cout << "Running test 2..." << std::endl;
    run_test("ab", "pqrs", "apbqrs");
    std::cout << "Running test 3..." << std::endl;
    run_test("abcd", "pq", "apbqcd");
    return 0;
}
