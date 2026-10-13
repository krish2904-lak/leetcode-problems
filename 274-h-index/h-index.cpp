class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size();
        int count=0;
        sort(citations.begin(),citations.end(),greater<int>());
        for(int i=0;i<n;i++){
            if(citations[i]>count){
                count++;
            }
        }
        return count;
    }
};