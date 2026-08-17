// Last updated: 8/17/2026, 9:23:07 AM
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> freq;
        int n = nums.size();
        for(int i =0;i<n;i++){
            freq[nums[i]]++;

            if(freq[nums[i]] >1){
                return nums[i];
            }
        }

        return -1;
    }
};