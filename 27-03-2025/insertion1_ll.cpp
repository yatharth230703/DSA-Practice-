class Solution {
    public:
        ListNode* insertAtHead(ListNode* &head, int X) {
            ListNode*temp = head;
            ListNode*add = new ListNode(X);
            add->next=temp;
            return add;
        }
    };