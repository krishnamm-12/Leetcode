class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v;
        long long row = 0, curr;
        while (row <numRows) {
            vector<int> curr_row;
            curr=1;
            curr_row.push_back(curr);
            
            for (int i = 0; i < row; i++) {

                curr = (curr * (row - i)) / (i + 1);
                curr_row.push_back(curr);
            }
            
            v.push_back(curr_row);
            row++;
        }
        return v;
    }
};