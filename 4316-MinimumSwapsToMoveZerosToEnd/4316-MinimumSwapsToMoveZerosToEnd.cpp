// Last updated: 8/17/2026, 9:18:58 AM
class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int right =n-1;
        int count =0;
        while(left<=right){
            if(nums[left] != 0){
                left++;
            }else if(nums[right] == 0){
                right--;
            }else{
                swap(nums[left],nums[right]);
                count++;
            }
        }

        return count;
    }
};