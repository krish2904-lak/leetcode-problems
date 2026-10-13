class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size();
        int count=0;
        sort(citations.begin(),citations.end());
        for(int i=n-1;i>=0;i--){
            if(citations[i]>=n-i){
            count=n-i;
            }
            else{
                break;
            }

        }
        return count;
    }
};