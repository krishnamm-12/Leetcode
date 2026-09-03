class Solution {
public:

    
    bool uniformArray(vector<int>& nums) {
        int n=nums.size();
    

        // find smallest even or odd
        int se=INT_MAX,so=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                se=min(se,nums[i]);
            }
            if(nums[i]%2!=0){
                so=min(so,nums[i]);
            }
        }
        if(se==INT_MAX && so) return true;
        else if(se && so==INT_MAX) return true;
        else if(se>so) return true;
        return false;
    }
};