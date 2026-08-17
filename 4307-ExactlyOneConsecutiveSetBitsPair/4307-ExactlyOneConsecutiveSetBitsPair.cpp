// Last updated: 8/17/2026, 9:19:11 AM
class Solution {
public:
    bool consecutiveSetBits(int n) {
        long long binary = 0;
        long long pow = 1;
        while(n>0){
            binary += pow * (n % 2);

            n = n / 2;
            pow *= 10;
        }

        string bs = to_string(binary);

        long long setBitCount = 0;
        for(int i =1;i<bs.size();i++){
 
            if(bs[i-1] == '1' && bs[i] == '1'){
                setBitCount++;
            }



        }

        if(setBitCount != 1){
                return false;
        }
        return true;
    }
};