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
        ListNode* deleteKthNode(ListNode* &head, int k) {
            ListNode*temp= head;
            ListNode*prev = NULL;
            while (k-1!=0){
                if(temp->next!=NULL){
                    prev=temp;
                    temp=temp->next;
                }
                k--;
            }
            if(prev==NULL){
                //head deletion 
                head=head->next;
                temp->next=NULL;
                delete(temp);
                return head;
            }
            else {
                if (temp->next==NULL){
                    //tail deletion
                    prev->next=NULL;
                    delete(temp);
                    return head;
                }
                else{
                    //normal
                    prev->next=temp->next;
                    temp->next=NULL;
                    delete(temp);
                    return head;
                }
            }
            return head;
    
            
        }
    };