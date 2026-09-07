// Last updated: 9/7/2026, 11:11:39 PM
class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();

        int oddSum = 0;
        for(int i = 0;i<n;i++){
            int sum =0;
            for(int j =i;j<n;j++){
                sum+= arr[j];
                int len = (i-j)+1;
                if(len % 2 != 0){
                    oddSum += sum;
                }
            }
        }

        return oddSum;
    }
};