class Solution {
public:
    int maxFreqSum(string s) {
       int n=s.length();
       vector<int>v(26,0);
       for(int i=0;i<n;i++){
          v[s[i]-'a']++;
       }
       int frq_vo=v[0];
       int frq_co=v[1];
       for(int i=1;i<26;i++){
            if(i=='e'-'a'|| i=='i'-'a'|| i=='o'-'a'||i=='u'-'a'){
                frq_vo=max(v[i],frq_vo);
            }
            else frq_co=max(v[i],frq_co);
       }
       return frq_vo+frq_co;
    }
};