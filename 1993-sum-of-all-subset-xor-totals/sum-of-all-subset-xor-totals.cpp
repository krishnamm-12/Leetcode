class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int n=nums.size();
        int total_subset=1<<n;
        int xor_total=0;
        for(int i=0;i<total_subset;i++){
            int x=0;
            for(int j=0;j<n;j++){
                if((i>>j)&1) x^=nums[j];
            }
            xor_total+=x;
        }
        return xor_total;
    }
};