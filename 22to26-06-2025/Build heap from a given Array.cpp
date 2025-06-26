class Solution {
public:

    void heapify_up(vector<int>&nums , int ind ){
        if(ind > 0){
            if(nums[ind]<nums[(ind+1)/2 -1]){
                // should not be 
                int temp = nums[ind];
                nums[ind]= nums[(ind+1)/2 -1];
                nums[(ind+1)/2-1] = temp;
          
                heapify_up(nums , (ind+1)/2-1 );
            }
        }
        return ;
    }

    void buildMinHeap(vector<int> &nums) {
        /// keep calling the heapify up down on every index of modified array ? 
        // if index has reached size of nums , return process as completed 
        for(int i=nums.size()-1; i>=0; i--){
            heapify_up(nums,i);
        }

    }
};