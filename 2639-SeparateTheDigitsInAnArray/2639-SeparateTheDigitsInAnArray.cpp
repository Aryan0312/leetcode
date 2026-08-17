// Last updated: 8/17/2026, 9:20:13 AM
class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        int n = nums.size();
        vector<int> res;

        for(int i =0;i<n;i++){
            vector<int> temp;
            int num = nums[i];

            while(num != 0){
                int rem = num % 10;
                temp.push_back(rem);
                num = num/10;
            }

            for(int i = temp.size()-1;i>=0;i--){
                res.push_back(temp[i]);
            }
        }

        return res;
    }
};