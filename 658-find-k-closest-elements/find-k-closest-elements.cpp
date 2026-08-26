class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n=arr.size();
        vector<int>v(k);
        // case 1 if x<arr[0];
        if(x<arr[0]){
            for(int i=0;i<k;i++){
                v[i]=arr[i];
            }
            return v;
        }
        // x>nums[n-1];
        if(x>arr[n-1]){
            int i=n-1;
            int j=k-1;
            while(j>=0){
                v[j]=arr[i];
                i--;
                j--;
            }
            return v;
        }
        // x is present in array
        int start=0,end=n-1;
        bool flag=false;
        int t=0,mid=-1; // index of vector v;
        while(start<=end){
            mid=start+(end-start)/2;
            if(arr[mid]==x){
                flag=true; //present
                v[t]=x;
                t++;
                break;
            }
            else if(arr[mid]<x) start=mid+1;
            else end=mid-1;
        }
       int lb=end,ub=start; // if element is not present
       if(flag==true){
        lb=mid-1;
        ub=mid+1;
       }
       while(t<k && lb>=0 && ub<=n-1){
            int diff1=abs(arr[lb]-x);
            int diff2=abs(arr[ub]-x);

            if(diff1<=diff2){
             v[t]=arr[lb];
             lb--;
            }
            else{
             v[t]=arr[ub];
             ub++;
            }
            t++;
       }
       if(lb<0){
        while(t<k){
            v[t]=arr[ub];
            t++;
            ub++;
        }
       }
       if(ub>n-1){
        while(t<k){
            v[t]=arr[lb];
            lb--;
            t++;
        }
       }
   sort(v.begin(),v.end());
   return v;
    }
};