class Solution {
    public:
        vector<int> rearrangeArray(vector<int>& nums) {
            //pehle 2 conseq -ve or positive 
            //
            vector<int>pos;
            vector<int>neg;
            for (int i=0;i<nums.size();i++){
                if(nums[i]>0){
                    pos.push_back(nums[i]);
                }
                else{
                    neg.push_back(nums[i]);
                }
            }
            vector<int>ans;
            for(int i=0;i<pos.size();i++){
                ans.push_back(pos[i]);
                ans.push_back(neg[i]);
            }
            return ans;
        }
    };