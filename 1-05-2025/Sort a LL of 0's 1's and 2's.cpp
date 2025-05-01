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
        ListNode *sortList(ListNode *head) {
            ListNode*head0=NULL;
            ListNode*tail0=NULL;
            ListNode*head1=NULL;
            ListNode*tail1=NULL;
            ListNode*head2=NULL;
            ListNode*tail2=NULL;
    
            ListNode*temp=head;
            while(temp!=NULL){
                ListNode* nextNode = temp->next;  // store next node
                temp->next = nullptr;  
                if(temp->val==0){
                    if(head0==NULL){
                        head0=temp;
                        tail0=temp;
                    }
                    else{
                        tail0->next=temp;
                        tail0=temp;
                    }
                }
                else if (temp->val==1){
                    if(head1==NULL){
                        head1=temp;
                        tail1=temp;
                    }
                    else{
                        tail1->next=temp;
                        tail1=temp;
                    }
                }
                else{
                    if(head2==NULL){
                        head2=temp;
                        tail2=temp;
                    }
                    else{
                        tail2->next=temp;
                        tail2=temp;
                    }
                }
                temp=nextNode;
            }
            if(tail0!=NULL ){
                if(head1!=NULL){
                    tail0->next=head1;
                }
                else if (head2!=NULL){
                    tail0->next=head2;
                }
                
            }
            if (tail1!=NULL){
                tail1->next=head2;
            }
            if (tail2!=NULL){
                tail2->next=NULL;
            }
    
            if(head0!=NULL){
                return head0;
            }
            else if (head1!=NULL){
                return head1;
            }
            else{
                return head2;
            }
            return NULL;
        }
    };