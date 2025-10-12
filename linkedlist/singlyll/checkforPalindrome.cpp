#include<iostream>


  struct ListNode {
      int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
 
class Solution {
public:
    ListNode* reverseLinkedlist(ListNode * head){
        if(head == NULL || head->next == NULL) return head;
        ListNode* newHead = reverseLinkedlist(head->next);
        ListNode * front = head->next;
        front->next = head;
        head->next = NULL;
        return newHead;

    }
    bool isPalindrome(ListNode* head) {
        if(head == NULL && head->next == NULL) return true;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* newHead = reverseLinkedlist(slow->next);
        ListNode* first = head;
        ListNode* second = newHead;
        while(second != NULL){
            if(first->val != second->val){
                reverseLinkedlist(newHead);
                return false;
            }
            first = first->next;
            second = second->next;
        }
        reverseLinkedlist(newHead);
        return true;


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

    ListNode* head1 = new ListNode(1);
    head1->next = new ListNode(2);
    head1->next->next = new ListNode(3);
    head1->next->next->next = new ListNode(4);
    head1->next->next->next->next = new ListNode(5);
        
    Solution solution;

    std::cout << "List: ";
    printList(head1);
    // bool has_cycle1 = solution.hasCycle(head1);
    // std::cout << "Has cycle? " << std::boolalpha << has_cycle1 << std::endl;
    return 0;
}