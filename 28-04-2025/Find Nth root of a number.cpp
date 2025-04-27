class Solution {
    public:
      int NthRoot(int N, int M) {
           long long int start =1;
           long long int end = M;
           //int ans= -1;
      
           while(start<=end){
            long long int mid = start + (end-start)/2;
            if (pow(mid,N)==M){
                return mid;
    
            }
            else if (pow(mid,N)<M){
                start=mid+1;
             
            }
            else{
                end= mid-1;
            }
    
           }
           return -1;
        }
    };
    