// Last updated: 8/17/2026, 9:21:35 AM
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();

        int maxP = INT_MIN;

        for(int i =0;i<n;i++){
            for(int j = 0;j<n;j++){
                if(i == j ){
                    continue;
                }

                int prod = (nums[i] - 1) * (nums[j] - 1);

                maxP = max(prod,maxP);
            }
        }

        return maxP;
    }
};