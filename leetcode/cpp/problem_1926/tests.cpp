#include <iostream>
#include <vector>
#include "solution.cpp"

void run_test(vector<vector<char>>& maze, vector<int>& entrance, int expected) {
    Solution solution;
    int result = solution.nearestExit(maze, entrance);
    if (result == expected) {
        std::cout << "TEST PASSED" << std::endl;
    } else {
        std::cout << "TEST FAILED" << std::endl;
    }
}

int main() {
    std::cout << "Running test 1..." << std::endl;
    vector<vector<char>> maze = {
        {'+', '+', '.', '+'},
        {'.', '.', '.', '+'},
        {'+', '+', '+', '.'}
    };
    vector<int> entrance = {1, 2};
    run_test(maze, entrance, 1);

    std::cout << "Running test 2..." << std::endl;
    maze = {
        {'+','+','+'},
        {'.','.','.'},
        {'+','+','+'}
    };
    entrance = {1,0};
    run_test(maze, entrance, 2);

    std::cout << "Running test 3..." << std::endl;
    maze = {{'.', '+'}};
    entrance = {0,0};
    run_test(maze, entrance, -1);

    std::cout << "Running test 4..." << std::endl;
    maze = {
        {'+', '.', '+', '+', '+', '+', '+'},
        {'+', '.', '+', '.', '.', '.', '+'},
        {'+', '.', '+', '.', '+', '.', '+'},
        {'+', '.', '.', '.', '+', '.', '+'},
        {'+', '+', '+', '+', '+', '.', '+'}
    };
    entrance = {0, 1};
    run_test(maze, entrance, 12);
}
