class Solution {
public:
    vector<int> getRow(int n) {
        vector<int>v;
        long long curr=1;
       v.push_back(curr);
       for(int i=0;i<n;i++){
        curr=(curr*(n-i))/(i+1);
        v.push_back(curr);
       }
       return v;
    }
};