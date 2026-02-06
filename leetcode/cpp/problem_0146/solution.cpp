#include <unordered_map>

struct Node {
    int key;
    int value;
    Node* next;
    Node* prev;
    Node(int k, int v) : key(k), value(v), next(nullptr), prev(nullptr) {}
};

class LRUCache {
    int capacity;
    std::unordered_map<int, Node*> map;
    Node* head;
    Node* tail;

public:
    LRUCache(int capacity) : capacity(capacity) {
        head = new Node(-1, -1);
        tail = new Node(-1, -1);
        head->next = tail;
        tail->prev = head;
    }

    void remove(Node* node) {
        node->prev->next = node->prev->next->next;
        node->next->prev= node->next->prev->prev;
    }

    void putToFront(Node* node) {
        Node* oldFront = head->next;
        node->next = oldFront;
        node->prev = head;
        head->next = node;
        oldFront ->prev = node;
    }

    int get(int key) {
        if (map.find(key) == map.end()) return -1;
        Node* node = map[key];
        remove(node);
        putToFront(node);
        return node->value;
    }

    void put(int key, int value) {
        Node* node;
        if (map.find(key) == map.end()) {
            node = new Node(key, value);
            map[key] = node;
        } else {
            node = map[key];
            node->value = value;
            remove(node);
        }
        putToFront(node);

        if (map.size() > capacity) {
            Node* toRemove = tail->prev;
            map.erase(toRemove->key);
            remove(toRemove);
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
