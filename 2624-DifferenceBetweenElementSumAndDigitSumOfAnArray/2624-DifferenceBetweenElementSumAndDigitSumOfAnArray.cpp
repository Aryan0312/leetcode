// Last updated: 8/18/2026, 11:38:19 PM
class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n = nums.size();
        int sum1 = 0;
        int sum2 = 0;
        for(int i =0;i<n;i++){
            sum1 += nums[i];

            while(nums[i] > 0){
                int digit = nums[i] % 10;
                sum2+= digit;
                nums[i] /= 10;
            }
        }

        return abs(sum1 - sum2);
    }
};