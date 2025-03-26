class Solution {
    public:
        ListNode* insertBeforeX(ListNode* &head, int X, int val) {
            ListNode*temp=head;
            ListNode*prev=NULL;
            ListNode*add = new ListNode(val);
            //head check krlena null h ki ni 
            while (temp!=NULL){
                if(temp->val==X){
                    break;
                }
                prev=temp;
                temp=temp->next;
            }
            if (prev==NULL){
                if(temp==NULL){
                    if(head==NULL){
                        return add;
                    }
                    else{
                        return head;
                    }
                }
                else{
                    add->next=temp;
                    return add;
                }
            }
            else{
                if(temp==NULL){
                    return head;
                }
                prev->next=add;
                add->next=temp;
                return head;
            }
        }
    };