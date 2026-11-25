class Solution {
public:
    int maxLength(vector<int>& nums) {
      int n = nums.size();
        int ans = 0;

        int mx = 0;
        long long totalLcm = 1;
        for (int x : nums) {
            mx = max(mx, x);
            totalLcm = lcm(totalLcm, (long long)x);
        }
        long long maxProd = totalLcm * mx;

        for (int i = 0; i < n; i++) {
            long long prod = 1;
            long long g = 0;
            long long l = 1;
            for (int j = i; j < n; j++) {
                prod *= nums[j];
                if (prod > maxProd) break;

                g = gcd(g, (long long)nums[j]);
                l = lcm(l, (long long)nums[j]);

                if (prod == g * l) {
                    ans = max(ans, j - i + 1);
                }
            }
        }
        return ans;
    }
};