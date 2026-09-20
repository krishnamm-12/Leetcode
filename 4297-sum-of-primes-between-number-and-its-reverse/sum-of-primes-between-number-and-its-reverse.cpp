class Solution {
public:
int reverse(int n){
    int ans=0;
    while(n){
        ans=ans*10+n%10;
        n/=10;
    }
    return ans;
}
    int sumOfPrimesInRange(int n) {
        int r=reverse(n);
        int start=min(n,r);
        int end=max(n,r),ans=0;
        while(start<=end){
            bool check=1;
            if(start==1) check=0;
            for(int i=2;i<start;i++){
                if(start%i==0){
                     check=0;
                     break;
                }
            }
            if(check){
            ans+=start;
            }
            start++;
        }
        return ans;
    }
};