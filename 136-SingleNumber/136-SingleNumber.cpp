// Last updated: 8/17/2026, 9:23:47 AM
class Solution {
public:
// optimal using xor 
    int singleNumber(vector<int>& nums) {
        int result = 0;
        int n = nums.size();
        for(int i =0;i<n;i++){
            result = result^nums[i]; 
        }
        return result;
    }
};