class Solution {
    public:
        int GCD(int n1,int n2) {
            int min ,max;
            if (n1 < n2){
                min=n1;
                max=n2;
            }
            else{
                min=n2;
                max=n1;
            }
            if (max%min==0){
                return min;
            }
            else{
                min=min-1;
            }
            for (int i=min ; i>=1; i--){
                if (n2%i==0){
                    if (n1%i==0){
                        return i;
                    }
                }
            }
            return 1;
        }
    };