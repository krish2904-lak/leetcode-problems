class Solution {
public:
    int maxPower(string s) {
        int maxi=1;
        int curr=1;
        for(int i=1;i<s.length();i++){
            if(s[i]==s[i-1]){
                curr++;
                maxi=max(maxi,curr);
            }
            else{
            curr=1;
        }
        }
        return maxi;
    }
};