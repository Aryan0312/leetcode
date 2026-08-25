// Last updated: 8/26/2026, 12:21:59 AM
class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int n = nums.size();

        vector<int> freq(nums.size());
        vector<int> c;

        for(int i =0;i<n;i++){
            freq[nums[i]]++;

            if(freq[nums[i]] == 2){
                c.push_back(nums[i]);
                if(c.size() == 2){
                    return c;
                }
            }   
        }


        return {};
    }
};