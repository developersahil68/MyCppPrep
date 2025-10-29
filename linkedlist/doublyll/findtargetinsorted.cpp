#include<iostream>
#include<vector>

using namespace std;


class ListNode {
public:
    int val;
    ListNode* next;
    ListNode* prev; 

    ListNode(int value) : val(value), next(nullptr), prev(nullptr) {}

    ~ListNode() {
        delete next;
    }
};


class Solution {
public:

    ListNode* findTail(ListNode* head){
        ListNode* tail = head;
        while(tail->next != NULL) {
            tail = tail->next;
        }
        return tail;
    }

    vector<vector<int>> findPairsWithGivenSum(ListNode* head, int target) {
        vector<vector<int , int>> ans;

        if(head == NULL) return ans;
        ListNode * left = head;
        ListNode * right = findTail(head);

        while(left->val < right->val) {
            if(left->val + right->val == target){
              ans.push_back({left->val , right->val});
              left = left->next;
              right = right->prev;
            }else if(left->val + right->val < target){
                left = left->next;
            }else{
                right = right->prev;
            }
        }
        return ans;

    }
};