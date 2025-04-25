class Solution {
    public:
        void sortZeroOneTwo(vector<int>& nums) {
            int last=nums.size()-1;
            int i2 =0;
            while(i2<=last){
                if (nums[i2]==2){
                    if (nums[last]==2){
                        last--;
                        continue;
                    }
                    else{
                        int temp = nums[i2];
                        nums[i2]=nums[last];
                        nums[last]=temp;
                        last--;
                    }
                }
                i2++;
            }
            //2s sort hogye , last should be pointing to one ka last 
            int i1=0;
            while(i1<=last){
                if (nums[i1]==1){
                    if (nums[last]==1){
                        last--;
                        continue;
                    }
                    else{
                        int temp = nums[i1];
                        nums[i1]=nums[last];
                        nums[last]=temp;
                        last--;
                    }
                }
                i1++;
            }
            return ;
        }
    };