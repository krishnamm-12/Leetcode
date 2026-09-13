class Solution {
public:
    string addStrings(string n1, string n2) {
        int n=n1.size(),m=n2.size();
        int mx,mn,cr=0,sum;
        mn=min(n,m)-1;
        mx=max(n,m)-1;
        string add="";
        while(mn>=0){
            if(n>m){
             sum=(n1[mx]-'0')+(n2[mn]-'0')+cr;
             cr=sum/10;
             char c='0'+ sum%10;
             add=c+add;
            }
            else{
             sum=(n2[mx]-'0')+(n1[mn]-'0')+cr;
             cr=sum/10;
             char c='0'+ sum%10;
             add=c+add;
            }
             mn--;
             mx--;
        }
        while(mx>=0){
            if(n>m){
             sum=(n1[mx]-'0')+cr;
             cr=sum/10;
             char c='0'+ sum%10;
             add=c+add;
      
            }
            else{
            sum=(n2[mx]-'0')+cr;
             cr=sum/10;
             char c='0'+ sum%10;
             add=c+add;
            
            }
            mx--;
        }
        if(cr){
           
            add='1'+add;
        }
        return add;
    }
};