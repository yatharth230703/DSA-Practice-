class Solution{	
	public:
		string longestCommonPrefix(vector<string>& str){
			int minlen=INT_MAX;
			for (int i=0;i<str.size() ;i++){
				if (str[i].size()<minlen){
					minlen==str[i].size();
				}
			}
			string ans="";
			int j=0;
			int i=0;
			while (i<minlen){
				if(j+1!=str.size()){
					if (str[j][i]==str[j+1][i]){
						j++;
						continue;
					}
					else{
						return ans;
					}
				}
				else{
					ans+=str[j][i];
					j=0;
					i++;
				}
			}
			return ans;
		}
};