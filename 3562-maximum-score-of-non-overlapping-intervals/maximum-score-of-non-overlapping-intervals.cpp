class Solution {
public:
    struct State {
        long long score;
        vector<int> ids;
    };

    vector<vector<int>> a;
    vector<int> next;
    vector<vector<State>> dp;
    vector<vector<bool>> vis;

    State solve(int i, int k) {
        if (i == a.size() || k == 0)
            return {0, {}};

        if (vis[i][k])
            return dp[i][k];

        vis[i][k] = true;

        State skip = solve(i + 1, k);

        State take = solve(next[i], k - 1);
        take.score += a[i][2];
        take.ids.push_back(a[i][3]);

        sort(take.ids.begin(), take.ids.end());

        if (take.score > skip.score ||
            (take.score == skip.score && take.ids < skip.ids))
            return dp[i][k] = take;

        return dp[i][k] = skip;
    }

    vector<int> maximumWeight(vector<vector<int>>& intervals) {
        int n = intervals.size();

        a.resize(n);

        for (int i = 0; i < n; i++) {
            a[i] = {
                intervals[i][0],
                intervals[i][1],
                intervals[i][2],
                i
            };
        }

        sort(a.begin(), a.end());

        next.resize(n);

        for (int i = 0; i < n; i++) {
            int l = i + 1;
            int r = n;

            while (l < r) {
                int mid = l + (r - l) / 2;

                if (a[mid][0] > a[i][1])
                    r = mid;
                else
                    l = mid + 1;
            }

            next[i] = l;
        }

        dp.resize(n, vector<State>(5));
        vis.resize(n, vector<bool>(5, false));

        return solve(0, 4).ids;
    }
};