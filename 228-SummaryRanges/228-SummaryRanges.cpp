// Last updated: 9/7/2026, 10:51:57 PM
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n = nums.size();
        if(n == 0){
            return {};
        }
        int start = 0;
        int end = -1;
        vector<string> ans;
        for(int i =0;i<n-1;i++){
            if(nums[i+1] != (nums[i] + 1)){
                
                if(start == i){
                    ans.push_back(to_string(nums[i]));
                }else{

                ans.push_back(to_string(nums[start]) + "->"+ to_string(nums[i]));
                }
                start = i + 1;
            }
        }

        if(start == n - 1) {
            ans.push_back(to_string(nums[start]));
        }
        else {
            ans.push_back(
                to_string(nums[start]) +
                "->" +
                to_string(nums[n - 1])
            );
        }

        return ans;
    }
};