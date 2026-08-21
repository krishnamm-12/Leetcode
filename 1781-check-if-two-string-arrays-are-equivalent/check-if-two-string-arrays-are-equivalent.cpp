class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int n=word1.size();
        int m=word2.size();
        string s,t;
        for(auto x: word1){
            s+=x;
        }
        for(auto x: word2){
            t+=x;
        }
        if(s==t) return true;
        return false;
    }
};