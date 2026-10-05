class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int>st;
        st.push(0);
        for(char c:s){
            if(c=='('){
                st.push(0);
            }
            else{
                int is=st.top();
                st.pop();

                int curr=max(2*is,1);
                st.top()+=curr;
            }

        }
        return st.top();
    }
};