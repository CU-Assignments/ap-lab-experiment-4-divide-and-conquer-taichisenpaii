class Solution {
public:
    const int MOD = 1337;

    int pow(int a, int b) {
        int result = 1;
        a %= MOD;  // Taking mod to prevent overflow
        for (int i = 0; i < b; i++) {
            result = (result * a) % MOD;
        }
        return result;
    }

    int superPow(int a, vector<int>& b) {
        int result = 1;
        for (int i = b.size() - 1; i >= 0; i--) {
            result = (result * pow(a, b[i])) % MOD;
            a = pow(a, 10);  // Power up for the next iteration
        }
        return result;
    }
};
/*
input
a =
2
b =
[3]
Output
8
Expected
8
*/
