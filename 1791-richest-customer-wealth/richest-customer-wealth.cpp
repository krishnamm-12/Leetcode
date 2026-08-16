class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
           int n=accounts.size();
           int m=accounts[0].size();
            
            int mx_wealth=INT_MIN,total_money;

           for(int i=0;i<n;i++){
            total_money=0;
            for(int j=0;j<m;j++){
                total_money+=accounts[i][j];
            }
            if(total_money>mx_wealth) mx_wealth=total_money;
           }
           return mx_wealth;
    }
};