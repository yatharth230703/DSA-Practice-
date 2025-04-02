class Solution {
    public:
        ListNode* deleteKthElement(ListNode* head, int k) {
            ListNode*temp=head;
            while (k > 1 && temp != NULL) {
                temp = temp->next;
                k--;
            }
            if(temp->prev!=NULL){
            temp->prev->next=temp->next;
            }
            else{
                head=temp->next;
                if(temp->next!=NULL){
                temp->next->prev=NULL;
                }
    
                //head->prev=NULL;
                temp->next=NULL;
                delete(temp);
                return head;
    
            }
    
            if(temp->next!=NULL){
                temp->next->prev=temp->prev;
            }
            temp->next=NULL;
            temp->prev=NULL;
            delete(temp);
            return head;
        }
    };