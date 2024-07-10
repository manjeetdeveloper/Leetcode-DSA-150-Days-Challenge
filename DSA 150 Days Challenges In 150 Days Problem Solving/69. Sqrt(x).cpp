class Solution {
public:
    int mySqrt(int x) {


        // netwon Second laws 
        
         //Guess Result        Quotient                             Average Result
        //     1          2 / 1 = 2                            (2 + 1) / 2 = 1.5
        
            long r = x;
            while (r * r > x)
             r = (r + x/r) / 2;
             
             return r;
       
        
    }
};