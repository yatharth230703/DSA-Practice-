class Solution {
    getFloorAndCeil(nums, x) {
        let start=0;
        let end = nums.length-1;
        let ans=-1;
        let mid=-1;
        while(start<=end){
            mid = Math.floor(start - (start-end)/2);
            if (nums[mid]===x){
                ans=mid;
                break;
            }
            else if (nums[mid]>x){
                end = mid-1;
            }
            else{
                start=mid+1;
            }
        }
        let ansray =[];
        if (ans!=-1){
            ansray.push(nums[ans]);
            ansray.push(nums[ans]);
            return ansray;
        }
        else{
            if (start >0 && start <nums.length){
            ansray.push(nums[start-1]);
            ansray.push(nums[start]);
            return ansray;                
            }
            else if (start ===0){
            ansray.push(-1);
            ansray.push(nums[start]);
            return ansray;
            }
            else if (start ===nums.length){
            ansray.push(nums[start-1]);
            ansray.push(-1);
            return ansray;
            }

        }
        return ansray;
    }
}