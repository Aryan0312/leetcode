// Last updated: 9/7/2026, 11:11:55 PM
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