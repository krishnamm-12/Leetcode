class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string temp;
        string ans;
        while(ss>>temp){
            ans=temp + ans;
            ans=' '+ans;
        }
        ans.erase(0,1);
        return ans;
    }
};