class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n=nums.size();
        if(n<2) return 0;
        sort(nums.begin(),nums.end());
        vector<int>pre(n-1);
        int idx=0;
        for(int i=0;i<n-1;i++){
            pre[idx]=nums[i+1]-nums[i];
            idx++;
        }
        return *max_element(pre.begin(),pre.end());
    }
};