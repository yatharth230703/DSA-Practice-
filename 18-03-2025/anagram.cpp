class Solution{	
	public:
		bool anagramStrings(string& s,string t){
			unordered_map<char,int> m1;
			unordered_map<char,int> m2;
			if(s.size()!=t.size()){
				return false;
			}
			for(int i=0 ; i<s.size() ; i++){
				m1[s[i]]++;
			}
			for(int i=0 ; i<s.size() ; i++){
				m2[t[i]]++;
			}
			for (int i=0;i<s.size();i++){
				if (m2.find(s[i])!=m2.end()){
					if(m2[s[i]]==m1[s[i]]){
						continue;
					}
					else{
						return false;
					}
				}
				else{
					return false;
				}
			}

			return true;
		}
};