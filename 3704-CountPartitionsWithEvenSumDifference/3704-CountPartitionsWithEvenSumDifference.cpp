// Last updated: 8/17/2026, 9:19:39 AM
class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n = nums.size();

        int leftSum = 0;
        int rightSum = 0;
        int sum = 0;
        int count = 0;
        for(int i =0;i<n;i++){
            sum += nums[i];

        }

        for(int i= 0;i<n-1;i++){
            leftSum += nums[i];
            rightSum = sum - leftSum; 

            if(abs(leftSum - rightSum) % 2 == 0){
                count++;
            }
            
        }

        return count;
    }
};