class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int minr=0,maxr=n-1;
        int minc=0,maxc=n-1;
        int count=1;

        vector<vector<int>>m1(n,vector<int>(n));

        while(minr<=maxr && minc<=maxc){
        
        for(int i=minc;i<=maxc;i++){
            m1[minr][i]=count;
            count++;
        }
        minr++;
        if(minr>maxr || minc>maxc) break;
        for(int j=minr;j<=maxr;j++){
            m1[j][maxc]=count;
            count++;
        }
        maxc--;
        if(minr>maxr || minc>maxc) break;
        for(int k=maxc;k>=minc;k--){
            m1[maxr][k]=count;
            count++;
        }
        maxr--;
        if(minr>maxr || minc>maxc) break;

        for(int l=maxr;l>=minr;l--){
            m1[l][minc]=count;
            count++;
        }
        minc++;
        }
        return m1;
    }
};