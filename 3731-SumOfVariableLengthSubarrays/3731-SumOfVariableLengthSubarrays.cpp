// Last updated: 8/17/2026, 9:19:38 AM
class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int n = nums.size();
        int start = 0;
        int sum = 0;
        for(int i =0;i<n;i++){
            start = max(0 , i - nums[i]);
            int subarraySum = 0;
            for(int j = start;j<=i;j++){
                subarraySum += nums[j];
            }
            sum+= subarraySum;

        }

        return sum;
    }
};