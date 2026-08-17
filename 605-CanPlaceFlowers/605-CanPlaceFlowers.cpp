// Last updated: 8/17/2026, 9:22:28 AM
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int no = flowerbed.size();


        if(n == 0 ){
            return true;
        }

        if(no == 1 ){
            return !((bool)flowerbed[0]);
        }

 

        int flowerPlaced = 0;

        if(!flowerbed[0] && !flowerbed[1]){
            flowerbed[0] = 1;
            flowerPlaced++;
        }


        for(int i =1;i<no - 1;i++){
            if(!flowerbed[i] && !flowerbed[i-1] && !flowerbed[i+1]){
                // if 0 and prev and next zero then place 1 
                flowerbed[i] = 1;
                flowerPlaced++;

            }

        }

        if(!flowerbed[no-1] && !flowerbed[no-2]){
            flowerbed[no-1] = 1;
            flowerPlaced++;
        }

        return flowerPlaced >= n;
    }
};