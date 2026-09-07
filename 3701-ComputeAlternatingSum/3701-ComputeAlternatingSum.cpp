// Last updated: 9/7/2026, 11:08:50 PM
class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int evenSum = 0;
        int oddSum = 0;

        for(int i = 0 ;i<nums.size();i++){
            if(i%2 == 0){
                evenSum += nums[i];
            }else{
                oddSum += nums[i];
            }
        }

        return evenSum - oddSum;
        
    }
};