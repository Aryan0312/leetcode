// Last updated: 8/17/2026, 9:21:08 AM
class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int breakPoint =-1;
        for(int i =0;i<n-1;i++){
            if(nums[i] > nums[i+1]){
                breakPoint = i;
                break;  
            }
        }

        if(breakPoint == -1){
            return true;
        }

        reverse(nums.begin(),nums.begin()+breakPoint+1);
        reverse(nums.begin()+breakPoint+1,nums.end());
        reverse(nums.begin(),nums.end());

        for(int i = 0;i<n;i++){
            cout<<nums[i]<<" ";
        }

        for(int i =0;i<n-1;i++){
            if(nums[i] > nums[i+1]){
               return false; 
            }
        }

        return true;

    }
};