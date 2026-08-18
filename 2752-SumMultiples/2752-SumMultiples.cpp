// Last updated: 8/18/2026, 11:38:09 PM
class Solution {
public:
    int sumOfMultiples(int n) {
        int sum = 0;
        for(int i =0;i<=n;i++){
            if(i % 3 == 0 || i % 5 == 0 || i % 7 == 0){
                sum += i;
            }
        }

        return sum;
    }
};