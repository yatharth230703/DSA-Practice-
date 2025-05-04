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
        bool hasCycle(ListNode *head) {
            set <ListNode*> A;
            ListNode*temp=head;
            while(temp!=NULL){
                if(A.count(temp)){
                    return true;
                }
                else{
                    A.insert(temp);
                }
                temp=temp->next;
            }
            return false;
        }
    };