// Last updated: 8/17/2026, 9:25:03 AM
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();


        for(int i =n-1;i>=0;i--){
            for(int j = i-1;j>=0;j--){
                if(nums[i] + nums[j] == target){
                    return {i,j};
                }
            }
        }

        return {0,0};
    }
};