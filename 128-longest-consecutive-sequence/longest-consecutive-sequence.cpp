class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        if(n==0)
        return 0;
        int cnt=1;
        int longest=1;
        int lst=INT_MAX;
        for(int i=0;i<n;i++){
            if(nums[i]-1==lst){
            cnt++;
            lst=nums[i];
            }

         else if(nums[i]!=lst){
         cnt=1;
         lst=nums[i];
         }
         longest=max(longest,cnt);
        }
        return longest;
    }
};