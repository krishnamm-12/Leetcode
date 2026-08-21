class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s="";
        int n=word1.size(),m=word2.size();
        int i=0,j=0;
        while(i<n && j<m){
            s+=word1[i++];
            s+=word2[j++];

        }
        for(int k=i;k<max(n,m);k++){
           if(n>m) s+=word1[k];
           else s+=word2[k];

        }
        return s;
    }
};