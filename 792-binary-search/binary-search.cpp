class Solution {
public:
int helper(vector<int>& nums,int target,int start,int end){
    if(start>end) return -1;
    int mid=start+(end-start)/2;
    if(nums[mid]>target) return helper(nums,target,start,mid-1);
    else if(nums[mid]<target) return helper(nums,target,mid+1,end);
    else return mid;
}
    int search(vector<int>& nums, int target) {
        int start=0,end=nums.size()-1;
        return helper(nums,target,start,end);
    }
};