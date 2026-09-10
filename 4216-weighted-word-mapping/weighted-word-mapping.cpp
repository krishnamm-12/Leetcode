class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        int n=words.size();
        string ans="";
        for(int i=0;i<n;i++){
            int sum=0;
            string s=words[i];
            for(int j=0;j<s.size();j++){
                 sum+=weights[s[j]-'a'];
            }
            sum=sum%26;
            ans.push_back(char('a'+(25-sum)));
        }
        return ans;
    }
};