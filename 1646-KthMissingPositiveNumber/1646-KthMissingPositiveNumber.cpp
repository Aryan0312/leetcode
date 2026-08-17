// Last updated: 8/17/2026, 9:21:25 AM
class Solution {
public:
    int findKthPositive(vector<int>& nums, int k) {
        int n = nums.size();

        int low =0;
        int high = n-1;

        while(low<=high){
            int mid = low+(high-low)/2;

            int missing = nums[mid] - (mid +1);

            if(missing < k ){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }

        return high + k + 1;
    }
};