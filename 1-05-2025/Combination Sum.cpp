class Solution {
    public:
        void helper(vector<vector<int>>&finans , int i , vector<int>&candidates , int target ,vector<int>&arr){
            if(target==0){
                finans.push_back(arr);
                return;
            }
            if (i==candidates.size()){
                return ;
            }
            if(target<0){
                return;
            }
            // either hold or give 
            arr.push_back(candidates[i]);
            //target-=candidates[i];
            helper(finans , i , candidates , target - candidates[i] , arr);
            arr.pop_back();
            
            helper(finans , i+1 , candidates,target , arr);
        }
        vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
            // ab path jabtak change ni krna jabtak saare bache hue var usse kam size k ho
            vector<vector<int>>ans;
            vector<int>arr;
            int i=0;
            helper(ans ,i,candidates, target, arr);
            return ans;
    
        }
    };