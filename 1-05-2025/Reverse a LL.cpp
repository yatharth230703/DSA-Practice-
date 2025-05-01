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
        ListNode* reverseList(ListNode* head) {
            ListNode*prev=NULL;
            ListNode*temp = head;
            ListNode*nxt=temp->next;
            while(temp!=NULL){
                temp->next=prev;
                prev=temp;
                temp=nxt;
                if(temp!=NULL){
                    nxt=nxt->next;
                }
            }
            return prev;
        }
    };