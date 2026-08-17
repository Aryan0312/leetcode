// Last updated: 8/17/2026, 9:20:58 AM
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);

        for(int i =0;i<n;i++){
            ans[i] = nums[nums[i]];
        }

        return ans;
    }
};