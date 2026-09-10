class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int s_even=n*(n+1);
        int sodd=n*n;
        while(s_even){
            int temp=sodd;
            sodd=s_even;
            s_even=temp%s_even;
        }
        return sodd;
    }
};