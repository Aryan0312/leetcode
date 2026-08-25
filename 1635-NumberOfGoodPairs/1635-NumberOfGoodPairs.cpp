// Last updated: 8/26/2026, 12:22:49 AM
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
            for(int i =0;i<n-1;i++){
                for(int j = i +1;j<n;j++){
                    if(nums[i] == nums[j]){
                        count++;
                    }
                }
            }

            return count;
        
    }
};