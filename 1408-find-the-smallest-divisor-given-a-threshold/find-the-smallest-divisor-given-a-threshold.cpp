class Solution {
public:
int div_result(vector<int>& nums,int mid){
    int sum=0;
    for(int i=0;i<nums.size();i++){
       sum+=(nums[i]+mid-1)/mid;
     }
     return sum;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        int mx=*max_element(nums.begin(),nums.end());
        int lo=1,hi=mx,ans=INT_MAX;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            int x=div_result(nums,mid);
            if(x<=threshold){
                
                hi=mid-1;;
            }
            else lo=mid+1;
        }
        return lo;
    }
};