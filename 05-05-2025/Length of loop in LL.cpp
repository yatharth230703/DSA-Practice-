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
        int findLengthOfLoop(ListNode *head) {
            ListNode*temp=head;
            set <ListNode*>st;
            ListNode*tally=NULL;
            while(temp!=NULL){
                if(st.count(temp)){
                    tally=temp;
                    break;
                }
                else{
                    st.insert(temp);
                }
                temp=temp->next;
    
            }
            if(tally==NULL){
                return 0;
            }
            
            int len=0;
            ListNode*temp1=tally->next;
            while(temp1!=tally){
                len++;
                temp1=temp1->next;
            }
            return len+1;
        }
    };