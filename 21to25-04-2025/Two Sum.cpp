class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int,int>mp;
            vector<int>ans;
            int ind1 = 0;
            int ind2 = 0;
            for (int i=0;i<nums.size();i++){
                mp[nums[i]]++;
            }
            for (int i=0;i<nums.size();i++){
                if(mp.find(target-nums[i])!=mp.end()){
                    if (nums[i]==target-nums[i]){
                        if (mp[nums[i]]==2){
                            ind1=nums[i];
                            ind2=nums[i];
                        }
                        else{
                            continue;
                        }
                    }
                    else{
                        ind1=nums[i];
                        ind2=target-nums[i];
                    }
                }
            }
            for (int i=0; i<nums.size();i++){
                if(nums[i]==ind1 || nums[i]==ind2){
                    ans.push_back(i);
                }
            }
            return ans;
        }
    };