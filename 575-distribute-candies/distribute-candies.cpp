class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        
        unordered_map<int,int> mpp ;

        for (auto x : candyType){
            mpp[x]++;
        }

        int ans = min(candyType.size()/2,mpp.size());

        return ans;

    }
};