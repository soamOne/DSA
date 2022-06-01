class Solution {
public:
    int mySqrt(int x) {
        if(x==1) return 1;
        int ans=x;
        long long l=1, h=x/2;
        while(l<=h){
            long long mid=(l+h)/2;
            if(mid*mid<=x){
                ans=mid;
                l=mid+1;
            }
            else h=mid-1;
        }
        return ans;
    }
};