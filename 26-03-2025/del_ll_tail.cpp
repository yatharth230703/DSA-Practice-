/*
Definition of singly linked list:
struct ListNode
{
    int val;
    ListNode *next;
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
        ListNode* deleteTail(ListNode* &head) {
            ListNode*temp = head;
            if (temp->next==NULL){
                head=NULL;
                return head;
            }
            while(temp->next->next!=NULL){
                temp=temp->next;
            }
            ListNode*del = temp->next;
            temp->next=NULL;
            delete(del);
            return head;
        }
    };