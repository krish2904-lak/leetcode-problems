class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int ans=0;
        int i=0;
        for(int right=0;right<nums.size();right++){
            mp[nums[right]]++;

        while(mp[nums[right]]>k){
                mp[nums[i]]--;
                i++;
          }
          ans=max(ans,right-i+1);
        }
        return ans;
    }
};