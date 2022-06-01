class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num==1) return true;
        cout<<mySqrt(num);
        if(mySqrt(num)!=-1) return true;
        else return false;
    }
    int mySqrt(int x) {
        int ans=x, temp=0;
        long long l=1, h=x/2;
        while(l<=h){
            long long mid=(l+h)/2;
            if(mid*mid<=x){
                ans=mid;
                temp=x;
                l=mid+1;
            }
            else h=mid-1;
        }
        if(ans*ans==temp) return ans;
        return -1;
    }
};