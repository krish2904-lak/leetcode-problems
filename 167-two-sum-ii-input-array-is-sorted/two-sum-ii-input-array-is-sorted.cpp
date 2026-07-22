class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int j=0;
        int i=n-1;
        while(j<i){
            int sum=numbers[j]+numbers[i];
            if(sum==target){
                return {j+1,i+1};
            } else if(sum >target){
            i--;}
            else {
                j++;
            }
        }
        return {-1,-1};
    }
};