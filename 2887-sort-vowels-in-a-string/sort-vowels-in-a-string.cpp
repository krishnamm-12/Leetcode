class Solution {
public:
    string sortVowels(string s) {
        int n=s.size();
        vector<int>upper(26,0),lower(26,0);
        for(int i=0;i<n;i++ ){
         if(s[i]=='A'||s[i]=='E'|| s[i]=='I'|| s[i]=='O'|| s[i]=='U'){
            upper[s[i]-'A']++;
         }
         if(s[i]=='a'||s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u'){
            lower[s[i]-'a']++;
         }
        }
        string ans;
        for(int i=0;i<26;i++){
            char ch='A'+i;
            while(upper[i]){
              ans+=ch;
              upper[i]--;
            }
        }
        for(int i=0;i<26;i++){
            char ch='a'+i;
            while(lower[i]){
              ans+=ch;
              lower[i]--;
            }
        }
        int idx=0;
        for(int i=0;i<n;i++){
            if(s[i]=='A'||s[i]=='E'|| s[i]=='I'|| s[i]=='O'|| s[i]=='U' || s[i]=='a'||s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u' ){
                s[i]=ans[idx];
                idx++;
                if(idx==ans.size()) break;
            }
            
        }
        return s;
    }
};