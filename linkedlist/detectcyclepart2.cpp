#include<iostream>
#include<unordered_map>
using namespace std;


  struct ListNode {
      int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
 
 class Solution {
public:
    ListNode* detectCycle(ListNode *head) {
        unordered_map<ListNode * , int> mpp;
        ListNode* temp = head;

        while(temp != NULL){
            if(mpp.find(temp) != mpp.end()){
                return temp;
            }
            mpp[temp] = 1;
            temp = temp->next;
        }
        return NULL;
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
    
    ListNode* cycle_node = solution.detectCycle(head1);
    
    bool has_cycle = (cycle_node != nullptr);
    
    std::cout << "Has cycle? " << std::boolalpha << has_cycle << std::endl;
    
    if (cycle_node) {
        std::cout << "Cycle starts at node with value: " << cycle_node->val << std::endl;
    }

    return 0;
}