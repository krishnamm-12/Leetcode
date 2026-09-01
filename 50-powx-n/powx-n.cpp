class Solution {
public:
    double power(double x, int n) {
        if (n == -1)
            return 1.0 / x;
        if (n == 0)
            return 1;
        if (n == 1)
            return x;
        double ans = power(x, n / 2);
        if (n < 0) {
            if (n % 2 == 0) {
                return ans * ans;
            } 
            else {
                return ans * ans * (1.0 / x);
            }
        } 
        else {
            if (n % 2 == 0) {
                return ans * ans;
            } 
            else {
                return ans * ans * x;
            }
        }
    }
    double myPow(double x, int n) { 
        return power(x, n); 
        }
};