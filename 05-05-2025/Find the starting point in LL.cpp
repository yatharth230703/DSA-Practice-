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
        ListNode *findStartingPoint(ListNode *head) {
            set<ListNode*>st;
            ListNode*temp=head;
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
            return tally;
        }
    };