class Solution {
    public:
        int minimumSum(int num) {
            int n1 = -1, n2 = -1, n3 = -1, n4 = -1;
            while(num!=0){
                int digi= num%10;
              
                if(n1==-1){
                    n1=digi;
                }
                else if (n2==-1){
                    n2=digi;
                }
                else if (n3==-1){
                    n3=digi;
                }
                else{
                    n4=digi;
                }
                num=num/10;
            }
            cout << n2;
            int arr[4] = {n1, n2, n3, n4};
            sort(arr, arr + 4);
    
            int ans = arr[0]*10+arr[2] + arr[1]*10+arr[3];
            return ans;
        }
    };