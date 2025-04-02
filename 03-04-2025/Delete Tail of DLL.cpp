class Solution {
    public:
        ListNode* deleteTail(ListNode* head) {
            ListNode*temp=head;
            if(head->next==NULL){
                return NULL;
            }
            while(temp->next!=NULL){
                temp=temp->next;
            }
            ListNode*pre=temp->prev;
            if(pre!=NULL){
            pre->next=NULL;
            }
            temp->prev=NULL;
            delete(temp);
            return head;
        }
    };