class Solution{  
    public:  
      vector<int> JobScheduling(vector<vector<int>>& Jobs) { 
          //your code goes here
          sort(Jobs.begin(),Jobs.end() , [](auto &a , auto &b){
              return a[2]>b[2];
          });
  
          //sort krlia
          int maxdeadline =-1;
          for(auto &j : Jobs){
              if(maxdeadline<j[1]){
                  maxdeadline=j[1];
              }
          }
          //maxdeadline aagya
          vector<bool>tally;
          for(int i=0;i<=maxdeadline;i++){
              tally.push_back(false);
          }
          int totaljobs=0;
          int totalproft=0;
          for (auto &j : Jobs){
              //j is an array in jobs
          
              for (int i=j[1] ; i>0;i--){
                  if(tally[i]==false){
                      tally[i]=true;
                      totaljobs++;
                      totalproft+=j[2];
                      break;
                  }
              }
          }
          return {totaljobs, totalproft};
      } 
  };