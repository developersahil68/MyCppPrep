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
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        return slow;
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
    // Create a linked list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode* head1 = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4, new ListNode(5)))));

    // Create a linked list: 1 -> 2 -> 3 -> 4
    ListNode* head2 = new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4))));

    Solution solution;

    //  odd-sized list
    std::cout << "List: ";
    printList(head1);
    ListNode* middle1 = solution.middleNode(head1);
    std::cout << "Middle node value: " << middle1->val << std::endl; // Should print 3

    std::cout << "\n";

    //  even-sized list
    std::cout << "List: ";
    printList(head2);
    ListNode* middle2 = solution.middleNode(head2);
    std::cout << "Middle node value: " << middle2->val << std::endl; // Should print 3


    return 0;
}