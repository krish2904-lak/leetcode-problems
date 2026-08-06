class Solution {
public:
    int smallestNumber(int n, int t) {
        int temp = n;
        
        while (true) {
            int current = temp; // temp ki copy banayein taaki temp modify na ho
            int p = 1;
            
            // Current number ke digits ka product nikalein
            while (current > 0) {
                int dig = current % 10;
                p *= dig;
                current /= 10;
            }
            
            // Agar product t se divisible hai, toh candidate number (temp) return karein
            if (p % t == 0) {
                return temp;
            }
            
            temp++; // Agla number check karein
        }
        
        return 0;
    }
};