// Last updated: 8/18/2026, 11:44:25 PM
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxCandies = *max_element(candies.begin(),candies.end());
        vector<bool> ans(candies.size());
        for(int i =0;i<candies.size();i++){
            if((candies[i] + extraCandies) >= maxCandies){
                ans[i] =(true);
                continue;
            }
            ans[i] = (false);
        }

        return ans;
    }
};