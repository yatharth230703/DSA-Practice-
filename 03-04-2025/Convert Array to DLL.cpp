class Solution {
    public:
        ListNode* arrayToLinkedList(vector<int> &nums) {
            ListNode*head= new ListNode(nums[0]);
            ListNode*temp = head;
            for (int i=1;i<nums.size()-1;i++){
                ListNode*insert= new ListNode(nums[i]);
                temp->next= insert;
                insert->prev=temp;
                temp=insert;
            }
            if (nums.size()!=1){
            ListNode*tail = new ListNode(nums[nums.size()-1]);
            temp->next=tail;
            tail->prev=temp;
            tail->next=NULL;
            }
    
            return head;
        }
    };