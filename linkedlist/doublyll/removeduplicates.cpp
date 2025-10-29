#include<iostream>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode *prev;
    ListNode()
    {
        val = 0;
        next = NULL;
        prev = NULL;
    }
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
        prev = NULL;
    }
    ListNode(int data1, ListNode *next1, ListNode *prev1)
    {
        val = data1;
        next = next1;
        prev = prev1;
    }
};


class Solution {
public:
    ListNode * removeDuplicates(ListNode *head) {

        if (head == NULL) {
            return head;
        }

        ListNode* temp = head;

        while(temp != NULL && temp->next != NULL) {
            if(temp->val == temp->next->val){
                temp->next = temp->next->next;

              if(temp->next->next != NULL) {

                 temp->next->next->prev = temp;
              }
                
            }else{
                temp = temp->next;
            }
        }
        return head;

    }
};