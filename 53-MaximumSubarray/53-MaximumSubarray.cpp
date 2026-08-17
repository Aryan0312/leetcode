// Last updated: 8/17/2026, 9:24:21 AM
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = INT_MIN;
        int sum =0;

        for(int i= 0;i<nums.size();i++){
            if(sum <0){
                sum=0;
            }

            sum+=nums[i];
            maxi = max(maxi,sum);
        }

        return maxi;
    }
};