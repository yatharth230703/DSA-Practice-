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
        ListNode* deleteMiddle(ListNode* head) {
            //acquire the middle node ,then delete 
            ListNode*prev=NULL;
            ListNode*slow =head;
            ListNode*fast= head;
            ListNode*fast1=head;
            while(fast!=NULL && fast->next!=NULL){
                prev=slow;
                slow=slow->next;
                fast=fast->next->next;
            }
            //slow is middle
            if(fast1==NULL){
                return head;
            }
            else if (fast1->next==NULL){
                return NULL;
            }
            prev->next=slow->next;
            slow->next=NULL;
            delete(slow);
            return head;
        }
    };