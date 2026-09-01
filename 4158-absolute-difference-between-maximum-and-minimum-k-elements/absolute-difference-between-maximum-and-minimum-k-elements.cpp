class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int sum1=0,sum2=0;
        int i=0,j=nums.size()-1;
        while(k){
            sum1+=nums[j];
            j--;
            sum2+=nums[i];
            i++;

            k--;
        }
        return abs(sum1-sum2);
    }
};