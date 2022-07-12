class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        vector<vector<int>> dp(m, vector<int>(n,-1));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 && j==0){
                    if(obstacleGrid[i][j]==0) dp[i][j]=1;
                    else dp[i][j]=0;
                    continue;
                }
                int u=0,l=0;
                if(i>0) u=dp[i-1][j];
                if(j>0) l=dp[i][j-1];
                if(obstacleGrid[i][j]==0) dp[i][j]=u+l;
                else dp[i][j]=0;
            }
        }
        return dp[m-1][n-1];
    }
};