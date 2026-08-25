class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        vector<bool>v(101,false);
        for(int i=0;i<nums.size();i++){
            if(nums[i]%k==0) v[nums[i]]=true; 
        }
        int ans;
        for(int i=1;i<101;i++){
            if(i%k==0 && v[i]==false){
                return i;
            }
            else if(i%k==0){
                ans=i/k;
            }
        }
        return k*(ans+1);
    }
};