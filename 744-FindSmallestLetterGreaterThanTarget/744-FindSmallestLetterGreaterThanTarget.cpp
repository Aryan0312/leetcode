// Last updated: 9/7/2026, 11:12:56 PM
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();

        int low = 0;
        int high = n-1;

        int ans = 0;
        while(low <= high){
            int mid = low+(high-low)/2;

            if((letters[mid] - 'a') > (target - 'a')){
                ans = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }

        return letters[ans];
    }
};