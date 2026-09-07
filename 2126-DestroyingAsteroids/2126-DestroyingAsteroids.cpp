// Last updated: 9/7/2026, 11:10:45 PM
class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        
        int n = asteroids.size();
        int sum = mass;
        sort(asteroids.begin(),asteroids.end());
        for(int i =0;i<n;i++){
            if(sum >= 1e5){
                return true;
            }
            if(asteroids[i] > sum){
                return false;
            }

            sum += asteroids[i];
        }

        return true;
        
    }
};