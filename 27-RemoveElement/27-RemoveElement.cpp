// Last updated: 8/17/2026, 9:24:36 AM
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n  = nums.size();
        int valC = 0;
        int firstVal = -1;
        // find the first val 
        for(int i = 0;i<n;i++){
            if(nums[i] == val){
                firstVal = i;
                valC++;
                break;
            }
        }

        if(firstVal == -1){
            return n;
        }

        for(int i = firstVal+1;i<n;i++){
            if(nums[i] != val){
                swap(nums[i],nums[firstVal]);
                firstVal++;
            }else{
                valC++;
            }
        }

        return n - valC;

        

        // start from the next value after val and keep swapping with val when i is not val and increment val

        
    }
};