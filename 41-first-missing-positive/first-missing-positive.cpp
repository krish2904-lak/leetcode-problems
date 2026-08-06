class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int i=1;
        for(int j=0;j<n;j++){
            if(nums[j]==i)
            i++;
        }
        return i;
    }
};