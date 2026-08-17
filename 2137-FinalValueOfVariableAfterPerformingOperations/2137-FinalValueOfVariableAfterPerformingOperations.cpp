// Last updated: 8/17/2026, 9:20:49 AM
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int n = operations.size();
        int x = 0;
        for(int i =0;i<n;i++){
            if(operations[i].front() == '+' || operations[i].back() == '+'){

                x++;

            }else{
                x--;
            }
        }

        return x;
    }
};