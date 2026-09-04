class Solution {
public:
    int tribonacci(int n) {
       if(n<=1) return n;
       if(n==2) return 1;

       int last=0,mid=1,prev=1,curr;
       for(int i=1;i<=n-2;i++){
        curr=prev+mid+last;
        last=mid;
        mid=prev;
        prev=curr;
       }
        return curr;
        
    }
};