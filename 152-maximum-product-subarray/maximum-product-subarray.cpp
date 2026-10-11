class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int curr=1;
        int maxi=INT_MIN;
        int suff=1;
        for(int i=0;i<n;i++){
            curr*=nums[i];
            suff*=nums[n-i-1];
            maxi=max(maxi,max(curr,suff));
        if(curr==0)
        curr=1;
        if(suff==0)
        suff=1;
        }
        return maxi;

    }
};