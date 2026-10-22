class Solution {
public:
void helper(vector<string>& ans,int n,string s,int opening ,int closing ){
    if(closing==n){
        ans.push_back(s);
        return;
    }
    if(opening<n) helper(ans,n,s+"(",opening+1,closing);
    if(closing<opening) helper(ans,n,s+")",opening,closing+1);
}
    vector<string> generateParenthesis(int n) {
        vector<string>s;
        helper(s,n,"",0,0);
        return s;
    }
};