/*
Definition of singly linked list:
struct ListNode
{
    int val;
    ListNode *next;
    ListNode()
    {
        val = 0;
        next = NULL;
    }
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
    }
    ListNode(int data1, ListNode *next1)
    {
        val = data1;
        next = next1;
    }
};
*/

class Solution {
    public:
        ListNode* middleOfLinkedList(ListNode* head) {
            ListNode*slow =head;
            ListNode*fast=head;
            while(fast!=NULL && fast->next!=NULL){
                slow=slow->next;
                fast=fast->next->next;
            }
            return  slow;
        }
    };