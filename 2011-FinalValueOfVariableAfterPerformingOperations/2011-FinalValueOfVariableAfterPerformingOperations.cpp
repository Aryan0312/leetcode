// Last updated: 9/7/2026, 11:10:59 PM
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