class Solution {
public:
   int extra(string s){
     int cnt1=0;
     for(int i=0;i<s.size();i++){
        cnt1+=(s[i]-'a');
     }
     return cnt1;
   }

    char findTheDifference(string s, string t) {
       return 'a'+(extra(t)-extra(s));
    }
};