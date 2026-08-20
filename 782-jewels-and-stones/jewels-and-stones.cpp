class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        vector<int>v(150,0);
        for(int i=0;i<stones.size();i++){
            int idx=(int)stones[i];
            v[idx]++;
        }
       int count=0;
       for(int i=0;i<jewels.size();i++){
           count+=v[(int)jewels[i]];
       }
       return count;
    }
};