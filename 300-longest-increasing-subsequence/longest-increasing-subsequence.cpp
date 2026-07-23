class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> res;
        for(int n:nums){
            if( res.empty() || res.back()<n){
                res.push_back(n);

            }
            else{
                int idx=binarysearch(res,n);
                res[idx]=n;
            }
        }

        return res.size();
    }
        int binarysearch(vector<int> & nums,int target){
            int left=0;
            int right=nums.size()-1;
            while(left<=right){
                int mid=left+(right-left)/2;
                if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                right=mid-1;
            }
            else{
                left=mid+1;
        }

        }
        return left;
}
};