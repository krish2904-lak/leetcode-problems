class Solution {
public:
    int check(string &s, string &t, int idx1, int idx2, vector<vector<int>>& dp) {
        if (idx2 == t.size()) return 1;
        if (idx1 == s.size()) return 0;
        if (dp[idx1][idx2] != -1) return dp[idx1][idx2];

        if (s[idx1] == t[idx2]) {
            dp[idx1][idx2] = check(s, t, idx1 + 1, idx2 + 1, dp) + check(s, t, idx1 + 1, idx2, dp);
        } else {
            dp[idx1][idx2] = check(s, t, idx1 + 1, idx2, dp);
        }
        return dp[idx1][idx2];
    }

    int numDistinct(string s, string t) {
        int n = s.size();
        int m = t.size();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
        return check(s, t, 0, 0, dp);
    }
};