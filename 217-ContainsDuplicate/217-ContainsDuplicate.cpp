// Last updated: 8/17/2026, 9:23:30 AM
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        for(auto it = nums.begin();it != nums.end()-1;it++){
            if(*it == *(it+1)){
                return true;
            }
        }
        return false;

    }
};