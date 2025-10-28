#include<iostream>
#include<vector>
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
    vector<ListNode*> listNodes;
    ListNode* node = head;
    
    while(node != NULL){
        size++;
        listNodes.push_back(node);
        node = node->next;
    }
    
    if(size - n == 0){
        head = listNodes[size - n]->next;
    }else{
        listNodes[size - n - 1]->next = listNodes[size - n]->next;
    }
    return head;
}