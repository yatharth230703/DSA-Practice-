class Solution {
    public:
        bool isomorphicString(string s, string t) {
            if (s.size()!=t.size()){
                return false;
            }
    
            unordered_map<char,char> tally;
            
            set<char>values;
            set<char>keys;
    
            for (int i=0;i<s.size();i++){
                
                if(tally.find(s[i])!=tally.end()){
                    //exist karti h
                    if (t[i]==tally[s[i]]){
                        continue;
                    }
                    else{
                        return false;
                    }
                }
                else{
                    tally[s[i]]=t[i];
                    
                    values.insert(t[i]);
                    keys.insert(s[i]);
                }
            }
            
            if(keys.size()!=values.size()){
                return false;
            }
    
            /*for (auto it = tally.begin() ; it!=tally.end(); it++ ){
                if (values.find(it->first)!=values.end()){
                    return false;
                }
            }*/
    
    
    
            return true;
        }
    };



    