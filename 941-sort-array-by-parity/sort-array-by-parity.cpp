class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& arr) {
        int start=0,end=arr.size()-1;
        while(start<end){
            if(arr[start]%2==0) start++;

            else if(arr[end]%2!=0) end--;
            
            else if(arr[start]%2!=0 && arr[end]%2==0){
                swap(arr[start],arr[end]);
                start++;
                end--;
            }
        }
        return arr;
    }
};