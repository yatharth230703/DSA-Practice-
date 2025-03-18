class Solution{	
	public:
		bool rotateString(string& s,string& goal){
			string trial= "";
			if(s==goal){
				return true;
			}
			for (int i=1; i<s.size() ; i++){
				string temp = s.substr(0,i);
				string temp1 = s;
				temp1.erase(0,i);
				string isgoal = temp1+temp;
				if (isgoal==goal){
					return true;
				}
			}
			return false;
		}
};