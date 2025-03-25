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
        ListNode* deleteNodeWithValueX(ListNode* &head, int X) {
            ListNode*temp =head;
            ListNode*prev=NULL;
            while(temp!=NULL){
                if(temp->val==X){
                    break;
                }
                prev=temp;
                temp=temp->next;
            }
            if(prev==NULL){
                //cout << "yes";
                head=head->next;
                temp->next=NULL;
                delete(temp);
                return head;
            }
            if(temp!=NULL){
            prev->next=temp->next;
            temp->next=NULL;
            delete(temp);
            
            }
            return head;
    
        }
    };