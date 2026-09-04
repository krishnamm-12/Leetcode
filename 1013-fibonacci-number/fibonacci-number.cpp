class Solution {
public:
    int fib(int n) {
        if(n<=1) return n;
        int last=0,prev=1,curr;
        for(int i=1;i<=n-1;i++){
            curr=prev+last;
            last=prev;
            prev=curr;
        }
        return curr;
    }
};