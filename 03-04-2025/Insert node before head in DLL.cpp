
class Solution {
    public:
        ListNode* insertBeforeHead(ListNode* head, int X) {
            ListNode*insert=new ListNode(X);
            ListNode*temp=head;
            insert->next=temp;
            insert->prev=NULL;
            if(temp!=NULL){
                temp->prev=insert;
            }
            return insert;
    
        }
    };