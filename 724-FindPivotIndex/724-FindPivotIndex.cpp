// Last updated: 8/17/2026, 9:22:21 AM
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();

        int index = -1;

        int leftSum =0;
        int totalSum = accumulate(nums.begin(),nums.end(),0);
        int rightSum = totalSum - nums[0];
        

        for(int i =0;i<n;i++){
            rightSum = totalSum - leftSum - nums[i];
            
            cout<<"leftSum: "<<leftSum<<"rightSum: "<<rightSum<<endl;
            if(leftSum == rightSum){
                return i;
            }
            
            leftSum += nums[i];
 
        }

        return -1;

    }
};