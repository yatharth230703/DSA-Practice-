class Solution {
    public:
     void deleteGivenNode(ListNode* node) {
         ListNode* temp = node;
         if (temp->prev == NULL && temp->next == NULL) {
             return;
         }
         if (node->next == NULL) {
             temp->prev->next = NULL;
             temp->prev = NULL;
             delete (temp);
         }
         else{
 
         temp->next->prev = temp->prev;
         temp->prev->next = temp->next;
         temp->next = NULL;
         temp->prev = NULL;
         delete (temp);
         }
 
     }
 };