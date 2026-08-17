// Last updated: 8/17/2026, 9:23:43 AM
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();

        if(n == 1){ 
            return 0;
        }

        if(nums[0] > nums[1]){
            return 0;
        }


        if(nums[n-1] > nums[n-2]){
            return n-1;
        }

        int low =1;
        int high = n-2;

        while(low<=high){
            int mid = low+(high-low)/2;

            if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]){
                // if both neighbours are smaller then current element is a peak
                return mid;
            }else if(nums[mid] > nums[mid - 1]){
                // left side is smaller which means we are on an increasing slope
                //
                //      /
                //     / <= mid
                //    /
                //
                // a peak must exist on the right side
                low = mid + 1;
            }else if(nums[mid] > nums[mid + 1]){
                // right side is smaller which means we are on a decreasing slope
                //
                //    \
                //     \ <= mid
                //      \
                //
                // a peak must exist on the left side
                high = mid - 1;
            }else{
                // valley case
                //
                //    \   /
                //     \ /
                //      v <= mid
                //
                // a peak exists on either side, move right
                low = mid + 1;
            }
        }

        return -1;
    }
};