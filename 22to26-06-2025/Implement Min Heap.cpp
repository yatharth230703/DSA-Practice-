class Solution{
    private: 
          vector<int>arr;
          void heapify_up(vector<int>&nums , int ind ){
            if(ind > 0){
                if(nums[ind]<nums[(ind+1)/2 -1]){
                    // should not be 
                    int temp = nums[ind];
                    nums[ind]= nums[(ind+1)/2 -1];
                    nums[(ind+1)/2-1] = temp;
            
                    heapify_up(nums , (ind+1)/2-1 );
                }
            }
            return ;
        }
        void heapify_down(vector<int>&nums , int ind ){
            int smallest= ind ;
            int left = 2*ind+1;
            int right = 2*ind+2;
        
            if(left<nums.size() && nums[smallest] >nums[left]){
                smallest=left;
            }
            if(right<nums.size() && nums[smallest] > nums[right]){
                smallest = right;
            }
            if(smallest!=ind){
                //switch occured 
                int temp = nums[ind];
                nums[ind] = nums[smallest];
                nums[smallest]= temp;
        
                heapify_down(nums,smallest);

            }
            return ;
        }

    public:

        void initializeHeap(){
            arr.clear();
        }

        void insert(int key){
            arr.push_back(key);
            heapify_up(arr , arr.size()-1);
        }

        void changeKey(int index, int new_val){
            arr[index] = new_val ; 
            if(arr[index]<arr[(index+1)/2-1]){
                heapify_up(arr,index);
            }
            else{
                heapify_down(arr,index);
            }

        }

        void extractMin(){
            //make the top element = last element 
            //delete the last element 
            // heapify on 0
            //since it is 0, I only call heapify down since it WILL be greater than its children cause it was last
            arr[0]=arr[arr.size()-1];
            arr.pop_back();
            heapify_down(arr , 0);
        }

        bool isEmpty(){
            if(arr.size()==0){
                return true;
            }
            return false;
        }

        int getMin(){
            return arr[0];
        }

        int heapSize(){
            return arr.size();
        }
};