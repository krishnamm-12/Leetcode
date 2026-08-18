class Solution {
public:
    int matrixScore(vector<vector<int>>& m1) {
        int row=m1.size();
        int col=m1[0].size();

        for(int i=0;i<row;i++){
            if(m1[i][0]==0){
                for(int j=0;j<col;j++){
                    if(m1[i][j]==0) m1[i][j]=1;
                    else m1[i][j]=0;
                }
            }
            else continue;
        }
        for(int j=0;j<col;j++){
            int noz=0,noo=0;
            for(int i=0;i<row;i++){
                if(m1[i][j]==0) noz++;
                else noo++;
            }
            if(noz>noo){
                //flip column
                for(int k=0;k<row;k++){
                    if(m1[k][j]==0) m1[k][j]=1;
                    else m1[k][j]=0;
                }
            }
        }
        int score=0,x;
        for(int i=0;i<row;i++){
            x=1;
            for(int j=col-1;j>=0;j--){
                score+=m1[i][j]*x;
                x*=2;
            }
        }
        return score;
    }
};