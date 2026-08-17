class Solution {
public:
    void func(int n,int idx,vector<int>& a, int target,int sum,vector<int>& res,vector<vector<int>>&ans){
        if(idx==n){
        if(sum==target)
        ans.push_back(res);
        return;
        }

        func(n,idx+1,a,target,sum,res,ans);

        if(a[idx]+sum<=target){
            res.push_back(a[idx]);
            func(n,idx,a,target,sum+a[idx],res,ans);
            res.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n=candidates.size();
        vector<int>res;
        vector<vector<int>>ans;
        func(n,0,candidates,target,0,res,ans);
        return ans;
    }
};