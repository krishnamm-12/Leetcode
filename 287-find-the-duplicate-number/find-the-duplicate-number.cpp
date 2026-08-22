class Solution {
public:
    int findDuplicate(vector<int>& arr) {
    int n=arr.size();
    vector<int>v(n,0);
    for(int i=0;i<n;i++){
        v[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        if(v[i]>=2){
            return i;
        }
    }
    return 0;
    }
};