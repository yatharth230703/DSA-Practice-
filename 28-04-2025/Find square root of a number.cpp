class Solution {
    public:
        long long floorSqrt(long long n)  {
          long long int start =1;
          long long int end= n;
          long long int ans = 0;
          while(start<end){
            long long int mid = start+ (end-start)/2;
            if (mid*mid==n){
         
                return mid;
            }
            else if (mid*mid<n){
                ans=mid;
                start=mid+1;
            }
            else{
                end=mid-1;
            }
          }
    
          return ans;
        }
    };