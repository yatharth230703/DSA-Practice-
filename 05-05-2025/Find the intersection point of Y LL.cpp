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
        ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
            ListNode *temp1= headA;
            ListNode*temp2= headB;
            ListNode*ans = NULL;
            set <ListNode*> A;
        
            while(temp1!=NULL){
                A.insert(temp1);
                temp1=temp1->next;
            }
            while(temp2!=NULL){
                if (A.count(temp2)){
                    ans=temp2;
                    break;
                }
                temp2=temp2->next;
    
            }
    
            return ans;
        }
    };