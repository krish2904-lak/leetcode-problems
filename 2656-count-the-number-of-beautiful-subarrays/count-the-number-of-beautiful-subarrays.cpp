class Solution {
public:
    long long beautifulSubarrays(vector<int>& nums) {
        unordered_map<int,int>mp;
        long long count=0;
        int xr=0;
        mp[xr]++;
        for(int i=0;i<nums.size();i++){
            xr=xr^nums[i];
            count+=mp[xr];
            mp[xr]++;
        }    
        return count;
    }
};