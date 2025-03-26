
class Solution {
    public:
        ListNode* insertAtKthPosition(ListNode* &head, int X, int K) {
            ListNode*temp =head;
            ListNode*add = new ListNode(X);
            ListNode*prev=NULL;
            while (K-1!=0){
                prev=temp;
                if(temp!=NULL){
                temp=temp->next;
                }
                K--;
            }
            // ab temp points to k , prev to k-1
            if(prev==NULL){
                if (temp==NULL){
                    //cout << prev->val;
                    return add;
                }
                else{
                    //cout<< prev->val;
                    add->next=temp;
                    return add;
                }
            }
            //cout <<prev->val;
            prev->next=add;
            add->next=temp;
            return head;
        }
    };