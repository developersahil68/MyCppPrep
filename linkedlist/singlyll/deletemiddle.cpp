#include<iostream>

  struct ListNode {
      int val;
     ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {

        if (head == nullptr || head->next == nullptr) {
            return nullptr;
        }

        ListNode *temp = head;
        int n = 0;
        while(temp != NULL){
            n++;
            temp = temp->next;
        }
        int predecessor_index = (n / 2) - 1;

       ListNode * temp2 = head;
        for(int i = 0; i< predecessor_index ; i++) {
            temp2 = temp2->next ;
        }
        temp2->next = temp2->next->next;

        return head;
    }
};