class Solution {
public:
    bool checkIfPangram(string sentence) {
        //krish
        vector<int> arr(26,0);
        for(char c:sentence){
            int index=c-'a';
            arr[index]++;
        }
        for(int count:arr){
            if(count==0)
            return false;
        }
        return true;
    }
};