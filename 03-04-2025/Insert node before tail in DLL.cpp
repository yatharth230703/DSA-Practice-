class Solution {
    public:
        ListNode* insertBeforeTail(ListNode* head, int X) {
            ListNode*temp=head;
            ListNode*insert= new ListNode(X);
            while (temp->next!=NULL){
                temp=temp->next;
    
            }
            if(temp->prev!=NULL){
                temp->prev->next=insert;
                insert->prev=temp->prev;
                insert->next=temp;
                temp->prev=insert;
                return head;
            }
            else{
                insert->next=temp;
                temp->prev=insert;
                return insert;
            }
            
    
        }
    };