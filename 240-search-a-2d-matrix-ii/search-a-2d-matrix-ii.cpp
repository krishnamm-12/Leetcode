class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m1, int target) {
        int n=m1.size();
        int m=m1[0].size();
      
        int row=0,col=m-1;
        while(row<n && col>=0){
            if(m1[row][col]==target) return true;
            else if(m1[row][col]<target) row++;
            else col--;

        }
        return false;
    }
};