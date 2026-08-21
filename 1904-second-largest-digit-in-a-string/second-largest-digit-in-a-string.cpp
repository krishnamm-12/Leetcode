class Solution {
public:
    int secondHighest(string s) {
        int n=s.size();
        int mx=-1;
        for(int i=0;i<n;i++){
            int x=(s[i]-'0');
            if(x>=0 && x<=9){
               mx=max(x,mx);
            }
            else continue;
        }
        int sc_mx=-1;
        for(int i=0;i<n;i++){
            int x=(s[i]-'0');
            if(x!=mx && (x>=0 && x<=9)){
                sc_mx=max(x,sc_mx);
            }
        }
        return sc_mx;
    }
};