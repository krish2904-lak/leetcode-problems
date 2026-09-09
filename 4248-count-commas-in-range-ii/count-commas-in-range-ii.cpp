class Solution {
public:
    long long countCommas(long long n) {
       long long count=0;
       long long num=1000;
       for(num=1000;num<=n;num*=1000){
        count+=(n-num+1);
       }
       return count;
    }

};