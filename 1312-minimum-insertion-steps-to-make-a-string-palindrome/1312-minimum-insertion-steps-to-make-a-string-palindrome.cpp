class Solution {
public:
    int minInsertions(string s) {
        string s2=s;
        reverse(s2.begin(), s2.end());
        int l=s.size(), l2=s2.size();
        int dp[l+1][l2+1];
        for(int i=0;i<=l;i++) dp[i][0]=0;
        for(int j=0;j<=l2;j++) dp[0][j]=0;
        for(int i=1;i<=l;i++){
            for(int j=1;j<=l2;j++){
                if(s[i-1]==s2[j-1]) dp[i][j]=1+dp[i-1][j-1];
                else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return l-dp[l][l2];
    }
};