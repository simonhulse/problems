#include "solution.cpp"
#include <iostream>
#include <string>
#include <vector>

using vs = std::vector<std::string>;
using vvs = std::vector<std::vector<std::string>>;

void run_test(vs& products, string searchWord, vvs& expected) {
    Solution solution;
    vvs result = solution.suggestedProducts(products, searchWord);
    if (result == expected) {
        std::cout << "TEST PASSED" << std::endl;
    } else {
        std::cout << "TEST FAILED" << std::endl;
    }
}

int main() {
    std::cout << "Running test 1..." << std::endl;
    vs products = {"mobile", "mouse", "moneypot", "monitor", "mousepad"};
    string searchWord = "mouse";
    vvs expected = {
        {"mobile", "moneypot", "monitor"},
        {"mobile", "moneypot", "monitor"},
        {"mouse", "mousepad"},
        {"mouse", "mousepad"},
        {"mouse",  "mousepad"}
    };
    run_test(products, searchWord, expected);

    std::cout << "Running test 2..." << std::endl;
    products = {"havana"};
    searchWord = "havana";
    expected = {{"havana"}, {"havana"}, {"havana"}, {"havana"}, {"havana"}, {"havana"}};
    run_test(products, searchWord, expected);

    std::cout << "Running test 3..." << std::endl;
    products = {"havana"};
    searchWord = "tatiana";
    expected = {{}, {}, {}, {}, {}, {}, {}};
    run_test(products, searchWord, expected);
}
