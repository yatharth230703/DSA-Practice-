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
        void helper(ListNode* &head , int &sum){
            if (head==NULL){
                return ;
            }
            helper(head->next,sum);
            int temp=head->val;
            head->val=(temp+sum)%10;
            if(temp+sum>=10){
                sum=(temp+sum)/10;
            }
            else{
                sum=0;
            }
        }
        ListNode *addOne(ListNode *head) {
            int sum=1;
            helper(head,sum);
            if(sum>0){
                ListNode*newnode= new ListNode(1);
                newnode->next=head;
                return newnode;
            }
            return head;
    
        }
    };