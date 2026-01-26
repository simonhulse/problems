#include <algorithm>
#include <string>
#include <vector>

using namespace std;

struct Trie {
private:
    vector<Trie*> children;
    vector<int> productIds;

public:
    Trie() : children(26) {}

    void insert(string word, int productId) {
        Trie* node = this;
        for (char c : word) {
            int index = c - 97;
            if (!node->children[index]) node->children[index] = new Trie();
            node = node->children[index];
            node->productIds.push_back(productId);
        }
    }

    vector<vector<string>> search(vector<string>& products, string searchWord) {
        Trie *node = this;
        vector<vector<string>> results;
        for (int i = 0; i < searchWord.length(); i++) {
            results.push_back({});
        }

        for (int i = 0; i < searchWord.length(); i++) {
            char c = searchWord.at(i);
            int index = c - 97;
            node = node->children[index];
            if (!node) break;
            vector<int> ids = node->productIds;
            vector<string>& result = results[i];

            for (int i = 0; i < ids.size() && i < 3; i++) {
                result.push_back(products[ids[i]]);
            }
        }
        return results;
    }
};

class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        sort(products.begin(), products.end());
        Trie *trie = new Trie();
        for (int i = 0; i < products.size(); i++) {
            trie->insert(products[i], i);
        }
        auto result = trie->search(products, searchWord);
        return result;
    }
};
