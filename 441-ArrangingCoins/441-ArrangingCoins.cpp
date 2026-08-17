// Last updated: 8/17/2026, 9:22:49 AM
class Solution {
public:
    int arrangeCoins(int n) {
        long long  coins = 0;
        int stairs = 0;
        for(int i =1;i<=n;i++){
            // for each row keep adding coins as much as the row number 
            // we requires row length worth of coins to make that stair 
            coins += i;

            // when coins exceed the given coins exit and give the stairs 
            // because we dont have that many coins
            if(coins > n){
                return stairs;
            }

            // else if coins are still left , try to make the next stairs
            stairs++;
        }

        return stairs;
    }
};