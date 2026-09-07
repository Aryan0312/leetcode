// Last updated: 9/7/2026, 11:11:06 PM
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {

        int n = nums.size();
        vector<int> ans(2*n);

        for(int i=0;i<2*n;i++){
            ans[i] = (nums[i%n]);
        }

        return ans;
    }
};