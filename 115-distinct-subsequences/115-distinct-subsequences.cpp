class Solution {
public:
    int numDistinct(string s, string t) {
        int l=s.length();
        int m=t.length();
        vector<vector<double>>dp(l+1, vector<double>(m+1, 0));
        for(int i=0;i<l+1;i++) dp[i][0]=1;
        
        for(int i=1;i<=l;i++){
            for(int j=1;j<=m;j++){
                if(s[i-1]==t[j-1]){
                    dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
                }
                else dp[i][j]=dp[i-1][j];
            }
        }
        return int(dp[l][m]);
        
    }
};