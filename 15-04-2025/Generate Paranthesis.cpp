class Solution {
    public:
        void helper(vector<string> &ans , string s ,int opening,int closing,int n){
            if (opening >n){
                return ;
            }
            if(opening==closing && s.size()==2*n){
                ans.push_back(s);
                return;
            }
            
            helper(ans,s+"(" , opening+1 , closing, n);
            if (opening>closing){
                helper(ans,s+")",opening,closing+1,n);
            }
        }
        vector<string> generateParenthesis(int n) {
            vector<string>ans;
            int opening =0;
            int closing =0;
            string s="";
            helper(ans,s,opening,closing,n);
            return ans;
        }
    };