#include <cassert>
#include <set>

class SmallestInfiniteSet {
private:
    std::set<int> addedBack;
    int curr;

public:
    SmallestInfiniteSet() : curr(1) {}

    int popSmallest() {
        int result;
        if (addedBack.empty()) {
            result = curr;
            curr++;
        } else {
            result = *addedBack.begin();
            addedBack.erase(result);
        }
        return result;
    }

    void addBack(int num) {
        if (num >= curr) return;
        addedBack.insert(num);
    }
};

int main() {
    SmallestInfiniteSet* obj = new SmallestInfiniteSet();
    obj->addBack(2);
    assert(obj->popSmallest() == 1);
    assert(obj->popSmallest() == 2);
    assert(obj->popSmallest() == 3);
    obj->addBack(1);
    assert(obj->popSmallest() == 1);
    assert(obj->popSmallest() == 4);
    assert(obj->popSmallest() == 5);
}
