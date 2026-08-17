// Last updated: 8/17/2026, 9:21:33 AM
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        int left = 0,right = n;
        vector<int> ans(2*n,0);
        for(int i =0;i<n;i++){
            ans[(2*i)] = nums[left++];
            ans[(2*i)+1] = nums[right++];
            
        }

        return ans;
    }
};