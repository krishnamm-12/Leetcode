class Solution {
public:
double power(double x,long long n){
if(n==0) return 1;
if(n==1) return x;
 
 double ans=power(x,n/2);
 return (n%2==0) ? ans*ans : ans*ans*x;

}
    double myPow(double x, int n) {
       
        if(n<0){
             long long N=n;
             double f=power(x,-N);
             return 1.0/f;
        }
        else return power(x,n);
    }
};