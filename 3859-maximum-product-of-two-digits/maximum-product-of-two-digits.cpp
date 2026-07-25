class Solution {
public:
    int maxProduct(int n) {
        
        int t = n ; 
        int first = 0 ;

        while(t > 0){
            int r = t%10;

            if ( r > first){
                first = r ;
            }
            t = t/10;
        }

        t = n ; 
        int sec = 0 ;
        int count = 0 ;

        while( t > 0){
            int r = t%10;

            if ( r == first)
            count++;

            if ( count > 1){
                sec = first ;
            }

            if ( r > sec && r != first  ){
                sec = r ;
            } 
            t = t/10;
        }

        return first*sec;
    }
};