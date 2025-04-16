class Solution {
    public:	
        void helper (vector<vector<int>>&p , vector<int>ans, vector<int>nums , int index){
            if(index==nums.size()){
                p.push_back(ans);
                return ;
            }
            ans.push_back(nums[index]);
            helper(p,ans,nums,index+1);
            ans.pop_back();
            helper(p,ans,nums,index+1);
    
        }
        vector<vector<int> > powerSet(vector<int>& nums) {
            vector<vector<int>>p;
            int index=0;
            vector<int>ans;
            helper(p,ans,nums,index);
            return p;
        }
    };