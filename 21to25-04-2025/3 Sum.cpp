class Solution {
    public:
        vector<vector<int>> threeSum(vector<int>& nums) {
            sort(nums.begin(), nums.end());
            vector<vector<int>> ans;
            set<vector<int>> sta;
    
            for (int i = 0; i < nums.size(); i++) {
                // Skip duplicates
                if (i > 0 && nums[i] == nums[i - 1]) continue;
    
                int temp_target = 0 - nums[i];
                int st = i + 1;
                int en = nums.size() - 1;
    
                while (st < en) {
                    int sum = nums[st] + nums[en];
                    if (sum == temp_target) {
                        vector<int> tempans = {nums[i], nums[st], nums[en]};
                        sta.insert(tempans);
                        st++;
                        en--;
    
                        // Skip duplicates for nums[st] and nums[en]
                        while (st < en && nums[st] == nums[st - 1]) st++;
                        while (st < en && nums[en] == nums[en + 1]) en--;
                    }
                    else if (sum < temp_target) {
                        st++;
                    }
                    else {
                        en--;
                    }
                }
            }
    
            for (auto i = sta.begin(); i != sta.end(); i++) {
                ans.push_back(*i);
            }
    
            return ans;
        }
    };
    