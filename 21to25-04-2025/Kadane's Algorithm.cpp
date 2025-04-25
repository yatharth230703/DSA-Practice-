class Solution {
    public:
        int maxSubArray(vector<int>& nums) {
            int i=0;
            int maxsum = nums[i];
    
            int sum=nums[i];
            for (int i=1 ; i < nums.size() ; i++){
                sum = max(nums[i] , nums[i]+sum);\
                maxsum = max(sum,maxsum);
            }
            return maxsum;
        }
    };