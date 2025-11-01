#include<iostream>
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

     ListNode* reverseLinkedList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* next = nullptr;

        while(curr!=nullptr){
           next =  curr->next;
           curr->next = prev;

           prev = curr;
           curr = next;
        }
        return prev;

    }

   ListNode* getKthNode(ListNode* temp , int k ){
    k -= 1;
    while(temp!= NULL && k > 0){
        k--;
        temp = temp->next;
    }
    return temp;
   }
    ListNode* reverseKGroup(ListNode* head, int k) {

        ListNode* temp = head;
       ListNode * prevLast = NULL;
       while(temp!= NULL) {
        ListNode * kthNode = getKthNode(temp , k );
        if(kthNode == NULL){
            if(prevLast) prevLast->next = temp;
            break;
        }
        ListNode * nextNode = kthNode->next;
        kthNode->next = NULL;
        reverseLinkedList(temp );
        if(temp == head) {
            head = kthNode;
        }else{
            prevLast->next = kthNode;
        }

        prevLast = temp ;
        temp = nextNode;
       }
       return head;
        
    }
};