class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        if(s.size()==0) return 0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int n=g.size();
        int m=s.size();
         
         int i=0,j=0,cnt=0;
         while(i<g.size() && j<s.size()){
            if(g[i]<=s[j]){
                cnt++;
                i++;
                j++;
            }
            else j++;
         }
      return cnt;
    }
};