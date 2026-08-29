class Solution {
public:
    int minOperations(vector<int>& arr) {
        int opr=0;
        for(int i=1;i<arr.size();i++){
            if(arr[i]>arr[i-1]) continue;
            else{
                opr+=abs(arr[i]-arr[i-1])+1;
                arr[i]= arr[i]+abs(arr[i]-arr[i-1])+1;

            } 
        }
        return opr;
    }
};