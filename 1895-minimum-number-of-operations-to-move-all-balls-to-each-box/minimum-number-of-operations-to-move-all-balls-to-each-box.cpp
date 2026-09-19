class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.size();
        vector<int>v;
        int cnt;
        for(int i=0;i<n;i++){
            cnt=0;
            for(int j=0;j<n;j++){
                if(boxes[j]=='0') continue;
                else cnt+=abs(j-i);
            }
            v.push_back(cnt);
        }
        return v;
    }
};