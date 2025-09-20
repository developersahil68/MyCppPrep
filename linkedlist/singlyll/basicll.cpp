#include<iostream>
using namespace std;


// initializing the ll
class Node{
    public:
    int val;
    Node* next;

    Node(int data) {
        val = data;
        next = NULL;
    }
};

// inserting a element at the first pos of ll
void insertAtHead(Node* &head, int val) {
    Node* new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}

// traversing all the elements of the ll
void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

void insertAtTail(Node* &head, int val){

    Node* new_node = new Node(val);

    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    // temp has reached last node
    temp->next = new_node;
}

void insertAtPosition(Node* &head, int val, int pos) {
    if(pos==0) {
        insertAtHead(head, val);
        return;
    }

    Node* new_node = new Node(val);
    Node* temp = head;
    int current_pos = 0;
    while(current_pos!=pos-1){
        temp=temp->next;
        current_pos++;
    }

    // temp is pointing to node at pos-1
    new_node->next = temp->next;
    temp->next = new_node;
}

// void updateAtPosition(Node* &head, int k ,int val){
//     Node* temp = head;
//     int curr_pos = 0;

//     while(curr_pos!=k){
//         temp=temp->next;
//         curr_pos++;
//     }
//     temp->val = val;
// }


void deleteAtHead(Node* &head) {
    Node* temp = head; // node to be declared
    head = head->next;
    free(temp);
}


void deleteAtTail(Node* &head) {
    Node* second_last=head;
    while(second_last->next!=NULL){
        second_last=second_last->next;
    }

    // now second_last points  to second last node
    Node* temp = second_last->next; // node to be deleted
    second_last->next=NULL;
    free(temp);
}


void deleteAtPosition(Node* &head, int pos){
    if(pos==0){
        deleteAtHead(head);
        return;
    }
    int curr_pos = 0;
    Node* prev = head;
    while(curr_pos!=pos-1){
        prev=prev->next;
        curr_pos++;
    }

    // prev is pointing to node at pos-1
    Node* temp = prev->next; //  node to be declared
    prev->next = prev->next->next;
    free(temp);
}


int main() {

    Node* head = NULL;
    insertAtHead(head ,5);
    display(head);
    insertAtHead(head,2);
    display(head);
    insertAtTail(head,8);
    display(head);

    return 0;
}  