class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
         int dig_sum=0,j=n-1;
         for(int i=0;i<n;i++){
             dig_sum+=(mat[i][i]);
            
             if(i==j) j--;
             else{
                dig_sum+=(mat[i][j]);
                j--;
             }
         }
        return dig_sum;
    }
};