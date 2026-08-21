class Solution {
public:
    string removeDuplicates(string s) {
        int n=s.length();
        int i=0;
        for(int j=0;j<n;j++){
            if(i>0 && s[i-1]==s[j]){
                i--;
            }
            else{
                s[i]=s[j];
                i++;
            }
        }
        return s.substr(0,i);
    }
};