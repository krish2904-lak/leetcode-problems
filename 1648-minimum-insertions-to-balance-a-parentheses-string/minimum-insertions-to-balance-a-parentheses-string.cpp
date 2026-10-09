class Solution {
public:
    int minInsertions(string s) {
       int curr=0;
       int open=0;
       for(char c:s){
        if(c=='('){
        if(open%2!=0){
        curr++;
        open--;
        }
       open+=2;
        }
       else{
       open--;
        if(open<0){
        curr++;
        open+=2;
        }
    }
       }
       return curr+open;
    }
};