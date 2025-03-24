class Solution {
    public:
        double helper(double x, int n){
            // x and y have the same initial value 
            
            if (n==0){
                return 1;
            }
            double y = helper(x,n/2);
            if (n%2==0){
                return y*y;
            }
            if (n%2!=0){
                return x*y*y;
            }
        }
        double myPow(double x, int n) {
            if (n==0){
                return 1;
            }
            if (n<0){
                n=-n;
                x=1/x;
    
            }
            return helper(x,n);
            //merko x ki value saved chahiye 
        }
    };