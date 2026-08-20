class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n=nums.size();
      
        vector<int>arr1;
        vector<int>arr2;
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        for(int i=2;i<n;i++){
            if(arr1[arr1.size()-1]>arr2[arr2.size()-1]) arr1.push_back(nums[i]);
            else arr2.push_back(nums[i]);
        }
        int j=0;
        for(int i=0;i<arr1.size()+arr2.size();i++){
            if(i<arr1.size()) nums[i]=arr1[i];
            else{ 
                nums[i]=arr2[j];
                j++;
            }
        }
        return nums;
    }
};