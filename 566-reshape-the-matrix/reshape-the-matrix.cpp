class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n=mat.size();
        int m=mat[0].size();
        if(n==r && m==c ) return mat;
        if(n*m!=r*c) return mat;

        vector<vector<int>>res(r,vector<int>(c));
        int x=0,y=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                  if(y<c){
                    res[x][y]=mat[i][j];
                  }
                  else{
                    x++;
                    y=0;
                    res[x][y]=mat[i][j];
                  }
                  y++;
            }
            if(x<r) continue;
            else break;
        }
        return res;
    }
};