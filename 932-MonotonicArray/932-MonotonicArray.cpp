// Last updated: 8/17/2026, 9:22:07 AM
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();
        int prev= 0 ,  curr =0;

        prev = 0;
        
        for(int i =1;i<n;i++){
            if(nums[prev] != nums[i]){

                curr = i;
                break;
            }
        }
        



        bool ascend = (nums[prev] < nums[curr]) ? true : false;



        for(int i = curr;i<n-1;i++){
            prev = curr;
            curr = i+1;

           
            if(ascend){
                if(nums[prev] > nums[curr]){
                    return false;
                }
            }else{
                if(nums[prev] < nums[curr]){
                    return false;
                }
            }
        }


        return true;
    }
};