class Solution {
public:
    int maxProduct(int n) {
        vector<int> arr ;

        while( n > 0 ){
            arr.push_back(n%10);
            n = n/10;
        }

        sort(arr.begin(),arr.end());


        int t = arr.size();

        return arr[t-1]*arr[t-2];
    }
};