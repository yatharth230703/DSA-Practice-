class Solution{
    public:
    int maxMeetings(vector<int>& start, vector<int>& end){
        vector<pair<int,int>> meetin;
        for(int i=0;i<end.size();i++){
            meetin.push_back({end[i] ,start[i]});

        }

        sort(meetin.begin() , meetin.end());
        int count =0;
        int prev_ind=-1;
        for (auto &it : meetin){
            if (it.second > prev_ind){
                count++;
                prev_ind=it.first ;
            }
        }
        return count;
    }
};