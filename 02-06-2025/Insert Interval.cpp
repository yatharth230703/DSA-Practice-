class Solution {
public:
    vector<vector<int>> insertNewInterval(vector<vector<int>>& Intervals, vector<int>& newInterval){
        //your code goes here
        //basically newinterval ki wja se new start aur new end banega , 
        // new start aur new end nikalne k baad original list me jiska bhi end new start se chhota hai 
        // usko add karo , aur jiska bhi start new end se bada hai usko add karo 
        // this will be the final answer 
        int newstart  = -1;
        int newend = -1; 
        int newstart_index =0 ;
        int newend_index =Intervals.size()-1;
        while (newstart_index <Intervals.size()){
            if (newInterval[0] <= Intervals[newstart_index][1]){
                newstart = min(newInterval[0],Intervals[newstart_index][0]);
                break;
            }
            newstart_index++;
        }
        
        //cout << newstart_index << " "; 
        // new end jo hai wo new start k tho baad hi hoga 
        // new start index se start krke uss end tak jao jo new end 
        while (newend_index >= 0){
            if (newInterval[1] >= Intervals[newend_index][0]){
                newend = max(newInterval[1] , Intervals[newend_index][1]);
                break;
            }
            newend_index--;
        }
        //cout << newend_index << " "; 
        // unn elements ko hatao jo newstartindex aur newendindex k beech me hai 
        // newstartindex aur newend index ki jaga combined interval lagao
        vector<int>combo;
        if (newstart==-1){
            combo=(newInterval);
        }
        else{
        combo.push_back(newstart);
        combo.push_back(newend);
        }

        vector<vector<int>>ans ;
        for (int i=0 ; i<newstart_index;i++){
            ans.push_back(Intervals[i]);
        }
        ans.push_back(combo);
        for(int i=newend_index+1; i<Intervals.size();i++){
            ans.push_back(Intervals[i]);
        }
        return ans;
    }
};