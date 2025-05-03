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
        bool isPalindrome(ListNode* head) {
           
            ListNode*newhead = new ListNode(head->val);
            ListNode*temp=head->next;
            ListNode*temp1=newhead;
            //make new ll
            while(temp!=NULL){
                ListNode* newtemp = new ListNode(temp->val);
                temp1->next=newtemp;
                temp1=newtemp;
                temp=temp->next;
            }
            // new list has been formed, reverse the old one
            ListNode*prev= NULL;
            ListNode*curr = head;
            while(curr!=NULL){
                ListNode* nxt= curr->next;
                curr->next=prev;
                prev=curr;
                curr=nxt;
            }
            //newhead is prev;
            ListNode*tally1= prev;
            ListNode*tally2=newhead;
            while(tally1!=NULL){
                if (tally1->val!=tally2->val){
                    return false;
                }
                tally1=tally1->next;
                tally2=tally2->next;
            }
            return true;
        }
    };