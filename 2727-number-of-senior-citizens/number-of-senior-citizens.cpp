class Solution {
public:
    int countSeniors(vector<string>& details) {
        int n=details.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            string s=details[i];
            string t;
                t+=s[11];
                t+=s[12];
            if((stoi(t))>60) cnt++;
            else continue;
        }
        return cnt;
    }
};