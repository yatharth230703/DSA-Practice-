class Solution {
public:
    int MaximumNonOverlappingIntervals(vector<vector<int>>& Intervals) {
        sort(Intervals.begin () , Intervals.end() , [](const vector<int>&a , const vector<int>&b){
            return a[1]<b[1];
        });
        //end k hisab se sort hogya 
        int total=0;
        int min_end = INT_MIN;
        for (int i=0;i<Intervals.size();i++){
            if (Intervals[i][0] >=min_end ){
                total++;
                min_end = Intervals[i][1]; 
            }
        }
        return Intervals.size()-total;
    }
};