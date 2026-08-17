// Last updated: 8/17/2026, 9:21:05 AM
class Solution {
public:
    bool squareIsWhite(string coordinates) {
    


        int x = coordinates[0] - 'a';
        int y = (coordinates[1] - '0') - 1;

        if((x+y)% 2 == 0){
            // even 
            return false;
        }

        return true;
    }
};