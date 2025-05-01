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
        ListNode* oddEvenList(ListNode* head) {
            if(head==NULL || head->next==NULL){
                return head;
            }
            ListNode*odd = head ;
            ListNode*even = head->next;
            ListNode*evenH = head->next;
            while (even!=NULL && even->next!=NULL){
                odd->next=even->next;
                odd=odd->next;
                even->next=odd->next;
                even=even->next;
            }
            //since I am stopping at even =NULL , I will consider odd as the attatchment point, also since I am storing evenhead , so it'll be odd tail thats connectin
            odd->next=evenH;
            return head;
    
        }
    };