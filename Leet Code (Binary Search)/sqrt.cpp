
class Solution {
public:
    int mySqrt(int n) {
        int s=1, e=n/2;
      while(s<=e){
       int mid=(s+e)/2;
       if (mid*mid == n)
        return mid;
    if (mid*mid < n) 
    {
        s = mid + 1;
   return= mid;
    } 
    else 
        e = mid - 1;        
}
return ans;
};
