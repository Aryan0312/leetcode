// Last updated: 8/17/2026, 9:19:40 AM
class Solution {
public:
    int minElement(vector<int>& nums) {
        int n = nums.size();
        int minNum = INT_MAX;
        for(int i =0;i<n;i++){
            int sumOfNum = 0;
            while(nums[i]>0){
                sumOfNum += nums[i] %10;
                nums[i] /= 10;
            }
            nums[i] = sumOfNum;
            if(nums[i] < minNum){
                minNum = nums[i];
            }
        }


        return minNum;
        
    }
};