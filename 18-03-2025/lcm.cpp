class Solution {
    public:
        int LCM(int n1,int n2) {
            int mini= min(n1,n2);
            int maxi= max(n1,n2);
    
            if(maxi%mini==0){
                return maxi;
            }
    
            for (int i=1 ; i<mini;i++){
                if((maxi*i)%mini==0){
                    return maxi*i;
                }
            }
            return maxi*mini;
        }
    };