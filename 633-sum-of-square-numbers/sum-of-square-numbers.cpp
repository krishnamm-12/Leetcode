class Solution {
public:
bool isPerfectsquare(int n){
  int x=sqrt(n);
  if(x*x==n) return true;
   return false;
  }
    bool judgeSquareSum(int c) {
        int x=0,y=c;
        while(x<=y){
            if(isPerfectsquare(x) && isPerfectsquare(y)) return true;
            else if(!isPerfectsquare(y)){
                y=(int)sqrt(y)*(int)sqrt(y);
                x=c-y;
            }
            else{
                x=((int)sqrt(x)+1)*((int)sqrt(x)+1);
                y=c-x;
            }
        }
      return false;
    }
};