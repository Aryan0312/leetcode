// Last updated: 8/17/2026, 9:23:17 AM
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        int sum = (n*(n+1))/2;

        int actualSum = 0;
        for(int i =0;i<n;i++){
            actualSum+= nums[i];
        }

        return sum - actualSum;
    }
};