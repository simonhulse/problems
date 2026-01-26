#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Trie {
private:
    vector<Trie*> children;
    bool isEnd;

public:

    Trie() : children(26), isEnd(false) {}

    void insert(string word) {
        Trie *node = this;
        for (char c : word) {
            int index = c - 97;
            if (!node->children[index]) {
                node->children[index] = new Trie();
            }
            node = node->children[index];
        }
        node->isEnd = true;
    }

    bool search(string word) {
        Trie *node = this;
        for (char c : word) {
            int index = c - 97;
            if (!node->children[index]) {
                return false;
            }
            node = node->children[index];
        }
        return node->isEnd;
    }

    bool startsWith(string prefix) {
        Trie *node = this;
        for (char c : prefix) {
            int index = c - 97;
            if (!node->children[index]) {
                return false;
            }
            node = node->children[index];
        }
        return true;
    }
};

int main() {
    Trie* trie = new Trie();
    trie->insert("hello");
    trie->insert("hiya");
    trie->insert("hell");
    trie->insert("bye");
    std::cout << trie->search("hello") << std::endl;
    std::cout << trie->search("hiya") << std::endl;
    std::cout << trie->search("hella") << std::endl;
    std::cout << trie->startsWith("he") << std::endl;
    std::cout << trie->startsWith("hel") << std::endl;
    std::cout << trie->startsWith("bey") << std::endl;
}
