  #include<iostream>
  using namespace std;
  
class ListNode {
public:
    int val;
    ListNode* next;
    ListNode* child; // Can also be named 'down'

    // Constructor
    ListNode(int _val) {
        val = _val;
        next = nullptr;
        child = nullptr;
    }
};

  class Solution{
      public:
      ListNode* merge(ListNode* l1 , ListNode* l2){
        ListNode* dummyNode = new ListNode(-1);

        ListNode* res = dummyNode;

        while(l1 != NULL && l2 != NULL){
            if(l1->val < l2->val){
                res->child = l1;
                res = l1;
                l1 = l1->child;
            }else{
                res->child = l2;
                res = l2;
                l2 = l2->child;
            }
            res->next = nullptr;
        }
     if(l1) res->child = l1;
     else res->child = l2;

     if(dummyNode->child) dummyNode->child->next = nullptr;
     return dummyNode->child;
      } 
      
      ListNode* flatten(ListNode* head) {
          if(head == NULL || head->next == NULL) return head;
          
          ListNode* mergeNode = flatten(head->next);
          
          head = merge(head , mergeNode);
          
          return head;
        }
    };