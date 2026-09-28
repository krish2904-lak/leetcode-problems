class Solution {
public:
    bool isPalindrome(int x) {
        long long  b=0;
        int a=x;
        while(x>0){
            int n=x%10;
             b = b * 10 + n;
            x=x/10;
        }
        return a==b;
    }
};