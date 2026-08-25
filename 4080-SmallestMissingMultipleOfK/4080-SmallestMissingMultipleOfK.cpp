// Last updated: 8/26/2026, 12:21:48 AM
class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();

        sort(nums.begin(),nums.end());
        int missing = k;

        for(int i =0;i<n;i++){
            if(nums[i] == missing){
                missing = nums[i] + k;
            }
        }

        return missing;

    }
};