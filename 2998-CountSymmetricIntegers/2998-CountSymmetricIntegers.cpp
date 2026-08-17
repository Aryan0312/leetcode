// Last updated: 8/17/2026, 9:19:57 AM
class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count = 0;
        for(int i = low;i<=high;i++){
            int num = i;
            int length = floor(log10(num) + 1);
            int curr = 1;
            int leftSum = 0;
            int rightSum = 0;
            if(length%2 ==0){
                while(num >0){
                    if(curr <= length/2){
                        rightSum += num%10;
                       
                    }else{
                        leftSum += num%10;
                        if(leftSum >rightSum){
                            break;
                        }
                    }
                    
                    num/=10;
                    
                    curr++;
                }

                if(leftSum == rightSum){
                    count++;
                }
                
            }
            

        }

        return count;
    }
};