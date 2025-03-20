class Solution {
    search(nums, k) {
        //find pivot point 
        //2 baar binary search
        let pivot=-1;
        for (let i=0;i<nums.length-1 ; i++){
            if (nums[i]>nums[i+1]){
                pivot=i;
                break;
            }
        }
        //binary1
        let start1 =0;
        let end1 =pivot;
        let mid1=-1;
        while(start1<=end1){
            mid1=Math.floor(start1-(start1-end1)/2);
            if (nums[mid1]===k){
                return mid1;
            }
            else if (nums[mid1]<k){
                start1=mid1+1;
            }
            else{
                end1=mid1-1;
            }

        }
        if (pivot===nums.length-1){
            return -1;
        }
        let start2 = pivot+1;
        let end2 = nums.length-1;
        let mid2;
        while (start2<=end2){
            mid2= Math.floor(start2-(start2-end2)/2);
            if (nums[mid2]===k){
                return mid2;
            }
            else if (nums[mid2]<k){
                start2=mid2+1;
            }
            else{
                end2=mid2-1;
            }
        }
        return -1;
    }
}