#include <iostream>
#include "solution.cpp"
using namespace std;

void run_test(vector<char> chars, int expected) {
    Solution solution;
    if (solution.compress(chars) == expected) {
        std::cout << "TEST PASSED" << std::endl;
    } else {
        std::cout << "TEST FAILED" << std::endl;
    }
}

int main() {
    std::cout << "Running test 1..." << std::endl;
    vector<char> input1 = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    vector<char>& input1Ref = input1;
    run_test(input1Ref, 6);
    for (char c : input1) {
        cout << c << " ";
    }
    cout << endl;

    std::cout << "Running test 2..." << std::endl;
    vector<char> input2 = {'a'};
    run_test(input2, 1);
    for (char c : input2) {
        cout << c << " ";
    }
    cout << endl;

    std::cout << "Running test 3..." << std::endl;
    vector<char> input3 = {'a', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b'};
    run_test(input3, 4);
    for (char c : input3) {
        cout << c << " ";
    }
    cout << endl;

    std::cout << "Running test 4..." << std::endl;
    vector<char> input4 = {'a','a','a','b','b','a','a'};
    run_test(input4, 6);
    for (char c : input4) {
        cout << c << " ";
    }
    cout << endl;
    return 0;
}
