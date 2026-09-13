class Solution {
public:
    string sortVowels(string s) {
        int n=s.size();
        vector<int>upper(26,0),lower(26,0);
        for(int i=0;i<n;i++ ){
         if(s[i]=='A'||s[i]=='E'|| s[i]=='I'|| s[i]=='O'|| s[i]=='U'){
            upper[s[i]-'A']++;
            s[i]='#';
         }
         if(s[i]=='a'||s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u'){
            lower[s[i]-'a']++;
            s[i]='#';
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
        int first=0,second=0;
        while(first<ans.size()){
            if(s[second]=='#'){
                s[second]=ans[first];
                first++;
            }
            second++;
        }
          
        return s;
    }
};