class Solution {
public:
    string removeOuterParentheses(string s) {
        string result="";
        int curr=0;
        for(char c:s){
                if(c=='('){
                    if(curr>0)
                    result+=c;
                    curr++;
            }
            else if(c==')'){
            curr--;
            if(curr>0)
            result+=c;
            }
            
    }
        return result;
    }
};