class Solution {
    public:
        int balancedStringSplit(string s) {
            unordered_map <char,int> mp;
            int ans=0;
            for(int i=0;i<s.size();i++){
                mp[s[i]]++;
                if(mp['R']==mp['L']){
                    ans++;
                    mp['R']=0;
                    mp['L']=0;
                }
            }
            return ans;
        }
    };