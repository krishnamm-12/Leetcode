class Solution {
public:
    int longestPalindrome(string s) {
        vector<int>lower(26,0),upper(26,0);
        for(int i=0;i<s.size();i++){
            if(s[i]>=97 && s[i]<=122){
            lower[s[i]-'a']++;
            }
            else{
            upper[s[i]-'A']++;
            }
        }
        int cnt=0;
        bool check=0;
        for(int i=0;i<26;i++){
             if(lower[i]%2==0) cnt+=lower[i];
             if(upper[i]%2==0) cnt+=upper[i];
             if(lower[i]%2!=0 ){
               cnt+=(lower[i]-1);
               check=1;
             } 
             if(upper[i]%2!=0){
                 cnt+=(upper[i]-1);
                 check=1;
             }
        }
        if(check==1 ) return cnt+1;
        return cnt;
    }
};