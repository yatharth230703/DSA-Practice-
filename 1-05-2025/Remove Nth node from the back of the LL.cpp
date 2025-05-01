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
        ListNode* removeNthFromEnd(ListNode* head, int n) {
            ListNode*s=head;
            ListNode*prev=NULL;
            ListNode*s1=head;
            while(n-1!=0){
                s1=s1->next;
                n--;
            }
            while(s1->next!=NULL){
                prev=s;
                s=s->next;
                s1=s1->next;
            }
            //delete s
            if(prev!=NULL){
                if(s!=NULL){
                    prev->next=s->next;
                }
            }
            else{ 
                head=head->next;
            }
            s->next=NULL;
            delete(s);
            return head;
        }
    };