class Solution {
public:
    int reverseDegree(string s) {
        int n=s.length();
        long long revdegree=0;
        for(int i=0;i<n;i++){
              revdegree+=(26-(s[i]-'a'))*(i+1);
        }
        return revdegree;
    }
};