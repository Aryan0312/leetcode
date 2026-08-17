// Last updated: 8/17/2026, 9:24:34 AM
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int index = -1;
        // first find the longest prefix match by finding the index point that breaks the increasing pattern from the back 
        for(int i =n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                index = i;
                break;
            }
        }

        // then if no index found that means this is the last permutation , then return the reversed to give first permutation 
        if(index == -1){
            reverse(nums.begin(),nums.end());
            return ;
        }
        // now find the larger element than index that is the smallest from n-1 to index and swap it with index
        for(int i = n-1;i>index;i--){
            if(nums[i]>nums[index]){
                swap(nums[i],nums[index]);
                break;
            }
        }
        //at last you will reverse the part after index to make sure it is the smallest for the next permutation  

        reverse(nums.begin()+index+1,nums.end());
    }
};