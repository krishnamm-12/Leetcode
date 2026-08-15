class Solution {
public:

int fact(int x){
    int ans=1;
    for(int i=2;i<=x;i++){
        ans*=i;
    }
    return ans;
}

vector<int> possiblepermutation(vector<int>& arr){
       // find pivot indx;
       int idx=-1,n=arr.size();
       for(int i=n-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            idx=i;
            break;
        }
       }

       if(idx==-1){
        reverse(arr.begin()+(idx+1),arr.end());
        return arr;
       }
       else{
       
        reverse(arr.begin()+(idx+1),arr.end());
      
        for(int i=idx+1;i<n;i++){
          if(arr[idx]<arr[i]){
            swap(arr[i],arr[idx]);
            break;
         }
        else continue;
      }
       }

   return arr;

}


    vector<vector<int>> permute(vector<int>& arr) {
        vector<vector<int>>v;
        
        int total_permutation=fact(arr.size());

        while(total_permutation>0){
            v.push_back(possiblepermutation(arr));
            total_permutation--;
        }

        return v;
    }
};