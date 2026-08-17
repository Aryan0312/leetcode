// Last updated: 8/17/2026, 9:20:10 AM
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int numsSum = 0;
        for(int i =0;i<n;i++){
            numsSum += nums[i];
        }

        int leftSum = 0;
        int rightSum = numsSum ;
        for(int i =0;i<n;i++){
            rightSum -= nums[i];
            ans[i] = abs(leftSum - rightSum);

            leftSum += nums[i];

        }

        return ans;
    }
};