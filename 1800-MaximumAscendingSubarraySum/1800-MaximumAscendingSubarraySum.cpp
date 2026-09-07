// Last updated: 9/7/2026, 11:11:15 PM
class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
       int currSum = nums[0]; 
       int highAns = nums[0];

       for(int i = 1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                currSum += nums[i];
            }else{
                currSum = nums[i];
            }

            highAns = max(currSum,highAns);
       }

       return highAns; 
    }
};