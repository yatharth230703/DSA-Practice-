class Solution {
    public:
        int search(vector<int> &nums, int k) {
            int start = 0;
            int end = nums.size() - 1;
            int mid;
    
            while (start <= end) {
                mid = start + (end - start) / 2; // FIXED here!
    
                if (nums[mid] == k) {
                    return mid;
                }
    
                if (nums[start] <= nums[mid]) {
                    // Left half sorted
                    if (nums[start] <= k && k < nums[mid]) {
                        end = mid - 1;
                    } else {
                        start = mid + 1;
                    }
                } else {
                    // Right half sorted
                    if (nums[mid] < k && k <= nums[end]) {
                        start = mid + 1;
                    } else {
                        end = mid - 1;
                    }
                }
            }
            return -1;
        }
    };
    