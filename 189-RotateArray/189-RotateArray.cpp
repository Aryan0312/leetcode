// Last updated: 8/17/2026, 9:23:34 AM
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        reverse(nums.begin(),nums.begin()+(n-k));
        reverse(nums.begin()+(n-k),nums.end());
        reverse(nums.begin(),nums.end());
        
    }
};