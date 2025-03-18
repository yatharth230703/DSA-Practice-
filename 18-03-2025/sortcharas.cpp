class Solution{	
	public:
        vector<char> frequencySort(string& s){
            vector<char> cvec;
            int freq[256] = {0};
            for(char z : s){
                if(freq[z] == 0) cvec.push_back(z);
                freq[z]++;
            }

            sort(cvec.begin(),cvec.end(),[&freq](const char a, const char b) {
                return (freq[a] != freq[b]) ? 
                (freq[a] > freq[b]) : (a < b);
              });

            return cvec;
        }
};