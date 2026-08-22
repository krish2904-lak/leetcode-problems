class Solution {
public:
    bool checkDivisibility(int n) {
        string s=to_string(n);
        int sum=0;
        int prod=1;
        for(char c:s){
            int dig=c-'0';
            sum+=dig;
            prod*=dig;

        }
        return n%(sum+prod)==0;
    }
};