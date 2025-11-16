#include<iostream>
using namespace std;



class Node{
    public:
    int val;
    Node* next;

    Node(int data) {
        val = data;
        next = NULL;
    }
    Node(int data, Node* next_ptr) { 
        val = data;
        next = next_ptr;
    }
};

class Solution {
public:

    int addHelper(Node* temp){
        if(temp==NULL){
            return 1;
        }
        int carry = addHelper(temp->next);
        temp->val += carry;
        if(temp->val < 10) return 0;
        temp->val = 0;
        return 1;
    }

    Node* addOne(Node* head) { 
     int carry = addHelper(head);
 
      if(carry == 1) {
      Node* newNode = new Node(1);
      newNode->next = head;
      head = newNode;
      }
      return head;
    }

};
void printList(Node* head) {
Node* temp = head;
while (temp != nullptr) {
    cout << temp->val << " -> ";
    temp = temp->next;
}
cout << "nullptr" << std::endl;
}

int main() {
    Node* head = new Node(9, new Node(9, new Node(9)));


    printList(head);
    Solution solution;
    
    Node * node = solution.addOne(head);
    
    printList(node);
    
    std::cout << "List: ";
   
    return 0;
}
// was not able to solve in one go 