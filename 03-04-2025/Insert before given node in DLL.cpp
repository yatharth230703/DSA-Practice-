class Solution {
    public:
    void insertBeforeGivenNode(ListNode* node, int X) {
        ListNode* newNode = new ListNode(X);
        newNode->next = node;
        newNode->prev = node->prev;
        if (node->prev) node->prev->next = newNode;
        node->prev = newNode;
    }
    };