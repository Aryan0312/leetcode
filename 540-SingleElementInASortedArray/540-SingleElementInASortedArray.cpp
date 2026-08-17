// Last updated: 8/17/2026, 9:22:34 AM
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();

        // if there are even number of elements there cannot be a single element 
        if(n % 2 == 0){
            return -1;
        }

        // if theres only one guy hes the single 
        if(n == 1) return nums[0];

        
        if(nums[0] != nums[1]) return nums[0];
        if(nums[n-2] != nums[n-1]) return nums[n-1];

        int low = 1;
        int high = n-2;

        while(low <= high){
            int mid = low+(high-low)/2;

            // first check if we are on the single element
            if(nums[mid - 1] != nums[mid] && nums[mid +1] != nums[mid]){
                return nums[mid];
            }else if(mid%2 != 0 ){
                // if i am on the odd index adn the prev element is not same as me , that means the single is on left 
                if(nums[mid - 1] != nums[mid]){
                    high = mid - 1;
                }else{
                    low = mid+1;
                }
              //if the element is on the right then each pair is (even , odd) index
              //if the element is on the left then each pair is (odd , even) index 


            }else{

                // if i am at the even index and if the element is the same then the single element is in the left part 
                if(nums[mid - 1] == nums[mid]){
                    high = mid - 1;
                }else{
                    low = mid+1;
                }
            }
        }

        return -1;

    }
};