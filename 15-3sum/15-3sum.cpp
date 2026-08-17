// Last updated: 8/17/2026, 9:24:47 AM
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();

        // first sort the array to make sure you dont have duplicate triplets 
        sort(nums.begin(),nums.end());

        // i j and k will be in the same order to each other and wont corss each other

        // keep the i fixed each iteration 
        for (int i = 0; i < n; i++) {

            // after the first iteration , move the i to a unique other element 
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }

            // for each i start with j and k 
            int j = i + 1;
            int k = n - 1;

            // now iterate the j and k as normal two pointers so that they dont cross
            while (j < k) {


                int sum = nums[i] + nums[j] + nums[k];
                
                // if sum is smaller move the left pointer 
                if (sum < 0) {
                    j++;
                } else if (sum > 0) { // if sum is greater move the right pointer 
                    k--;
                } else { 
                    // if sum is equal make a vector temp 
                    vector<int> temp = {nums[i],nums[j],nums[k]};

                    // push back trio vector to ans
                    ans.push_back(temp);

                    // move pointers
                    j++;
                    k--;

                    // move j until you encounter another unique element
                    while(j < k && nums[j] == nums[j-1]){
                        j++;
                    }

                    // move k until you encounter another unique element making sure j and k dont cross
                    while(j < k && nums[k] == nums[k+1]){
                        k--;
                    }
                    
                }
            }
        }

        // return ans
        return ans;
    }
};