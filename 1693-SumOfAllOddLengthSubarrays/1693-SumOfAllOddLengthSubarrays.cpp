// Last updated: 8/17/2026, 9:21:19 AM
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