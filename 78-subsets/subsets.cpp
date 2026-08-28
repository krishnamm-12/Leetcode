class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        int total_subset=1<<n;
        vector<vector<int>>v;
        for(int i=0;i<total_subset;i++){
            vector<int>temp;
            for(int j=0;j<n;j++){
                if((i>>j)&1) temp.push_back(nums[j]);
            }
            v.push_back(temp);
        }
        return v;
    }
};