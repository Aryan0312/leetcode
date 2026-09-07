// Last updated: 9/7/2026, 10:51:59 PM
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> window;

        for(int right = 0; right < nums.size();right++){
            if(window.count(nums[right])){
                return true;
            }//if the number already exists in the window 

            window.insert(nums[right]);

            if(window.size() > k ){
                window.erase(nums[right - k]);
            }
        }


        return false;
    }
};