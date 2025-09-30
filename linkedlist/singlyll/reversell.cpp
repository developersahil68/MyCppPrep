#include <iostream>

  struct ListNode {
      int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
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
    ListNode* middle1 = solution.reverseList(head1);
    printList(middle1);

    std::cout << "\n";

    return 0;
}