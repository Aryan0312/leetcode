// Last updated: 8/17/2026, 9:21:31 AM
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        vector<int> result;
        for(int i =0;i<n;i++){
            sum += nums[i];
            result.push_back(sum);
        }

        return result;
    }
};