class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0; // no primes less than 2
        
        int cnt = 0;
        vector<bool> prime(n, true); 
        prime[0] = prime[1] = false;
        
        for (int i = 2; i < n; i++) {
            if (prime[i]) {
                cnt++;
                for (int j = 2 * i; j < n; j += i) { 
                    prime[j] = false;
                }
            }
        }
        return cnt;
    }
};
