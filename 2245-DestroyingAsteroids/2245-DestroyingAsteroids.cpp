// Last updated: 8/17/2026, 9:20:39 AM
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