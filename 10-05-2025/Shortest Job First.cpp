class Solution {
    public:
      long long solve(vector<int>& bt) {
          sort(bt.begin(),bt.end());
        
          long long int maxsum=0;
          long long int totalsum=0;
          for (int i=0;i<bt.size()-1;i++){
              maxsum+=bt[i];
          }
          //maxsum aagya
          for (int i=bt.size()-2;i>=0;i--){
              totalsum+=maxsum;
              maxsum-=bt[i];
          }
          return totalsum/bt.size();
  
  
      }
  };