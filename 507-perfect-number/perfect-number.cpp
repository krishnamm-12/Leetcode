class Solution {
public:
    bool checkPerfectNumber(int n) {
        if(n==1) return false;
        int count=0;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0){
                count+=i;
                if(i!=1 && (n/i)!=(n%i)){
                count+=n/i;
                }
            }
        }
        if(count==n) return true;
        return false;
    }
};