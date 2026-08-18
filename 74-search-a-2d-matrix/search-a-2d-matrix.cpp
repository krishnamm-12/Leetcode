class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int n=mat.size();
        int m=mat[0].size();
    
        int start=0,end=n*m-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            int row_ind=mid/m;
            int col_ind=mid%m;
            
            if(mat[row_ind][col_ind]==target) return true;
            else if(mat[row_ind][col_ind]<target) start=mid+1;
            else end=mid-1;
        }
        return false;
    }
};