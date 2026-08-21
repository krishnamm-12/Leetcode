class Solution {
public:
    int findPermutationDifference(string s, string t) {
        vector<int>v1(26,0);
        vector<int>v2(26,0);
        for(int i=0;i<s.size();i++){
            v1[s[i]-'a']=i;
            v2[t[i]-'a']=i;
        }
        int permutation_diff=0;
        for(int i=0;i<26;i++){
            permutation_diff+=abs(v1[i]-v2[i]);
        }
        return permutation_diff;
    }
};