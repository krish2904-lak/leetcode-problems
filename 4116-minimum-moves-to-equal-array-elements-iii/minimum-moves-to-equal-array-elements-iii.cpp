class Solution {
public:
    int minMoves(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        int maxi=INT_MIN;
        for(int num:nums){
            sum+=num;
            maxi=max(maxi,num);
        }
        return n*maxi-sum;
    }
};