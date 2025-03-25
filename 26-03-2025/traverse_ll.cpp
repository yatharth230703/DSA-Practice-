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
        vector<int> LLTraversal(ListNode *head) {
            vector<int>ans;
            ListNode* temp = head;
            while (temp!=NULL){
                ans.push_back(temp->val);
                temp=temp->next;
            }
            return ans;
        }
    };