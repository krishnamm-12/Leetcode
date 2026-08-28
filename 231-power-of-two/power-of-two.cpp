class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1) return true;
        if(n%2!=0 || n<=0) return false;

        while(n){
            n/=2;
            if(n%2!=0 && n!=1) return false;

        }
        return true;
    }
};