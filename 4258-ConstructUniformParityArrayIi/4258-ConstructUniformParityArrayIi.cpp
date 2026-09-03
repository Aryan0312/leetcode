// Last updated: 9/4/2026, 3:58:15 AM
class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();

//Always True (Case 1): If the smallest element in the array is odd, you can always subtract it from other numbers to flip their parity, making the entire array odd.

// Sometimes True (Case 2): If the smallest element is even, you cannot make the array odd. However, if the array contains no odd numbers to begin with, the array is already all even, so it remains true.

// False (Case 3): If the smallest element is even AND there is at least one odd number in the array, you cannot transform the array into a uniform parity.

    int smallest = *min_element(nums1.begin(),nums1.end());

    // if smallest number is odd , no problem , if the array contains all odds , or even mix , we can always tranform them to all odds
    if(smallest % 2 != 0){
        return true;
    }else{
        // if smallest number is even , then we cannot make it all odds ever , so if smallest is even and we encounter another odd , then we return false, else true.

        for(int i =0;i<n;i++){
            if(nums1[i] %2 != 0){
                return false;
            }
        }

    }

    return true;

    }
};