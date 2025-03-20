class Solution {
    upperBound(nums, x) {
        
      let start =0;
      let end = nums.length-1;
      let mid;
      let check= -1;
      while (start<=end){
        mid = Math.floor(start - (start-end)/2);
        if (nums[mid]>x ){
            check=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
      }
      if (check===-1){
        check = nums.length ;
      }
      return check;
    }
    }
