class Solution {
    public:
        int rowWithMax1s(vector<vector<int>>& mat) {
            int mindex = mat[0].size();
            int ans = -1;
            for(int i = 0; i < mat.size(); i++) {
                int start = 0, end = mat[i].size() - 1;
                while(start <= end) {
                    int mid = start + (end - start) / 2;
                    if (mat[i][mid] == 1) {
                        if (mid < mindex) {
                            mindex = mid;
                            ans = i;
                        }
                        end = mid - 1; // move left
                    }
                    else {
                        start = mid + 1; // move right
                    }
                }
            }
            return ans;
        }
    };
    