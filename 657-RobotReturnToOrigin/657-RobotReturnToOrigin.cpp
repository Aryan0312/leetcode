// Last updated: 8/18/2026, 11:39:34 PM
class Solution {

public:
    bool judgeCircle(string moves) {
        int n = moves.size();
        if(n % 2 != 0){
            return false;
        }

        int x = 0;
        int y = 0;
        for(int i =0;i<n;i++){
            if(moves[i] == 'U'){
                y++;
            }else if(moves[i] == 'D'){
                y--;
            }else if(moves[i] == 'R'){
                x++;
            }else if(moves[i] == 'L'){
                x--;
            }
        }

        return (x == 0 && y == 0)? true: false;
    }
};