class Solution {
    public:
        ListNode* insertAtTail(ListNode* &head, int X) {
            ListNode*temp=head;
            if (temp==NULL){
                ListNode* add = new ListNode (X);
                return add;
            }
            while(temp->next!=NULL){
                temp=temp->next;
    
            }
            ListNode* add = new ListNode (X);
            temp->next=add;
            return head;
        }
    };