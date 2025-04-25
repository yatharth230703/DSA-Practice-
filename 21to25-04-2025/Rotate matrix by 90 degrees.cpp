class Solution {
    public:
        void rotateMatrix(vector<vector<int>>& matrix) {
            int i=0;
            int j=0;
            int jini=0;
            //transpose
            while(i<matrix.size()){
                while(j<matrix.size()){
                    if (i==j){
                        j++;
                        //continue;
                    }
                    else{
                        int temp=matrix[i][j];
                        matrix[i][j] = matrix[j][i];
                        matrix[j][i] = temp;
                        j++;
                    }
                    if (j==matrix.size()){
                        i++;
                        jini++;
                        j=jini;
                    }
                }
            }
            for (int i=0;i<matrix.size();i++){
                reverse(matrix[i].begin() , matrix[i].end());
            }
            return ;
        }
    };