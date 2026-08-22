class Solution {
public:
int fun(int x){
    int sum=0,product=1;
    while(x){
        sum+=x%10;
        product*=x%10;
        x/=10;
    }
    return sum+product;
}
    bool checkDivisibility(int n) {
        if(n%fun(n)==0) return true;
        return false;
    }
};