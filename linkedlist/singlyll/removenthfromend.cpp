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
    ListNode* reversell(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* next = nullptr;

        while (curr != nullptr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        if (head == nullptr) {
            return nullptr;
        }

        head = reversell(head);

        if (n == 1) {

            ListNode* nodeToDelete = head;
            head = head->next;
            delete nodeToDelete;

            return reversell(head);
        }

        ListNode* temp = head;
        int i = 0;
        while (i < n - 2 && temp->next != nullptr) {
            temp = temp->next;
            i++;
        }

        temp->next = temp->next->next;
        head = reversell(head);
        return head;
    }
};

int main (){
    return 0;
}