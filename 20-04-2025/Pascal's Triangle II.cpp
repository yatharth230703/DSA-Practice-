class Solution {
    public:
        vector<int> pascalTriangleII(int r) {
            vector<int>ans1;
            int str=1;
            ans1.push_back(str);
            for(int i=1 ; i<r; i++){
                str = str*(r-i);
                str = str/(i);
                ans1.push_back(str);
            }
            return ans1;
    
        }
    };