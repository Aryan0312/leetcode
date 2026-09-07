// Last updated: 9/7/2026, 10:51:48 PM
class Solution {
private:
vector<int> getPrimeFactors(int n) {
    vector<int> factors;

    // 1. Handle the only even prime number (2)
    while (n % 2 == 0) {
        factors.push_back(2);
        n /= 2;
    }

    // 2. Handle odd prime numbers up to sqrt(n)
    for (long long i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }

    // 3. If n is still greater than 2, the remaining n is prime
    if (n > 2) {
        factors.push_back(n);
    }

    return factors;
}

public:
    bool isUgly(int n) {
        if(n <= 0){
            return false;

        }

        vector<int> factors = getPrimeFactors(n);
        sort(factors.begin(),factors.end());
        for(int i =factors.size() - 1 ;i>= 0;i--){
            if(factors[i] != 2 && factors[i] != 3 && factors[i] != 5){
                return false;
            }
        }

        return true;
    }
};