class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five =0 ;
        int ten =0;
        int twe =0;
        for(int i : bills){
            if(i == 5) five++;
            else if(i==10){
                if(five>=1){
                    five--;
                    ten++;
                }
                else{
                    return false;
                }
            }
            else{
                if( ten>=1 && five>=1){
                    twe++;
                    ten--;
                    five--;
                }
                else if(five >=3 ){
                    twe++;
                    five -= 3;
                }
                else{
                    return false;
                }

            }
        }
        return true;
    }
};