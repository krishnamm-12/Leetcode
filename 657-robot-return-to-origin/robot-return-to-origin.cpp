class Solution {
public:
    bool judgeCircle(string s) {
        int n=s.size();
        int x_c=0;
        int y_c=0;
        for(int i=0;i<n;i++){
            if(s[i]=='R') x_c++;
            else if(s[i]=='L') x_c--;
            else if(s[i]=='U') y_c++;
            else y_c--;
        }
        if(x_c==0 && y_c==0) return true;
        return false;
    }
};