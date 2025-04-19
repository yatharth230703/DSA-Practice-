class Solution {
    public:
        int pascalTriangleI(int r, int c) {
            r--;
            c--;
            int long long ans =1;
            for (int i=0 ; i<c ; i++){
                ans= ans*(r-i);
                ans = ans/(i+1);
            }
            return ans;
        }
    };