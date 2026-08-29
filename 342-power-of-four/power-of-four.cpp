class Solution {
public:
    bool poweroftwo(int n){
        int mask=n&(n-1);
        if(mask==0) return true;
        return false;
    }
    bool perfectSquare(int n){
        int root= sqrt(n);
        if(root*root==n) return true;
        return false;
    }
    bool isPowerOfFour(int n) {
        if(n<=0) return false;
        if(n==1) return true;
        if(poweroftwo(n) && perfectSquare(n)) return true;
        return false;
    }
};