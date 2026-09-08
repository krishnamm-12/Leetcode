class Solution {
public:
int digitsum(int i){
    int sum=0;
    while(i){
        sum+=i%10;
        i/=10;
    }
    return sum;
}
    int countBalls(int l, int h) {
        vector<int>v(46,0);
        for(int i=l;i<=h;i++){
            v[digitsum(i)]++;
        }
        return *max_element(v.begin(),v.end());
    }
};