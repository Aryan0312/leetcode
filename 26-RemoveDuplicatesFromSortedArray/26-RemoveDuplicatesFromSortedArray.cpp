// Last updated: 8/17/2026, 9:24:38 AM
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> expectedNums = {nums[0]};
        for(int i = 1;i<nums.size();i++){
            if(expectedNums.back() != nums[i]){
                expectedNums.push_back(nums[i]);
            }
        }
        nums = expectedNums;

        return nums.size();
    }
};