// Last updated: 8/17/2026, 9:19:10 AM
class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        int count =1;
        int currEl = nums[0];
        
        vector<int> result;
        result.push_back(currEl);

        for(int i =1;i<nums.size();i++){
            
            if(nums[i]== currEl && count < k){
                result.push_back(nums[i]);
                count++;
            }else if(currEl != nums[i]){
                currEl = nums[i];
                result.push_back(currEl);
                count =1;
            }

        }

        return result;
    }
};