class Solution {
public:
    string shortestCommonSupersequence(string str1, string str2) {
        int l1=str1.length(), l2=str2.length();
        int dp[l1+1][l2+1];
        
        for(int i=0;i<=l1;i++) dp[i][0]=0;
        for(int j=0;j<=l2;j++) dp[0][j]=0;
        
        for(int i=1;i<=l1;i++){
            for(int j=1;j<=l2;j++){
                if(str1[i-1]==str2[j-1]) dp[i][j]=1+dp[i-1][j-1];
                else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }

        string ans="";
        int i=str1.length(), j=str2.length();
        while(i>0 && j>0){
            if(str1[i-1]==str2[j-1]){
                ans+=str1[i-1];
                i--;j--;
            }
            
            else{
                if(dp[i-1][j]>dp[i][j-1]){
                    ans+=str1[i-1];
                    i--;
                }
                else{
                    ans+=str2[j-1];
                    j--;
                }
            }
        }
        while(i>0){
            ans+=str1[i-1];
            i--;
        }
        while(j>0){
            ans+=str2[j-1];
            j--;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
    

};