// Last updated: 9/7/2026, 11:12:16 PM
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for(int i =0;i<n;i++){
            string num = to_string(nums[i]);
            if(num.size() % 2 == 0){
                count++;
            }
        }

        return count;
    }
};