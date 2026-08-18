class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& cd) {
        int n=cd.size();
          float temp,ans;
        for(int i=1;i<n;i++){
            float xc_diff=cd[i][0]-cd[i-1][0];
            float yc_diff=cd[i][1]-cd[i-1][1];
            if(xc_diff!=0){
             ans=yc_diff/xc_diff;
            }
            else ans=INT_MAX;

            if(i==1){
                temp=ans;
            }
            else if(temp!=ans) return false;

            else continue;
        }
        return true;
    }
};