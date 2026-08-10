class Solution {
public:
    bool isPalindrome(string s) {
       string ans ="";
       for(char ch : s){
        if(isalnum(ch)){
            ans.push_back(tolower(ch));
        }
       } 
       int i=0;
       int j=ans.size()-1;
       while(i<j){
        if(ans[i]==ans[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
       }
       return true;
    }
};