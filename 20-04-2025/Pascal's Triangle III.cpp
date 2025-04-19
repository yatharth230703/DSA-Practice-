class Solution {
    public:
        vector<vector<int>> pascalTriangleIII(int n) {
            vector<vector<int>>ans2;
            for(int i=1; i<=n ; i++){
                vector<int>ans1 ; 
                int elem = 1;
                ans1.push_back(elem);
                for (int j=1 ; j<i ; j++){
                    elem = elem*(i-j);
                    elem = elem/(j);
                    ans1.push_back(elem);
                }
                ans2.push_back(ans1);
            }
            return ans2;
        }
    };