class Solution {
public:
    int ans=0;
    int numberOfMatches(int n) {
        if(n==1) return ans;
        if(n%2==0) {
            ans+=n/2;
            numberOfMatches(n/2);
        }
        else{
            ans+=((n-1)/2);
            numberOfMatches(((n-1)/2)+1);
        }
        return ans;
    }
    
    
};