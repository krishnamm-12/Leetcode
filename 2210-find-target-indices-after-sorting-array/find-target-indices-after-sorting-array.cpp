class Solution {
public:
    vector<int> targetIndices(vector<int>& arr, int target) {
        int n=arr.size();
        
        vector<int>v;
        if(n==1){
           if(arr[0]==target){
             v.push_back(0);
             return v;
           }
           else return v;
        } 
        int start=0,end=n-1,mid, first,last;
         sort(arr.begin(),arr.end());
         while(start<=end){
            mid=start+(end-start)/2;
            if(arr[mid]==target){
                first=mid;
               end=mid-1;
           }
           else if(arr[mid]<target){
            start=mid+1;
           }
           else{
            end=mid-1;
           }
         }
        
         start=0,end=n-1;
         
         while(start<=end){
            mid=start+(end-start)/2;
            if(arr[mid]==target){
                last=mid;
            start=mid+1;
           }
           else if(arr[mid]<target){
            start=mid+1;
           }
           else{
            end=mid-1;
           }
         }

      
      
        for(int i=first;i<=last;i++){
            v.push_back(i);
        }
       
       return v;
       
       
      
    }
};