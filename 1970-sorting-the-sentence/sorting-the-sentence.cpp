class Solution {
public:
    string sortSentence(string s) {
        int n=s.size(),cnt=0;
        vector<string>v(10,"");
        string temp;
        for(int i=0;i<n;i++){
            if(s[i]!=' ') temp.push_back(s[i]);
            else{
                 int pos=temp[temp.size()-1]-'0';
                 temp.pop_back();
                 v[pos]=temp;
                 temp.clear();
                 cnt++;
            }
        }
        int pos=temp[temp.size()-1]-'0';
                 temp.pop_back();
                 v[pos]=temp;
                 temp.clear();
                 cnt++;

        
        for(int i=1;i<=cnt;i++){
            temp+=v[i];
            temp.push_back(' ');
        }
        temp.pop_back();
        return temp;       
    }
};