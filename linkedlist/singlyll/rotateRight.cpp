#include <iostream>
using namespace std;

  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {

public:
    ListNode* findNthNode(ListNode* head , int k ) {
        int cnt = 0;
        ListNode* temp = head;
        while(temp != NULL) {
            if(cnt == k) return temp;
            cnt++;
            temp= temp->next;
        }
        return temp;
    }
    ListNode* rotateRight(ListNode* head, int k) {

     if(head == NULL || k == 0) return head;
     ListNode* tail = head;
     int len = 1;
     while(tail->next != NULL){
        tail = tail->next;
        len += 1;

     }
     if(k % len == 0) return head;
      k = k % len;

      // attaching the tail to the head;
      tail->next = head;
      ListNode * newLastNode = findNthNode(tail , len -k);
      head = newLastNode->next;
      newLastNode->next = NULL;

      return head;
    }
};