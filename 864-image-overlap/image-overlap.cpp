class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
      int n=img1.size();
        vector<pair<int,int>>ones1,ones2;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(img1[i][j]==1)
                ones1.push_back({i,j});

                if(img2[i][j]==1)
                ones2.push_back({i,j});
            }
        }
        unordered_map<int,int>mp;
        int maxo=0;
        for(auto [i1,j1]:ones1){
            for(auto [i2,j2]:ones2){
                int dr=i1-i2;
                int dc=j1-j2;
                int k=dr*100+dc;
                mp[k]++;

                maxo=max(maxo,mp[k]);
            }
        }
        return maxo;
    }
};