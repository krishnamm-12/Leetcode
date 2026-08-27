class Solution {
public:
long long  hours_used(vector<int>& piles,int mid){
    long long total=0;
    for(int i=0;i<piles.size();i++){
        total+=(piles[i]+mid-1)/mid;
    }
    return total;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int mx=*max_element(piles.begin(),piles.end());
        int start=1,end=mx,ans=INT_MAX;
        while(start<=end){
            int mid=start+(end-start)/2;
            long long x=hours_used(piles,mid);
            
            if(x<=h){
                end=mid-1;
            }
            else start=mid+1;
        }
        return start;
    }
};