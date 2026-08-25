// Last updated: 8/26/2026, 12:21:37 AM
class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        int n = nums.size();
        sort(nums.begin(),nums.end());

       

        vector<vector<int>> ans;
        bool pushed = false;

        if(nums[n-1] < lower) return {{lower, upper}};
        if(nums[0] > upper) return {{lower, upper}};

        if(lower < nums[0]){
            pushed = true;
            ans.push_back({lower, nums[0] - 1});
        }

        int last = nums[0];

        for(int i = 1; i < n; i++){

            if(nums[i] == last){
                continue;
            }

            if(last >= lower && last < upper && last + 1 != nums[i]){
                pushed = true;
                ans.push_back({last + 1, min(nums[i] - 1, upper)});
            }

            if(last < lower && nums[i] > lower){
                int end = min(nums[i] - 1, upper);

                if(lower <= end){
                    pushed = true;
                    ans.push_back({lower, end});
                }
            }

            last = nums[i];
        }

        if((nums[n-1] >= lower && nums[n-1] <= upper) && upper > nums[n-1]){
            pushed = true;
            ans.push_back({nums[n-1] + 1, upper});
        }

        if(!pushed){
            return {};
        }

        return ans;
    }
};