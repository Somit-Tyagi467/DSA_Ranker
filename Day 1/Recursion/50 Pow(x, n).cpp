class Solution {
public:
    double solve(long double num, long long pow){
        
        if(pow==0){
            return 1.0;
        }
        double half = solve(num, pow / 2);

        if (pow % 2 == 0) {
            return half * half;
        } 
        
        else {
            return half * half * num;
        }
    }
    double myPow(double x, int n) {
        long long N=n;
        if (N < 0) {
            x = 1.0 / x;
            N = -N;
        }
        return solve(x,N);
    }
};