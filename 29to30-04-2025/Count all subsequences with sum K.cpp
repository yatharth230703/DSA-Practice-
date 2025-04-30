class Solution{
    public:    	
    int helper(vector<int>& nums, int k,int i){
    	if (k==0){
            return 1 ;
        }
        if (k<0 || i ==nums.size()){
            return 0;
        }
        int path1 = helper(nums,k-nums[i],i+1);
        int path2 = helper(nums,k,i+1);
        return path1+path2;
    }
    int countSubsequenceWithTargetSum(vector<int>& nums, int k){
    	int i=0;
        return helper(nums,k,i);
    }
};