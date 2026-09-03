class Solution {
public:
bool check_even(vector<int>& nums){
    for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0) continue;
            return false;
        }
     return true;
}
bool check_odd(vector<int>& nums){
          for(int i=0;i<nums.size();i++){
            if(nums[i]%2!=0) continue;
            return false;
        }
         return true;
 }
    
    bool uniformArray(vector<int>& nums) {
        int n=nums.size();
        if(check_even(nums)) return true;
        if(check_odd(nums)) return true;

       
        

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
        if(se>so) return true;
        return false;
    }
};