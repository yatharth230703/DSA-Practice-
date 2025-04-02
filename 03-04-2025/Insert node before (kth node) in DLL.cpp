
class Solution {
    public:
    ListNode* insertBeforeKthPosition(ListNode* head, int X, int K) {
        ListNode* newNode = new ListNode(X);
        if (K == 1) {
            newNode->next = head;
            if (head) head->prev = newNode;
            return newNode;
        }
    
        ListNode* temp = head;
        int count = 1;
        while (temp && count < K - 1) {
            temp = temp->next;
            count++;
        }
    
        if (!temp || !temp->next) return head;
    
        newNode->next = temp->next;
        newNode->prev = temp;
        temp->next->prev = newNode;
        temp->next = newNode;
    
        return head;
    }
    
    };