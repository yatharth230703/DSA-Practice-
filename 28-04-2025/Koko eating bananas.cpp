class Solution {
    public:
    int divide (int n ,int m){
        if (n%m!=0){
            return n/m+1;
        }
        else{
            return n/m;
        }
    }
    int minimumRateToEatBananas(vector<int> nums, int h) {
        int start = 1;
        sort(nums.begin() , nums.end());
        // k will take value of mid na ? 
        
        int end = nums[nums.size()-1];
        int k=end;
        while (start<=end){
            int mid = start + (end-start)/2;
            long long int sum =0;
            for (int i=0; i<nums.size();i++){
                sum+=divide(nums[i],mid);
            }
      
            if (sum<=h){
                k=mid;
                end = mid-1;
            }
            else{
                start=mid+1;
            }
    
        }
        return k;
        }
    };
    