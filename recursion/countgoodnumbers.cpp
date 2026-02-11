class Solution {
public:
   const long long MOD = 1e9 + 7;

   long long  power(long long x , long long n) {
    if (n == 0) return 1;

    long long half = power(x , n/2);

    long long result = (half * half) % MOD;

    if (n % 2 == 1)
            result = (result * x) % MOD;
    return result;
   }
   
    int countGoodNumbers(long long n) {
        long long odd = n/2;
        long long even = n/2 + n%2;

        long long result =
            (power(5, even) * power(4, odd)) % MOD;

        return (int)result;
    }
};
