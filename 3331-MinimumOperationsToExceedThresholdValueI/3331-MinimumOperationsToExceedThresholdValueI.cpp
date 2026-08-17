// Last updated: 8/17/2026, 9:19:54 AM
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());

        int n = nums.size();
        int low =0;
        int high = n-1;

        int operations = 0;

        while(low<=high){
            int mid = low+(high - low)/2;

            if(nums[mid] >= k){
                high = mid -1;
            }else{
                operations++;
                low = low+1;
            }
        }

        return operations;
    }
};