// Last updated: 8/17/2026, 9:23:31 AM
class Solution {
public:
    int countPrimes(int n) {
        vector<bool> status(n+1,true);
        vector<int> ans;

        status[0] = false;
        status[1] = false;

        for(int i = 2;i*i<=n;i++){
            if(status[i]){
                for(int j = i*i;j<n;j+=i){
                    status[j] = false;
                }

            }
        }
        
        int count = 0;
        for(int i =2;i<n;i++){
            if(status[i]){
                // cout<<i<<endl;
                count++;
            }
        }

        return count;
    }

};