#include "linked_list_utils.h"

ListNode::ListNode() : val(0), next(nullptr) {}
ListNode::ListNode(int x) : val(x), next(nullptr) {}
ListNode::ListNode(int x, ListNode *next) : val(x), next(next) {}

// Function to create a linked list from an array of values
ListNode* createLinkedList(const std::initializer_list<int>& values) {
    ListNode *head = nullptr, *tail = nullptr;
    for (int val : values) {
        ListNode *newNode = new ListNode(val);
        if (!head) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    return head;
}

// Function to print the linked list
void printLinkedList(ListNode* head) {
    ListNode *current = head;
    while (current) {
        std::cout << current->val << " -> ";
        current = current->next;
    }
    std::cout << "nullptr" << std::endl;
}

// Function to compare two linked lists for equality
bool compareLinkedLists(ListNode* l1, ListNode* l2) {
    while (l1 && l2) {
        if (l1->val != l2->val) {
            return false;
        }
        l1 = l1->next;
        l2 = l2->next;
    }
    return (l1 == nullptr && l2 == nullptr);
}

// Function to delete a linked list to free memory
void deleteLinkedList(ListNode* head) {
    while (head) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }
}
