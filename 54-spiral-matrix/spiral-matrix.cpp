class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& m1) {
        int n = m1.size();
        int m = m1[0].size();

        vector<int> v;

        int minr = 0, maxr = n - 1;
        int minc = 0, maxc = m - 1;

        while (minr <= maxr && minc <= maxc) {

            for (int j = minc; j <= maxc; j++) {
                v.push_back(m1[minr][j]);
            }
            minr++;

            if (minr > maxr || minc > maxc)
                break;

            for (int k = minr; k <= maxr; k++) {
                v.push_back(m1[k][maxc]);
            }
            maxc--;

            if (minr > maxr || minc > maxc)
                break;

            for (int l = maxc; l >= minc; l--) {
                v.push_back(m1[maxr][l]);
            }

            maxr--;

            if (minr > maxr || minc > maxc)
                break;

            for (int m = maxr; m >= minr; m--) {
                v.push_back(m1[m][minc]);
            }
            minc++;
        }
        return v;
    }
};