class Solution {
public:
bool check_palindrome(string x){
    int i=0,j=x.size()-1;
    while(i<j){
        if(x[i]!=x[j]) return false;
          i++;
          j--;
    }
     return true;
}
    bool isPalindrome(string s) {
        string s1;
        for(int i=0;i<s.size();i++){
            if(s[i]>='a' && s[i]<='z') s1.push_back(s[i]);
            else if(s[i]>='A' && s[i]<='Z') s1.push_back(s[i]+'a'-'A');
            else if(s[i]>='0' && s[i]<='9') s1.push_back(s[i]);
        }
        return check_palindrome(s1);
    }
};