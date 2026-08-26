class Solution {
public:
    bool search(vector<int>& arr, int target) {
        int start=0,end=arr.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(arr[mid]==target) return true;

            else if(arr[start]==arr[mid] && arr[end]==arr[mid]){
                    start++;
                    end--;
                }
            else if(arr[mid]>=arr[start]){
                 if(arr[start]<=target && arr[mid]>=target){
                    end=mid-1;
                }
                else start=mid+1;
            }
            else{
                
                if(arr[mid]<=target && arr[end]>=target){
                    start=mid+1;
                }
                else end=mid-1;
            }
        }
        return false;
    }
};