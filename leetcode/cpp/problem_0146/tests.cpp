#include <iostream>
#include "solution.cpp"
using namespace std;

int main() {
    std::cout << "Running test 1..." << std::endl;
    LRUCache* lRUCache = new LRUCache(2);
    lRUCache->put(1, 1);
    lRUCache->put(2, 2);
    cout << lRUCache->get(1) << endl;
    lRUCache->put(3, 3);
    cout << lRUCache->get(2) << endl;
    lRUCache->put(4, 4);
    cout << lRUCache->get(1) << endl;
    cout << lRUCache->get(3) << endl;
    cout << lRUCache->get(4) << endl;

    std::cout << "Running test 2..." << std::endl;
    lRUCache = new LRUCache(2);
    lRUCache->put(2, 1);
    lRUCache->put(1, 1);
    lRUCache->put(2, 3);
    lRUCache->put(4, 1);
    lRUCache->get(1);
    lRUCache->get(2);
}
