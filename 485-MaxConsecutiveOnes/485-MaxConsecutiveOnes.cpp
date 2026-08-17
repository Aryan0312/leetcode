// Last updated: 8/17/2026, 9:22:41 AM
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int maxConsNums = 0;
        int consNums = 0; 
        for(int i =0;i<n;i++){
            if(nums[i] == 1){
                consNums++;
            }else{
                consNums =0;
            }

            maxConsNums = max(maxConsNums, consNums);
        }

        return maxConsNums;

    }
};