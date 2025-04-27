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
      int smallestDivisor(vector<int> &nums, int limit) {
           // lessthan equal to chahiye , w can create a temp array and iterate on that ? 
           //divisor array me se hi choose krna padega 
           // I guess I CAN sort it 
           sort(nums.begin() , nums.end());
           int start = 1;
           int end= nums[nums.size()-1];
           int ans =0;
           while(start<=end){
            int mid = start + (end-start)/2;
            //vector<int>temp = nums;
            int sum =0;
            for (int i=0; i<nums.size() ; i++){
                sum+=divide(nums[i],mid);
            }
            if (sum==limit){
                return mid;
            }
            else if (sum<limit){
                ans= mid;
                end=mid-1;
            }
            else{
                start= mid+1;
            }
           }
           return ans;
        }
    };