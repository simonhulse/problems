#ifndef LINKED_LIST_UTILS_H
#define LINKED_LIST_UTILS_H

#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode();
    ListNode(int x);
    ListNode(int x, ListNode *next);
};

ListNode* createLinkedList(const std::initializer_list<int>& values);
void printLinkedList(ListNode* head);
bool compareLinkedLists(ListNode* l1, ListNode* l2);
void deleteLinkedList(ListNode* head);

#endif // LINKED_LIST_UTILS_H
