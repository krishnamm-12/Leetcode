class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size();
        int cnt=0,idx=0;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            if(nums[i]==pivot) cnt++;
        }
         for(int i=0;i<n;i++){
            if(nums[i]<pivot){
                v[idx]=nums[i];
                idx++;
            }
        }
        while(cnt){
            v[idx]=pivot;
            idx++;
            cnt--;
        }
         for(int i=0;i<n;i++){
            if(nums[i]>pivot){
                v[idx]=nums[i];
                idx++;
            }
        }
        return v;
    }
};