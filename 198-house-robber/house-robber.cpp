class Solution {
public:
    int func(int n,vector<int>& nums,vector<int>& dp){
        if(n>=nums.size())
        return 0;

        if(dp[n]!=-1)
       return  dp[n];

       int pick=nums[n]+func(n+2,nums,dp);
       int notpick=func(n+1,nums,dp);

       return dp[n]=max(pick,notpick);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
        return func(0,nums,dp);
        
    }
};