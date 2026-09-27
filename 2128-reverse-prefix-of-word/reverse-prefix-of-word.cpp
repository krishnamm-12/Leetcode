class Solution {
public:
string reverse(string word,int idx){
    int start=0,end=idx;
    while(start<=end){
        swap(word[start],word[end]);
        start++;
        end--;
    }
    return word;
}
    string reversePrefix(string word, char ch) {
        int n=word.size();
        int idx=0;
        for(int i=0;i<n;i++){
            if(word[i]==ch){
                idx=i;
                break;
            } 
        }
        string s=reverse(word,idx);
        return s;
    }
};