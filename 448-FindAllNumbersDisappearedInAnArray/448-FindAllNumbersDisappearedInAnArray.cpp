// Last updated: 9/7/2026, 10:50:49 PM
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        int n = nums.size();

        vector<int> search(n);

        for(int i =0;i<n;i++){
            search[nums[i]-1]++;
        }
        

        vector<int> ans;
        for(int i = 0;i<n;i++){
            if(search[i] == 0){
                ans.push_back(i+1);
            }
        }

        return ans;
    }
};