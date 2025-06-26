class Solution {
public:
    int int_ceil(int i , int j){
        return (i+j-1)/j;
    }
    void heapify(vector<int> &nums, int ind, int val) {
        nums[ind]=val;

        //start with that index only ig , and move 
        /// start with the given index only , and make sure both conditions apply ,which are 
        // it is smaller than its children and larger than its parents 

        // how will I know when to stop ? when the condition is satisfied 
        while (ind <nums.size()){
            //will keep modifying ind's value so that I am not breaking while prematurely 
            int tally =0;

            // when comparing with children , make sure to replace with the smaller one
            if(2*ind+1 <nums.size()){
                if(2*ind+2<nums.size()){
                    //both children exist 
                    if(nums[ind]>nums[2*ind+1] && nums[ind]>nums[2*ind+2]){
                        if(nums[2*ind+1]<nums[2*ind+2]){
                            int temp = nums[ind];
                            nums[ind]=nums[2*ind+1];
                            nums[2*ind+1] = temp;
                            ind = 2*ind+1;
                            tally=1;
                        }
                        else{
                            int temp = nums[ind];
                            nums[ind]=nums[2*ind+2];
                            nums[2*ind+2] = temp;
                            ind = 2*ind+2;
                            tally=1;
                        }
                    }
                    else if(nums[ind]<nums[2*ind+1] && nums[ind]>nums[2*ind+2]){
                            int temp = nums[ind];
                            nums[ind]=nums[2*ind+2];
                            nums[2*ind+2] = temp;
                            ind = 2*ind+2;
                            tally=1;
                    }
                    else if(nums[ind]>nums[2*ind+1] && nums[ind]<nums[2*ind+2]){
                            int temp = nums[ind];
                            nums[ind]=nums[2*ind+1];
                            nums[2*ind+1] = temp;
                            ind = 2*ind+1;
                            tally=1;
                    }
                }

                else{
                    //doesnt exist , only replace with 2*ind+1
                    //becuase it can never happen that +1 doesnt exist but +2 does exist 
                    if(nums[ind]>nums[2*ind+1]){
                        int temp = nums[ind];
                        nums[ind]=nums[2*ind+1];
                        nums[2*ind+1] = temp;
                        ind = 2*ind+1;
                        tally=1;
                    }
                }
            }
            //please note that ind still holds it's current value , which needs to change with the switches
            ///checked with children
            //now parent 
            //since parent will always exist 
            //dont check parent of 0
            if(tally==0){
                if(ind>0 && nums[ind]<nums[int_ceil(ind,2)-1]){
                    //should not be 
                    //switch
                    //cout << "option 3 , currval ind = " << ind << " ceil == " << int_ceil(ind,2) <<endl;
                    int temp = nums[ind];
                    nums[ind]= nums[int_ceil(ind,2)-1];
                    nums[int_ceil(ind,2)-1]=temp;
                    ind = int_ceil(ind,2)-1;
                    tally=1;
                    ///cout << "newval = "<< ind <<endl;
                }
            }

            //if it has come here without switching , break , else continue
            if(tally==0){
                break;
            }
            else{
                continue;
            }
        }
        
    
    }
};