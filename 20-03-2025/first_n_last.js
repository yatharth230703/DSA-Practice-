class Solution {
    searchRange(nums, target) {
        let ansray=[];
        let start=0;
        let end =nums.length-1;
        let ans=-1;
        let subtr=-1;
        let mid;
        while (start<=end){
            if(subtr===-1){
            mid = Math.floor(start - (start-end)/2);
            }
            if (nums[mid]===target){
                if (nums[mid-1]===target){
                    mid--;
                    subtr=1;
                    //check if subtracted
                    continue;
                }
                else{
                    ans=mid;
                    break;
                }
            }
            else if (nums[mid]<target){
                start =mid+1;
            }
            else {
                end=mid-1;
            }
        }
        //console.log(ans);
        if (ans===-1){
            ansray.push(-1);
            ansray.push(-1);
        }
        else{
        
            ansray.push(ans);
            for (let i=ans;i<nums.length;i++){
                if (nums[i]===target){
                    ans++;
                }
                else{
                    break;
                }
            }
            ansray.push(ans-1);
        }
        return ansray;
    }
}