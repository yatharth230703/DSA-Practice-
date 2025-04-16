class Solution {
    public:
        vector<int> leaders(vector<int>& nums) {
            int max_yet=INT_MIN;
            vector<int>ans;
            for(int i=nums.size()-1; i>=0 ; i--){
               
                if(nums[i]>max_yet){
                    ans.push_back(nums[i]);
                    max_yet=nums[i];
                }
            }
            reverse(ans.begin(),ans.end());
            return ans;
          
        }
    };