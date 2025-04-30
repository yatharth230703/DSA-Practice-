class Solution {
    public:
    int roseGarden(int n,vector<int> nums, int k, int m) {
        set <int>st;
        for(int i=0; i<n ; i++){
            st.insert(nums[i]);
        }
        //now st has all unique elements
        vector<int> tally ;
        for (auto i=st.begin() ; i!=st.end() ; i++){
            tally.push_back(*i);
        }
        sort(tally.begin() , tally.end());
    
        int start= 0;
        int end = tally.size()-1;
        int tempans= -1;
        
        while(start<=end){
            //*i is the subtracting factor here 
            // minimum k liye lowest se hi start krna chahiye , jaise hi condition meet hui rok do 
            int mid = start+ (end-start)/2;
            int set=0;
            int flowers = 0;
            for (int j=0 ; j<n ; j++){
                if (nums[j]<= tally[mid]){
                    set++;
                }
                else{
                    flowers += set/k;
                    set=0;
                }
            }
            flowers+=set/k;
            //if (flowers>=m){
            //    return *i;
            //}
            if(flowers>=m){
                tempans = tally[mid];
                end = mid-1;
            }
            else{
                start =mid+1;
            }
        }
        return tempans;
      }
    };