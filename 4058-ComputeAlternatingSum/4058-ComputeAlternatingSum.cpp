// Last updated: 8/17/2026, 9:19:25 AM
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