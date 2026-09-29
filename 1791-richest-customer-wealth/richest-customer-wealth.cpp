class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
            int maxi=0;
            for(auto customer:accounts){
                int curr=0;
                for(int bank:customer){
                    curr+=bank;
                }
                maxi=max(maxi,curr);
            }
            return maxi;
      
    }
};