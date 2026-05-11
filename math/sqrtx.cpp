class Solution {
public:
    int mySqrt(int x) {
        double low = 0 , high = x , mid;
        double  eps = 1e-6; 

        while(high  - low  > eps){
            mid =  (high + low)/2.0;

            if(mid * mid <= x) low = mid;
            else high = mid ;

        }
        return (int)high;

        
    }
};