class Solution {
public:
    vector<int> plusOne(vector<int>& arr ) {
        int n=arr.size();
        bool flag=false;
        if(arr[n-1]<9){
           arr[n-1]++;
           return arr;
        } 
        else {
            for(int i=n-1;i>=0;i--){
                if(arr[i]==9){
                    arr[i]=0;
                    flag=true;
                }
                else if(arr[i]<9){
                    arr[i]++;
                    flag=false;
                    return arr;
                }
            }
        }
        if(flag){
            arr.push_back(1);
            reverse(arr.begin(),arr.end());
        }
        return arr;
    }
};