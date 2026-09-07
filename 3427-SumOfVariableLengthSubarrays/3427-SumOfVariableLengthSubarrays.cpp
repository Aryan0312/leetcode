// Last updated: 9/7/2026, 11:09:01 PM
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