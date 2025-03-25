class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            int check=0;
            int i=0;
            int j=0;
            while (i<nums.size()&&j<nums.size()){
            
                if(nums[i]==nums[j]){
                    i++;
                }
                else{
                    j++;
                    nums[j]=nums[i];
                    
                }
            }
            return j+1;
        }
    };