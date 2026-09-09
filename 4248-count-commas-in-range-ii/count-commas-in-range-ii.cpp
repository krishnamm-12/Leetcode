class Solution {
public:

    long long countCommas(long long n) {
        if(n<1e3) return 0;
        long long rng1=1e6-1e3;
        long long rng2=2*(1e9-1e6);
        long long rng3=3*(1e12-1e9);
        long long rng4=4*(1e15-1e12);

        if(n>=1e3 && n<1e6){
            return (n-1e3)+1;
        }
        else if(n>=1e6 && n<1e9){
            return rng1+2*(n-1e6)+2;
        }
        else if(n>=1e9 && n<1e12){
            return rng1+rng2+3*(n-1e9)+3;
        }
        else if(n>=1e12 && n<1e15){
            return rng1+rng2+rng3+4*(n-1e12)+4;
        }
        else{
            return rng1+rng2+rng3+rng4+5;
        }
       return 0;
    }
};