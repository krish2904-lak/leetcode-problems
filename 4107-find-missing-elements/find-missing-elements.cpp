class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int> ans;
        unordered_map<int,int>mp;
        int start=nums[0];
        int end=nums[n-1];
        for(int i=0;i<n;i++){
            mp[nums[i]];
        }
        for(int i=start;i<=end;i++){
            if(mp.find(i)==mp.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};