class Solution {
    public:
        int singleNonDuplicate(vector<int> &nums) {
            int start = 0 ;
            int end = nums.size()-1;
            while(start<end){
                int mid = start + (end - start) / 2;
                if (nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1]){
                    return nums[mid];
                }
                else{
                    if (mid%2==0){
                        // check krna hai ki mid hamare answer k left hai ya right 
                        if (nums[mid]==nums[mid+1]){
                            // this means left starting from zero
                            start=mid+1;
                        }
                        else{
                            // this means right 
                            end = mid-1;
                        }
                    }
                    else{
                        // if current index is odd 
                        if (nums[mid]==nums[mid+1]){
                            end = mid-1;
                        }
                        else{
                            start=mid+1;
                        }
                    }
                }
            }
            if (nums[start]!=nums[start-1] && nums[start]!=nums[start+1]){
                return nums[start];
            }
            if(nums[end]!=nums[end-1] && nums[end]!=nums[end+1]){
                return nums[end];
            }
            return -1;
        }
    };