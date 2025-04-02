class Solution {
    public:
        ListNode * deleteHead(ListNode* head) {
            ListNode*temp =head;
            ListNode*nxt= temp->next;
            head=nxt;
            temp->next=NULL;
            if (nxt!=NULL){
                nxt->prev=NULL;
            }
            return head;
        }
    };