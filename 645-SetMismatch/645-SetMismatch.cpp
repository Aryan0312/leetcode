// Last updated: 8/17/2026, 9:22:24 AM
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> hash(nums.size()+1,0);
        for(int i =0;i<nums.size();i++){
            hash[nums[i]]++;
        }

        int miss;
        int twice;
        for(int i =0;i<=nums.size();i++){
            if(hash[i] == 0){
                miss = i;
            }

            if(hash[i] == 2){
                twice = i;
            }
        }

        return {twice,miss};
    }
};