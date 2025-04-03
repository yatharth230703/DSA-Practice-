class Solution {
    public:
        bool canJump(vector<int>& nums) {
            int maxr=0;
            for(int i=0;i<nums.size();i++){
                if(maxr>=nums.size()-1){
                    return true;
                }
                if(i>maxr){
                    return false;
                }
                maxr=max(maxr,i+nums[i]);
            }
            return true;
            
        }
    };