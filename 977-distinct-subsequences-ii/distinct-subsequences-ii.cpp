class Solution {
public:
    int distinctSubseqII(string s) {
       int MOD = 1e9 + 7;
        vector<long long> dp(26, 0);
        
        for (char c : s) {
            int idx = c - 'a';
            long long sum = 0;
            for (int i = 0; i < 26; ++i) {
                sum = (sum + dp[i]) % MOD;
            }
            dp[idx] = (sum + 1) % MOD;
        }
        
        long long ans = 0;
        for (int i = 0; i < 26; ++i) {
            ans = (ans + dp[i]) % MOD;
        }
        
        return ans; 
    }
};