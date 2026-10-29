class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0,finalans=0;
        int n=nums.size();

        for(int i=0;i<n;i++){
            if(nums[i]==1) ans++;

            else {
                finalans=max(ans,finalans);
                ans=0;
            }
        }
        finalans=max(ans,finalans);
        return finalans;
    }
};