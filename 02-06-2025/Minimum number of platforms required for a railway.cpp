class Solution{
    public:
    int findPlatform(vector<int>& Arrival, vector<int>& Departure){
        //your code goes here
        int plats=1;
        int maxplats=1;
        int i=0 ;
        int j=1;
        sort(Arrival.begin(), Arrival.end());
        sort(Departure.begin(), Departure.end());
        while(i<Arrival.size() && j<Arrival.size()){
            if (Arrival[j]<=Departure[i]){
                plats++;
                j++;
            }
            else{
                plats--;
                i++;
            }
            maxplats = max(maxplats,plats);
        }
        return maxplats;
    }
};