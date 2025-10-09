#include<iostream>


  struct ListNode {
      int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
 
 class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode * fast = head;
        ListNode * slow = head;

        while(fast!=NULL && fast->next!=NULL){
           slow = slow->next;
           fast = fast->next->next;

           if(fast == slow){
            return true;
           }
        }
        return false;
    }
};

void printList(ListNode* head) {
    ListNode* temp = head;
    while (temp != nullptr) {
        std::cout << temp->val << " -> ";
        temp = temp->next;
    }
    std::cout << "nullptr" << std::endl;
}


int main() {
        ListNode* head1 = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4, new ListNode(5)))));


        
    Solution solution;

    std::cout << "List: ";
    printList(head1);
    ListNode* middle1 = solution.hasCycle(head1);
    return 0;
}