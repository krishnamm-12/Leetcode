class Solution {
public:
    int maxDistinct(string s) {
        int n=s.size();
        vector<int>v(26,0);
        for(int i=0;i<n;i++){
            v[s[i]-'a']++;
        }
        int cnt=0;
        for(auto x:v){
            if(x!=0) cnt++;
        }
        return cnt;
    }
};