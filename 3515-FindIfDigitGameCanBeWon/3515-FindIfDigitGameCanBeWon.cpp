// Last updated: 8/17/2026, 9:19:42 AM
class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
       int n = nums.size();

       int singleSum = 0; 
       int doubleSum = 0;

       for(int i =0;i<n;i++){
            if(nums[i] <= 9){
                singleSum += nums[i];
            }else{
                doubleSum += nums[i];
            }

       } 

        if(singleSum == doubleSum){
            return false;
        }

       return true;
    }
};