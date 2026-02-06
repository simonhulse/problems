#include "solution.cpp"
#include <cmath>
#include <iostream>
#include <vector>

void run_test(
    vector<vector<string>>& equations,
    vector<double>& values,
    vector<vector<string>>& queries,
    vector<double>& expected
) {
    Solution solution;
    if (solution.calcEquation(equations, values, queries) == expected) {
        std::cout << "TEST PASSED" << std::endl;
    } else {
        std::cout << "TEST FAILED" << std::endl;
    }
}

int main() {
    std::cout << "Running test 1..." << std::endl;
    vector<vector<string>> equations = {{"a", "b"}, {"b", "c"}};
    vector<double> values = {2.0, 3.0};
    vector<vector<string>> queries = {{"a", "c"}, {"b", "a"}, {"a", "e"}, {"a", "a"}, {"x", "x"}};
    vector<double> expected = {6.00000, 0.50000, -1.00000, 1.00000, -1.00000};
    run_test(equations, values, queries, expected);

    std::cout << "Running test 2..." << std::endl;
    equations = {{"a", "b"}, {"b", "c"}, {"bc", "cd"}};
    values = {1.5, 2.5, 5.0};
    queries = {{"a", "c"}, {"c", "b"}, {"bc", "cd"}, {"cd", "bc"}};
    expected = {3.75000, 0.40000, 5.00000, 0.20000};
    run_test(equations, values, queries, expected);

    std::cout << "Running test 3..." << std::endl;
    equations = {{"a", "b"}};
    values = {0.5};
    queries = {{"a", "b"}, {"b", "a"}, {"a", "c"}, {"x", "y"}};
    expected = {0.50000, 2.00000, -1.00000, -1.00000};
    run_test(equations, values, queries, expected);
}
