class Solution {
public:
void helper(int idx,vector<int> arr,vector<int>& nums,vector<vector<int>>& p){
    if(idx==nums.size()){
        p.push_back(arr);
        return;
    }
    helper(idx+1,arr,nums,p);
    arr.push_back(nums[idx]);
    helper(idx+1,arr,nums,p);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>arr;
        vector<vector<int>>p;
        helper(0,arr,nums,p);
        return p;
    }
};