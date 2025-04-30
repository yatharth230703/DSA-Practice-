class Solution{
    public:
    bool helper(vector<int>&nums , int k , int i){
        if (k==0){
            return true;
        }
        if (k<0 || i==nums.size()){
            return false;
        }
        bool path1 = helper(nums,k-nums[i] , i+1);
        bool path2 = helper(nums, k , i+1);
        return path1 || path2; 
    }
    bool checkSubsequenceSum(vector<int>& nums, int k) {
        
         return helper(nums,k,0);
    }
};