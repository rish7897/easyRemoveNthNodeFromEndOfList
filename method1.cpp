#include<iostream>
using namespace std;

// Definition for singly-linked list
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* removeNthFromEnd(ListNode* head, int n) {
    int size = 0;
    ListNode* node = head;
    while(node != NULL){
        size++;
        node = node->next;
    }
    ListNode* curr = head;
    ListNode* prev = NULL;
    for(int i = 0; i < size - n; i++){
        prev = curr;
        curr = curr->next;
    }
    if(prev == NULL){
        head = curr->next;
    }else{
        prev->next = curr->next;
    }
    return head;
}